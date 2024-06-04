/**
 * BeShell 文档主页： https://beshell.become.cool
 * 
 * 编译前准备：
 * 
 * * arduion 菜单栏：`工具` -> `开发板: "xxxxxx"` 选择和你使用的开发板一致。
 * 
 * 编译上传后：
 * 
 * 打开 `工具` -> `串口监视器` 中，选择 115200 波特率。
 * 
 * 输入 `help` 指令查看 BeShell 指令列表。
 * 
 * 输入 `console.log("hello world")` 执行 JavaScript 代码。
 * 
 */

#include <BeShell.hpp>

be::BeShell beshell ;

void setup() {  
  // 启动 BeShell
  beshell.setup() ;
}

// 主循环
void loop() {
  beshell.loop() ;
}