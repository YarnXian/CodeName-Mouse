# CodeName-Mouse
电脑病毒会对电脑造成破坏甚至无法使用，随着网络技术的发展，计算机的普及，电脑病毒的分支恶搞病毒被人们所开发出来，这类病毒不以破坏电脑为主，只是单纯的恶作剧，通常关机重启就能恢复。  
该项目模拟了恶搞病毒经常使用的使鼠标失灵发作症状，并且你可以自定义各种参数。  
## 主要代码
* 核心代码  
`#include <windows.h>//头文件`  
`#include <time.h>//头文件`         
`srand((unsigned)time(NULL));//随机数种子`  
`mouse_event(MOUSEEVENTF_MOVE,rand()%1920,rand()%1080,0,0);//移动鼠标`  
两个rand分别对应着屏幕的X和Y坐标，但具体的数值要根据你的屏幕大小确定，我这里是1920*1080的屏幕  
* 该项目它包括了三个参数:  
**count**:鼠标失灵总次数。这里的失灵指鼠标指针在屏幕上随机移动，其代码为  
`int count = 10;`   
`for(int i = 0;i<count;i++){`  
`...`  
`}`  
**crazy**:当执行到多少次时鼠标进入疯狂状态，这里指不停地按键，其代码为:  
`if(i==crazy){`  
`mouse_event(MOUSEEVENTF_MOVE | MOUSEEVENTF_RIGHTDOWN | MOUSEEVENTF_UP,rand()%1920,rand()%1080,0,0);`  
`}`  
如果你想要按左键而不是右键，可以将上面的RIGHT换成LEFT  
**time**:这个参数是每秒执行的间隔，其代码为  
`Sleep(100);`  
Sleep这个函数表示延时，但使用的是毫秒，1000毫秒=1秒  
* 参数使用方法:  
这三个参数都是int变量，已经帮你定义好，请在main函数中进行赋值  
格式:`参数名 = 数值;`  
## 安装及使用
