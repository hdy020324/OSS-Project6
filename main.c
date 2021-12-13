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

void selphysics();
void selunit(int);

int sel;

int main()
{
	while (1)
	{
		selphysics();
	}
}

void selphysics()
{
	printf("1 : 물리1\n");
	printf("2 : 물리2\n");
	printf("> ");
	scanf_s("%d", &sel);
	if (sel > 2)
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
