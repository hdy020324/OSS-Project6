#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <windows.h>
#include "system.h"

double Vertical_upward_movement(int cho);
double parabolic_motion(int cho);
double inertial_force(int cho);
double heat(int cho);
void P2_1sel();

//물리2 1단원
void P2_1sel() {
	int choice;
	int cho;

	system("cls");
	printf("======== 공식 선택 ========\n");
	printf("\n");
	printf("1. 연직상방운동\n");
	printf("2. 포물선 운동\n");
	printf("3. 관성력\n");
	printf("4. 열\n");
	printf("\n");
	printf("선택지를 고르시오 : ");
	scanf_s("%d", &choice);

	if (choice == 1) {

		system("cls");
		printf("1. V는? \n");
		printf("2. S는? \n");
		printf("3. V^2는? \n");
		printf("\n");
		printf("선택지를 고르시오 : ");
		scanf_s("%d", &cho);

		printf("답 : %lf", Vertical_upward_movement(cho));
		printf("\n");
		counting();
	}
	else if (choice == 2) {

		system("cls");
		printf("\n");
		printf("1. 수평 - 지면 도달 시간\n");
		printf("2. 수평 - 수평 도달 거리\n");
		printf("\n");

		printf("선택지를 고르시오 : ");
		scanf_s("%d", &cho);

		printf("\n");
		printf("답 : %lf", parabolic_motion(cho));
		printf("\n");
		counting();
	}
	else if (choice == 3) {

		system("cls");
		printf("\n");
		printf("1. 관성력의 크기\n");
		printf("2. 관성력의 방향\n");
		printf("3. 버스의 가속도\n");

		printf("\n");
		printf("선택지를 고르시오 : ");
		scanf_s("%d", &cho);

		printf("\n");
		printf("답 : %lf", inertial_force(cho));
		printf("\n");
		counting();
	}
	else if (choice == 4) {

		system("cls");
		printf("\n");
		printf("1. 열량\n");
		printf("2. 고온의 물체에서 저온의 물체로 전도 되어진 열의 양\n");
		printf("3. 열역학 제 1법칙\n");
		printf("4. 기체분자가 한 일의 양\n");
		printf("5. 기체분자의 내부에너지 변화량\n");
		printf("\n");
		printf("선택지를 고르시오 : ");
		scanf_s("%d", &cho);

		printf("답 : %lf", heat(cho));
		printf("\n");
		counting();
	}

}

//연직상방운동
double Vertical_upward_movement(int cho) {
	double v0, g, t, s;


	if (cho == 1) {
		system("cls");
		printf("\n");
		printf("v = v0 - gt\n\n");

		printf("v : 속력, v0 : 처음 속력, g : 중력가속도, t : 시간\n\n");

		printf("v0,g,t 순으로 입력하시오 : ");
		scanf_s("%lf %lf %lf", &v0, &g, &t);
		return (v0 - (g * t));
	}
	else if (cho == 2) {
		system("cls");
		printf("\n");
		printf("s = v0t - ½gt²\n\n");

		printf("s : 거리, v0 : 처음 속력, t : 시간, g : 중력가속도\n\n");

		printf("v0,g,t 순으로 입력하시오 : ");
		scanf_s("%lf %lf %lf", &v0, &g, &t);
		return ((v0 * t) - (1 / 2) * g * (t * t));
	}
	else if (cho == 3) {
		system("cls");

		printf("\n");
		printf("v²- v0² = -2gs\n\n");

		printf("v : 속력, v0 : 처음 속력, g : 중력가속도, s : 거리\n\n");

		printf("g, s 순으로 입력하시오 : ");
		scanf_s("%lf %lf", &g, &s);
		return ((-2) * g * s);
	}
	return 0;
}

//포물선 운동
double parabolic_motion(int cho) {
	double h, g, v0, t;

	if (cho == 1) {
		system("cls");
		printf("\n");
		printf("t = √(2h / g)\n\n");

		printf("t : 시간 , h : 높이, g : 중력가속도\n\n");

		printf("h, g 순으로 입력하시오 : ");
		scanf_s("%lf %lf", &h, &g);
		return (sqrt(2 * h / g));
	}
	else if (cho == 2) {
		system("cls");
		printf("\n");
		printf("v0t\n\n");

		printf("v0 : 처음 속력, t : 시간\n\n");

		printf("v0, t 순으로 입력하시오 : ");
		scanf_s("%lf %lf", &v0, &t);
		return (v0 * t);
	}
}

//관성력
double inertial_force(int cho) {
	double m, a, g, theta;

	if (cho == 1) {
		system("cls");
		printf("\n");
		printf("F = ma\n\n");

		printf("m : 질량, a : 가속도\n\n");

		printf("m, a 순으로 입력하시오 : ");
		scanf_s("%lf %lf", &m, &a);
		return (m * a);
	}
	else if (cho == 2) {
		system("cls");
		printf("물체에 주어진 힘의 방향의 반대");
		return 0;
	}
	else if (cho == 3)
	{
		system("cls");
		printf("\n");
		printf("a = gtanθ\n\n");

		printf("a : 가속도, g : 중력가속도\n\n");

		printf("g, θ순으로 입력하시오 : ");
		scanf_s("%lf %lf", &g, &theta);
		return (g * tan(theta));
	}
}

//열량
double heat(int cho) {
	double m, c, t0, t, k, A, T1, T2, l, U1, U2, W, P1, P2, V, n, R;

	if (cho == 1) {
		system("cls");
		printf("\n");
		printf("Q = mcΔt \n\n");

		printf("m : 질량, c : 비열, Δt : 온도변화\n\n");

		printf("m, c, t0, t 순으로 입력하시오 : ");
		scanf_s("%lf %lf %lf %lf", &m, &c, &t0, &t);
		return (c * m * (t - t0));
	}
	else if (cho == 2) {
		system("cls");
		printf("\n");
		printf("    kA(T1 - T2)Δt\n");
		printf("Q = --------------\n");
		printf("           l      \n\n");

		printf("Q : 열, k : 볼츠만 상수, T : 온도, t : 시간\n\n");

		printf("k, A, T1, T2, t0, t, l 순으로 입력하시오 : ");
		scanf_s("%lf %lf %lf %lf %lf %lf %lf", &k, &A, &T1, &T2, &t0, &t, &l);
		return ((k * A * (T1 - T2) * (t - t0)) / l);
	}
	else if (cho == 3) {
		system("cls");
		printf("\n");
		printf("Q = ΔU + W\n\n");
		printf("Q : 열, U : 내부 에너지, W : 일\n\n");
		printf("U1, U2, W 순으로 입력하시오 : ");
		scanf_s("%lf %lf %lf", &U1, &U2, &W);
		return ((U2 - U1) + W);
	}
	else if (cho == 4) {
		system("cls");
		printf("\n");
		printf("W = PΔV\n\n");
		printf("W : 일, P : 압력, ΔV : 부피의 변화량\n\n");

		printf("P1, P2, V 순으로 입력하시오 : ");
		scanf_s("%lf %lf %lf", &P1, &P2, &V);
		return ((P2 - P1) * V);
	}
	else if (cho == 5) {
		system("cls");
		printf("\n");
		printf("ΔU = (3/2)ㅊnRΔT\n\n");
		printf("ΔU : 내부 에너지 변화량, n : 몰 수, R : 일반 기체 상수, ΔT : 온도 변화량\n\n");
		printf("n, R, T1, T2 순으로 입력하시오 : ");
		scanf_s("%lf %lf %lf %lf", &n, &R, &T1, &T2);
		return ((3 / 2) * n * R * (T2 - T1));
	}
}
