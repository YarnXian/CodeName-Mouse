# CodeName-Mouse
电脑病毒会对电脑造成破坏甚至无法使用，随着网络技术的发展，计算机的普及，电脑病毒的分支恶搞病毒被人们所开发出来，这类病毒不以破坏电脑为主，只是单纯的恶作剧，通常关机重启就能恢复。  
该项目模拟了恶搞病毒经常使用的使鼠标失灵发作症状，并且你可以自定义各种参数。  
## 主要代码
* 核心代码  
`#include <windows.h>//头文件`  
`#include <time.h>//头文件`         
`srand((unsigned)time(NULL));//随机数种子`  
`mouse_event(MOUSEEVENTF_MOVE | MOUSEEVENTF_ABSOLUTE, (rand() % 1500) * (rand() % 50), (rand() % 900) * (rand() % 50), 0, 0);//移动鼠标`  
* 该项目它包括了四个参数:  
其定义代码为`int i = 0, count, crazy, tms;`  
**count**:鼠标失灵总次数。这里的失灵指鼠标指针在屏幕上随机移动，其代码为  
`for (int n = 0; n < count; n++)`  
`	{`  
`   ......`  
`}`  
**crazy**:当执行到多少次时鼠标进入疯狂状态，这里指不停地按键，其代码为:  
`if(n >= crazy){`  
`mouse_event(MOUSEEVENTF_MOVE | MOUSEEVENTF_RIGHTDOWN | MOUSEEVENTF_RIGHTUP, (rand() % 1500) * (rand() % 50), (rand() % 900) * (rand() % 50), 0, 0);`  
`}`  
如果你想要按左键而不是右键，可以将上面的RIGHT换成LEFT  
**tms**:这个参数是每秒执行的间隔，其代码为  
`Sleep(100);`  
Sleep这个函数表示延时，但使用的是毫秒，1000毫秒=1秒  
## 安装及使用  
* 安装程序  
请使用手动安装的方式进行安装，前提是你的计算机上要安装Visual Studio，没有的可以去官网安装。  
安装完开发工具后，请在github页面上选择Download ZIP进行下载，下载完成后解压，将CodeName-Mouse.sln拖入Visual Studio，然后在源文件中打开main.cpp，即可找到主函数入口。  
* 使用程序  
四个参数已经帮你定义好，只需要在main函数的`SetAndStart();`前赋值即可。四个参数均为int类型，变量i不需要进行赋值。这里已经帮你赋值，你也可以自行更改，格式为：`变量名=数值`  
示例：  
`count = 10;`  
`crazy = 5;`  
`tms=100;`  

