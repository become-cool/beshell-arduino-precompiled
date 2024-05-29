import * as wifi from "wifi"

async function main(){

    if( ! await wifi.connect("your SSID", "your PASSWORD") ){
        console.log("Failed to connect to AP")
        return
    }
    console.log("Connected to AP")


}

main()