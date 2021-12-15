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

		printf("처음속력(v0) : ");
		scanf_s("%lf", &v0);
		printf("중력가속도(g) : ");
		scanf_s("%lf", &g);
		printf("시간(t) : ");
		scanf_s("%lf", &t);

		return (v0 - (g * t));
	}
	else if (cho == 2) {
		system("cls");
		printf("\n");
		printf("s = v0t - ½gt²\n\n");

		printf("s : 거리, v0 : 처음 속력, t : 시간, g : 중력가속도\n\n");


		printf("처음속력(v0) : ");
		scanf_s("%lf", &v0);
		printf("중력가속도(g) : ");
		scanf_s("%lf", &g);
		printf("시간(t) : ");
		scanf_s("%lf", &t);

		return ((v0 * t) - (1 / 2) * g * (t * t));
	}
	else if (cho == 3) {
		system("cls");

		printf("\n");
		printf("v²- v0² = -2gs\n\n");

		printf("v : 속력, v0 : 처음 속력, g : 중력가속도, s : 거리\n\n");


		printf("중력가속도(g) : ");
		scanf_s("%lf", &g);
		printf("거리(s) : ");
		scanf_s("%lf", &s);

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

		printf("높이(h) : ");
		scanf_s("%lf", &h);
		printf("중력가속도(g) : ");
		scanf_s("%lf", &g);

		scanf_s("%lf %lf", &h, &g);
		return (sqrt(2 * h / g));
	}
	else if (cho == 2) {
		system("cls");
		printf("\n");
		printf("v0t\n\n");

		printf("v0 : 처음 속력, t : 시간\n\n");

		printf("처음속력(v0) : ");
		scanf_s("%lf", &v0);
		printf("시간(t) : ");
		scanf_s("%lf", &t);

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

		printf("질량(m) : ");
		scanf_s("%lf", &m);
		printf("가속도(a) : ");
		scanf_s("%lf", &a);

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

		printf("중력가속도(g) : ");
		scanf_s("%lf", &g);
		printf("θ : ");
		scanf_s("%lf", &theta);


		scanf_s("%lf %lf", &g, &theta);
		return (g * tan(theta));
	}
}

//열량
double heat(int cho) {
	double m, c, t0, t, k, A, T1, T2, l, U1, U2, W, P, V1, V2, n, R;

	if (cho == 1) {
		system("cls");
		printf("\n");
		printf("Q = mcΔt \n\n");

		printf("m : 질량, c : 비열, Δt : 온도변화\n\n");

		printf("질량(m) : ");
		scanf_s("%lf", &m);
		printf("비열(c) : ");
		scanf_s("%lf", &c);
		printf("처음 온도(t0) : ");
		scanf_s("%lf", &t0);
		printf("나중 온도(t) : ");
		scanf_s("%lf", &t);

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


		printf("열 전도율(k) : ");
		scanf_s("%lf", &k);
		printf("전달되는 판의 면적(A) : ");
		scanf_s("%lf", &A);
		printf("처음 온도(T1) : ");
		scanf_s("%lf", &T1);
		printf("현재 온도(T2) : ");
		scanf_s("%lf", &T2);
		printf("처음 시간(t0) : ");
		scanf_s("%lf", &t0);
		printf("나중 시간(t) : ");
		scanf_s("%lf", &t);
		printf("판의 두께(l) : ");
		scanf_s("%lf", &l);

		return ((k * A * (T1 - T2) * (t - t0)) / l);
	}
	else if (cho == 3) {
		system("cls");
		printf("\n");
		printf("Q = ΔU + W\n\n");
		printf("Q : 열, U : 내부 에너지, W : 일\n\n");

		printf("처음 내부에너지(U1) : ");
		scanf_s("%lf", &U1);
		printf("나중 내부에너지(U2) : ");
		scanf_s("%lf", &U2);
		printf("일(W) : ");
		scanf_s("%lf", &W);

		return ((U2 - U1) + W);
	}
	else if (cho == 4) {
		system("cls");
		printf("\n");
		printf("W = PΔV\n\n");
		printf("W : 일, P : 압력, ΔV : 부피의 변화량\n\n");

		printf("압력(P) : ");
		scanf_s("%lf", &P);
		printf("처음 부피(V1) : ");
		scanf_s("%lf", &V1);
		printf("나중 부피(V2) : ");
		scanf_s("%lf", &V2);

		return (P * (V2 - V1));
	}
	else if (cho == 5) {
		system("cls");
		printf("\n");
		printf("ΔU = (3/2)nRΔT\n\n");
		printf("ΔU : 내부 에너지 변화량, n : 몰 수, R : 일반 기체 상수, ΔT : 온도 변화량\n\n");

		printf("몰 수(n) : ");
		scanf_s("%lf", &n);
		printf("일반 기체 상수(R) : ");
		scanf_s("%lf", &R);
		printf("처음 온도(T1) : ");
		scanf_s("%lf", &T1);
		printf("나중 온도(T2) : ");
		scanf_s("%lf", &T2);


		return ((3 / 2) * n * R * (T2 - T1));
	}
}
