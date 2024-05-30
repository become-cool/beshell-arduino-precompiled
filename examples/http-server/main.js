import * as wifi from "wifi"
import * as mg from "mg"

(async function (){

    // 创建热点
    if( ! await wifi.startAP("BeShell-APP", "12345678") ){
        console.log("Failed to start AP")
        return
    }
    console.log("AP started")

    mg.listenHttp("0.0.0.0:80",(ev, req, res)=>{
        // 处理 http 请求
        if(ev=="http.msg") {
            // 动态页面
            if( req.uri() == "/hello" ){
                res.reply("<h3>Hello World</h3>")
            }
            // 静态页面
            else {
                res.serveDir(res, "/public")
            }
        }
    })

})()