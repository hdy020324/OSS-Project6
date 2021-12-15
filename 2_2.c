#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include "system.h"

void P2_2formula(int);
void ele_for();
void ele_field();
void far_law();
void in_mag_field();
void en_photon();
void en_at_spectrum();

void P2_2sel()
{
	int sel;

	system("cls");
	printf("1 : 전기력\n");
	printf("2 : 전기장\n");
	printf("3 : 자기장의 세기\n");
	printf("4 : 패러데이 법칙\n");
	printf("5 : 광자의 에너지\n");
	printf("6 : 원자 스팩트럼의 에너지\n");
	printf("> ");
	scanf_s("%d", &sel);

	P2_2formula(sel);
}

void P2_2formula(int n)
{
	switch (n)
	{
	case 1:
		system("cls");
		printf("전기력\n");
		printf("\"F=kx(Qq)/r^2\"\n Q,q[C], r[m], k[0. 8.9876x10^9xNxm^2xC^-2, 진공]\n");
		ele_for();
		break;

	case 2:
		system("cls");
		printf("전기장\n");
		printf("\"E=F/q\"\n [N/C]\n");
		ele_field();
		break;

	case 3:
		system("cls");
		printf("자기장의 세기\n");
		printf("\"B=Φ/s\"\n [T, 1T=1wb/m^2]\n");
		in_mag_field();
		break;

	case 4:
		system("cls");
		printf("유도기전력\n");
		printf("\"V=-NxΔΦ/Δt\"\n [N: 감은 코일의 횟수]\n");
		far_law();
		break;

	case 5:
		system("cls");
		printf("광자의 에너지\n");
		printf("\"E=hxc/λ\"\n [f=c/λ, h: 플랑크상수, c: 빛의 속력(30만km), λ: 빛의 파장]\n");
		en_photon();
		break;

	case 6:
		system("cls");
		printf("스펙트럼의 에너지\n");
		printf("\"E=|Em-En|\"\n [m,n: 양자수, 전자가 두 궤도 사이를 이동할 때 방출 또는 흡수하는 빛의 에너지]\n ");
		en_at_spectrum();
		break;

	case 0:
		printf("프로그램을 종료합니다.");
		Sleep(1000);
		exit(0);
	}
}
