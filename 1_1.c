#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include "system.h"

int sel;

void P1_1formula(int);
void avrspeed();
void avrvelocity();
void avracceleration();
void momentum();
void impulse();
void joule();
void power();
void kineticenergy();
void potentialenergy();

void P1_1sel()
{
	system("cls");
	printf("1 : (평균)속력\n");
	printf("2 : (평균)속도\n");
	printf("3 : (평균)가속도\n");
	printf("4 : 운동량\n");
	printf("5 : 충격량\n");
	printf("6 : 일\n");
	printf("7 : 일률\n");
	printf("8 : 운동에너지\n");
	printf("9 : 중력에 의한 위치에너지\n");
	printf("0 : 종료하기\n");
	printf("> ");
	scanf_s("%d", &sel);
	P1_1formula(sel);
}

void P1_1formula(int n)
{
	switch (n)
	{
	case 1:
		system("cls");
		printf("\n   \"v = d / t\"   단위 : m/s\n\n v (평균)속력\n d 총이동거리\n t 시간\n");
		avrspeed();
		break;
	case 2:
		system("cls");
		printf("\n   \"v = △s / △t\"   단위 : m/s\n\n v (평균)속도\n s 변위\n t 걸린시간\n (△=큰값-작은값)\n");
		avrvelocity();
		break;
	case 3:
		system("cls");
		printf("\n   \"a = v - v。/t\"   단위 : m/s²\n\n a (평균)가속도\n v 처음 속도\n v。나중 속도\n t 시간\n");
		avracceleration();
		break;
	case 4:
		system("cls");
		printf("\n   \"p = mv\"   단위 : N·s\n\n p 운동량\n m 질량\n v 속도\n");
		momentum();
		break;
	case 5:
		system("cls");
		printf("\n   \"I = F△t\"   단위 : N·s\n\n I 충격량\n F 힘\n t 시간\n (△=큰값-작은값)\n");
		impulse();
		break;
	case 6:
		system("cls");
		printf("\n   \"W = Fs\"   단위 : J(줄)\n\n W 일\n F 힘\n s 힘의 방향으로 이동한 거리\n");
		joule();
		break;
	case 7:
		system("cls");
		printf("\n   \"P = Fv\"   단위 : W(와트)\n\n P 일률\n F 힘\n v 속도\n");
		power();
		break;
	case 8:
		system("cls");
		printf("\n   \"Eκ = ½mv²\"   단위 : J(줄)\n\n Eκ 운동에너지\n m 질량\n v 속도\n");
		kineticenergy();
		break;
	case 9:
		system("cls");
		printf("\n   \"Eρ = 9.8mh\"   단위 : J(줄)\n\n Eρ 중력에 의한 위치에너지\n m 질량\n h 높이\n");
		potentialenergy();
		break;
	case 0:
		printf("프로그램을 종료합니다");
		Sleep(1000);
		exit(0);
	}
}

void avrspeed()		//(평균)속력
{
	double d, t;

	printf("총이동거리(d) : ");
	scanf_s("%lf", &d);
	printf("시간(t) : ");
	scanf_s("%lf", &t);
	printf("(평균)속력(v) = %.1fm/s\n", d / t);
	counting();
}

void avrvelocity()		//(평균)속도
{
	double s, t;

	printf("변위(s) : ");
	scanf_s("%lf", &s);
	printf("걸린시간(t) : ");
	scanf_s("%lf", &t);
	printf("(평균)속도(v) = %.1fm/s\n", s / t);
	counting();
}

void avracceleration()		//(평균)가속도
{
	double v, v0, t;

	printf("처음 속도(v) : ");
	scanf_s("%lf", &v);
	printf("나중 속도(v。) : ");
	scanf_s("%lf", &v0);
	printf("시간(t) : ");
	scanf_s("%lf", &t);
	printf("(평균)가속도(a) = %.1fm/s²\n", (v - v0) / t);
	counting();
}

void momentum()		//운동량
{
	double m, v;

	printf("질량(m) : ");
	scanf_s("%lf", &m);
	printf("속도(v) : ");
	scanf_s("%lf", &v);
	printf("운동량(p) = %.1fN·s\n", m * v);
	counting();
}

void impulse()		//충격량
{
	double f, t;

	printf("힘(F) : ");
	scanf_s("%lf", &f);
	printf("시간(t) : ");
	scanf_s("%lf", &t);
	printf("충격량(I) = %.1fN·s\n", f * t);
	counting();
}

void joule()		//일
{
	double f, s;

	printf("힘(F) : ");
	scanf_s("%lf", &f);
	printf("힘의 방향으로 이동한 거리(s) : ");
	scanf_s("%lf", &s);
	printf("일(W) = %.1fJ\n", f * s);
	counting();
}

void power()		//일률
{
	double f, v;

	printf("힘(F) : ");
	scanf_s("%lf", &f);
	printf("속도(v) : ");
	scanf_s("%lf", &v);
	printf("일률(P) = %.1fW\n", f * v);
	counting();
}

void kineticenergy()		//운동에너지
{
	double m, v;

	printf("질량(m) : ");
	scanf_s("%lf", &m);
	printf("속도(v)	 : ");
	scanf_s("%lf", &v);
	printf("운동에너지(Eκ) = %.lfJ\n", 0.5 * m * pow(v, 2));
	counting();
}

void potentialenergy()		//중력에 의한 위치에너지
{
	double m, h;

	printf("질량(m) : ");
	scanf_s("%lf", &m);
	printf("속도(h) : ");
	scanf_s("%lf", &h);
	printf("중력에 의한 위치에너지(Eρ) = %.lfJ\n", 9.8 * m * h);
	counting();
}
