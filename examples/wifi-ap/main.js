import * as wifi from "wifi"

async function main(){

    if( ! await wifi.startAP("BeShell-APP", "12345678") ){
        console.log("Failed to start AP")
        return
    }
    console.log("AP started")

    wifi.on("ap.sta.connected", ()=>{
        console.log("A client connected to AP")
    })
    wifi.on("ap.sta.disconnected", ()=>{
        console.log("a client disconnected to AP")
    })

}

main()