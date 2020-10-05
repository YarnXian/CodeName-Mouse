#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
int i = 0, count, crazy, tms;
void SetAndStart()
{
	system("title CodeName-Mouse");
	srand((unsigned)time(NULL));
	
	for (int n = 0; n < count; n++)
	{
		
		mouse_event(MOUSEEVENTF_MOVE | MOUSEEVENTF_ABSOLUTE, (rand() % 1500) * (rand() % 50), (rand() % 900) * (rand() % 50), 0, 0);
		Sleep(tms);
		if (n >= crazy)
		{
			mouse_event(MOUSEEVENTF_MOVE | MOUSEEVENTF_RIGHTDOWN | MOUSEEVENTF_RIGHTUP, (rand() % 1500) * (rand() % 50), (rand() % 900) * (rand() % 50), 0, 0);
		}
	}

}
int main()
{
	
	count = 10;
	crazy = 5;
	tms = 100;
	SetAndStart();
	return 0;
}