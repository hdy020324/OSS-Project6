#include <stdio.h>
#include <windows.h>

void counting()
{
	for (int i = 5; i > 0; i--)
	{
		printf("%d초 후 메인으로 이동합니다\n", i);
		Sleep(1000);
	}
	system("cls");
}
