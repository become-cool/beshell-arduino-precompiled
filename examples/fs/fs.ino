/**
 * BeShell 文档主页： https://beshell.become.cool
 * 
 * 编译前准备：
 * 
 * * arduion 菜单栏：`工具` -> `开发板: "xxxxxx"` 选择和你使用的开发板一致。
 * 
 * * arduion 菜单栏：`工具` -> `Partitions Scheme: "xxxxxx"` -> `Default 4MB with ffat (1.2MB APP/1.5MB FATFS)`
 * 
 * 编译上传后：
 * 
 * 打开 `工具` -> `串口监视器` 中，选择 115200 波特率。
 * 
 * 1. 输入 `touch main.js` 新建一个文件 main.js
 * 
 * 2. 输入 `import fs` 引入 fs 模块
 * 
 * 3. 输入 `fs.writeFileSync("/main.js", "console.log('Hello, world!')")` 写入文件内容
 * 
 * 4. 输入 `cat main.js`, 打印文件内容
 * 
 * 5. 输入 `. main.js` 运行 main.js 文件
 * 
 * 6. 输入 `reboot` 重启开发板，启动时会自动运行刚才写入的文件
 * 
 * 使用在线 IDE https://beconsole.become.cool 连接开发板，可以在线编辑文件
 * 
 */


#include <BeShell.hpp>

be::BeShell beshell ;

void setup() {  
  
  // 应用 FS 模块
  beshell.use<be::FS>() ;

  // 将 flash 上的名为 ffat 的分区挂载到 / 目录
  be::FS::mount("/", new be::FatFS("ffat",true)) ;

  // 启动 BeShell
  beshell.setup() ;

  // 运行 /main.js
  beshell.engine->evalScript("/main.js") ;
}

// 主循环
void loop() {
  beshell.loop() ;
}