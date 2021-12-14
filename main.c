#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include "1_1.h"
#include "1_2.h"
#include "1_3.h"
#include "2_1.h"
#include "2_2.h"
#include "2_3.h"

int title();
void selphysics();
void selunit(int);

int sel;

int main()
{
	title();
	while (1)
	{
		selphysics();
	}
}

int title()
{
	printf("\n  ┌─────────────────────────┐");
	printf("\n  │ ");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
	printf("▶ Physics Calculator ◀");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	printf("│\n  └─────────────────────────┘\n");
	Sleep(500);
	printf("\n  ■ 물리 계산기");
	printf("\n  ■ 제작 : 피직스(Physics)\n");
	Sleep(500);
	printf("\n  1 : 시작하기");
	printf("\n  2 : 종료하기\n");
	printf("  > ");

	int cho;
	scanf_s("%d", &cho);
	if (cho == 1)
	{
		printf("\n  프로그램을 시작합니다\n");
		Sleep(1000);
		system("cls");
		return 0;
	}
	else if (cho == 2)
	{
		printf("\n  프로그램을 종료합니다\n");
		Sleep(1000);
		exit(0);
	}
	else
		system("cls");
		title();
}

void selphysics()
{
	printf("1 : 물리1\n");
	printf("2 : 물리2\n");
	printf("3 : 종료하기\n");
	printf("> ");
	scanf_s("%d", &sel);
	if (sel == 3)
	{
		printf("\n프로그램을 종료합니다\n");
		Sleep(1000);
		exit(0);
	}
	else if (sel > 3)
	{
		system("cls");
		return 0;
	}
	selunit(sel);
}

void selunit(int n)
{
	system("cls");
	printf("1 : 1단원\n");
	printf("2 : 2단원\n");
	printf("3 : 3단원\n");
	printf("> ");
	scanf_s("%d", &sel);

	if (n == 1)
	{
		if (sel == 1)
		{
			P1_1sel();
		}
		else if (sel == 2)
		{
			P1_2sel();
		}
		else if (sel == 3)
		{
			P1_3sel();
		}
		else
		{
			system("cls");
			return 0;
		}
	}
	else if (n == 2)
	{
		if (sel == 1)
		{
			P2_1sel();
		}
		else if (sel == 2)
		{
			P2_2sel();
		}
		else if (sel == 3)
		{
			P2_3sel();
		}
		else
		{
			system("cls");
			return 0;
		}
	}
}
