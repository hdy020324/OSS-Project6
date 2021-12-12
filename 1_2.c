#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include "system.h"

void P1_2formula(int);
void ele_for();
void ele_field();
void far_law();
void in_mag_field();
void en_photon();
void en_at_spectrum();

void P1_2sel()
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

	P1_2formula(sel);
}

void P1_2formula(int n)
{
	switch (n)
	{
	case 1:
		system("cls");
		printf("전기력\n");
		printf("\"F=kx(Qq)/r^2\" Q,q[C], r[m], k[0. 8.9876x10^9xNxm^2xC^-2, 진공]\n");
		ele_for();
		break;

	case 2:
		system("cls");
		printf("전기장");
		printf("\"E=F/q\" [N/C]");
		ele_field();
		break;

	case 3:
		system("cls");
		printf("자기장의 세기");
		printf("\"B=Φ/s\" [T, 1T=1wb/m^2]\n");
		in_mag_field();
		break;

	case 4:
		system("cls");
		printf("유도기전력");
		printf("\"V=-NxΔΦ/Δt\" [N: 감은 코일의 횟수]");
		far_law();
		break;

	case 5:
		system("cls");
		printf("광자의 에너지");
		printf("\"E=hxc/λ\" [f=c/λ, h: 플랑크상수, c: 빛의 속력, λ: 빛의 파장]");
		en_photon();
		break;

	case 6:
		system("cls");
		printf("스펙트럼의 에너지");
		printf("\"E=|Em-En|\" [m,n: 양자수, 전자가 두 궤도 사이를 이동할 때 방출 또는 흡수하는 빛의 에너지] ");
		en_at_spectrum();
		break;

	case 0:
		printf("프로그램을 종료합니다.");
		Sleep(1000);
		exit(0);
	}
}

void ele_for()				//전기력 electric_force
{
	double Q, q, r, result;

	printf("Q: ");
	scanf_s("%lf", &Q);
	printf("q: ");
	scanf_s("%lf", &q);
	printf("r: ");
	scanf_s("%lf", &r);

	result = Q * q / (r * r);

	printf("F= %f", result);
	printf("\n");
	counting();
}

void ele_field()		//전기장 electric_field
{
	double F, q, result;

	printf("F: ");
	scanf_s("%lf", &F);
	printf("q: ");
	scanf_s("%lf", &q);

	result = F / q;

	printf("E= %f", result);
	printf("\n");
	counting();
}

void far_law()				//유도기전력 Faraday's_Law
{
	double N, Φ, t, result;

	printf("N: ");
	scanf_s("%lf", &N);
	printf("Φ: ");
	scanf_s("%lf", &Φ);
	printf("t: ");
	scanf_s("%lf", &t);

	result = N * (Φ / t);

	printf("V= %f", result);
	printf("\n");
	counting();
}

void in_mag_field()			//자기장의 세기 intensity of magnetic field
{
	double Φ, s, result;

	printf("Φ: ");
	scanf_s("%lf", &Φ);
	printf("s: ");
	scanf_s("%lf", &s);

	result = Φ / s;

	printf("B= %f", result);
	printf("\n");
	counting();
}

void en_photon()			//광자의 에너지
{
	double c, λ, result;

	printf("c: ");
	scanf_s("%lf", &c);
	printf("λ: ");
	scanf_s("%lf", &λ);

	result = (c / λ);

	printf("E= %fh", result);
	printf("\n");
	counting();
}

void en_at_spectrum()		//원자스팩트럼의 에너지
{
	double Em, En, a, result;
	result = 0;

	printf("Em: ");
	scanf_s("%lf", &Em);
	printf("En: ");
	scanf_s("%lf", &En);

	a = Em - En;

	if (a > 0)
		result = a;
	else if (a < 0)
		result = -a;

	printf("E= %f", result);
	printf("\n");
	counting();
}
