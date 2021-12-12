#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include "system.h"

void P1_3formula(int);
void wavespeed();
void wavepower();
void Interference1();
void Interference2();
void lightenergy();
void photoelectric();
void materialwave();

void P1_3sel()
{
	int sel;

	system("cls");
	printf("1 : 파동의 전파속도\n");
	printf("2 : 파동의 세기\n");
	printf("3 : 보강간섭\n");
	printf("4 : 상쇄간섭\n");
	printf("5 : 빛이 가진 에너지\n");
	printf("6 : 광전효과\n");
	printf("7 : 드브로이의 물질파의 파장\n");
	printf("> ");
	scanf_s("%d", &sel);
	P1_3formula(sel);
}

void P1_3formula(int n)
{
	switch (n)
	{
	case 1:
		system("cls");
		printf("\n   \"파동의 전파속도 = λ * 1 / t\"   단위 : () \n\n λ 파장 \n T 주기\n ");
		wavespeed();
		break;
	case 2:
		system("cls");
		printf("\n   \"A * A * f * f\"   단위 : () \n\n I 파동의세기 \n A 파동의 진폭\n f 파동의 진동수\n ");
		wavepower();
		break;
	case 3:
		system("cls");
		printf("\n   \"2 * m * ( 1 / 2)\"   단위 : () ²\n\n m 파장의 위상차( m >= 1 )\n ");
		Interference1();
		break;
	case 4:
		system("cls");
		printf("\n   \"(2 * m + 1) * ( 1 / 2)\"   단위 : ()\n\n m 파장의 위상차( m >= 1 )\n ");
		Interference2();
		break;
	case 5:
		system("cls");
		printf("\n   \"h * f\"   단위 : ()\n\n E 빛이 가진 에너지\n h 플랑크 상수\n f 진동수\n ");
		lightenergy();
		break;
	case 6:
		system("cls");
		printf("\n   \"W + E\"   단위 : ()\n\n E 광전효과\n W 금속의 일함수\n E_K 광전자의 운동에너지\n ");
		photoelectric();
		break;
	case 7:
		system("cls");
		printf("\n   \"h / (m * c)\"   단위 : ()\n\n λ 드브로이의 물질파의 파장\n h 플랑크상수\n m 질량\n c 광속\n ");
		materialwave();
		break;

	}
}

void wavespeed()		//파동의 전파속도
{
	double 파장, T;

	printf("파장 : ");
	scanf_s("%lf", &파장);
	printf("주기 : ");
	scanf_s("%lf", &T);
	printf("파동의 전파속도 =  %.1f N·s\n", 파장 * 1 / T);
	counting();
}

void wavepower()		//파동의 세기
{
	double  A, f;

	printf("파동의 진폭 : ");
	scanf_s("%lf", &A);
	printf("파동의 진동수 : ");
	scanf_s("%lf", &f);
	printf("파동의 세기(I) =  %.1f N·s\n", A * A * f * f);
	counting();
}

void Interference1()		//보강간섭
{
	double m1;

	printf("m : ");
	scanf_s("%lf", &m1);
	printf("보강간섭 = %.1f N·s\n", 2 * m1 * (1 / 2));
	counting();
}

void Interference2()		//상쇄간섭
{
	double m2;

	printf("m : ");
	scanf_s("%lf", &m2);
	printf("상쇄간섭 = %.1f N·s\n", (2 * m2 + 1) * (1 / 2));
	counting();
}

void lightenergy()		//빛이 가진 에너지
{
	double h, f;

	printf("h : ");
	scanf_s("%lf", &h);
	printf("진동수(f) : ");
	scanf_s("%lf", &f);
	printf("빛이 가진 에너지(E) = %.1f J\n", h * f);
	counting();
}

void photoelectric()		//광전효과
{
	double W, E;

	printf("금속의 일함수(W) : ");
	scanf_s("%lf", &W);
	printf("광전자의 운동에너지(E_k) : ");
	scanf_s("%lf", &E);
	printf("광전효과(E) = %.1f J\n", W + E);
	counting();
}

void materialwave()		//드브로이의 물질파의 파장
{
	double h, m, c;

	printf("플랑크상수(h) : ");
	scanf_s("%lf", &h);
	printf("질량(m) : ");
	scanf_s("%lf", &m);
	printf("광속(c) : ");
	scanf_s("%lf", &c);
	printf("파장 = %.1f J\n", h / (m * c));
	counting();
}
