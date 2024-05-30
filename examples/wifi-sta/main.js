import * as wifi from "wifi"

async function main(){
    
    // 连接到 wifi 热点
    if( ! await wifi.connect("your SSID", "your PASSWORD") ){
        console.log("Failed to connect to AP")
        return
    }

    console.log("Connected to AP")

    // 等待 DHCP 分配 IP
    let status = await wifi.waitIP()
    if( !status ){
        console.log("got ip faild")
    } else {
        console.log("STA IP:", status.ip)
    }
}

main()