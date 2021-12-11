#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <windows.h>
#include "system.h"

double Vertical_upward_movement(int cho);
double parabolic_motion(int cho);
double inertial_force(int cho);
double heat(int cho);
double wave_of_principle(int cho);
double wave_rbdi(int cho);
double doppler_I(int cho);
double mirror_lens(int cho);

void P2_1sel();
void P2_3sel();

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

//물리2 3단원
void P2_3sel() {
	int choice;
	int cho;

	system("cls");
	printf("======== 공식 선택 ========\n");
	printf("\n");
	printf("1. 파동의 성질과 중첩의 원리\n");
	printf("2. 파동의 반사, 굴절, 회절과 간섭\n");
	printf("3. 도플러 효과와 충격파\n");
	printf("4. 거울과 렌즈\n");
	printf("5. 전자기파, 레이저, 편광\n");
	printf("\n");
	printf("선택지를 고르시오 : ");
	scanf_s("%d", &choice);

	if (choice == 1) {
		system("cls");
		printf("1. 파동의 속도 (λ,T)\n");
		printf("2. 파동의 속도 (f,λ)\n");
		printf("\n");

		printf("선택지를 고르시오 : ");
		scanf_s("%d", &cho);

		printf("\n");
		printf("답 : %lf", wave_of_principle(cho));
		printf("\n");
		counting();
	}
	else if (choice == 2) {
		system("cls");
		printf("1. 상대 굴절률 (매질1에서 매질2로의 굴절률)\n");
		printf("2. 절대 굴절률\n");
		printf("3. 보강 간섭의 조건 (경로차)\n");
		printf("4. 상쇄 간섭의 조건 (경로차)\n");
		printf("\n");

		printf("선택지를 고르시오 : ");
		scanf_s("%d", &cho);

		printf("\n");
		printf("답 : %lf", wave_rbdi(cho));
		printf("\n");
		counting();
	}
	else if (choice == 3) {
		system("cls");
		printf("1. 도플러 효과 (음속 v는?)\n");
		printf("2. 도플러 효과 (진동수 f는?)\n");
		printf("3. 충격량 - Δp\n");
		printf("3. 충격량 - mv - mv0\n");
		printf("\n");

		printf("선택지를 고르시오 : ");
		scanf_s("%d", &cho);

		printf("\n");
		printf("답 : %lf", doppler_I(cho));
		printf("\n");
		counting();
	}
	else if (choice == 4) {
		system("cls");
		printf("1. 상의 위치\n");
		printf("2. 배율\n");
		printf("\n");

		printf("선택지를 고르시오 : ");
		scanf_s("%d", &cho);

		printf("\n");
		printf("답 : %lf", mirror_lens(cho));
		printf("\n");
		counting();
	}
	else if (choice == 5) {
		system("cls");
		printf("1. 편광\n");
		printf("2. LC 진동회로\n");

		printf("\n");

		printf("선택지를 고르시오 : ");
		scanf_s("%d", &cho);

		printf("\n");
		printf("답 : %lf", mirror_lens(cho));
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

//파동의 성질과 중첩의 원리
double wave_of_principle(int cho) {
	double λ, T, f;

	if (cho == 1) {
		system("cls");
		printf("\n");
		printf("v = λ/T\n\n");
		printf("v : 속도, λ : 파장, T : 한 주기\n\n");
		printf("λ, T 순으로 입력하시오 : ");
		scanf_s("%lf %lf", &λ, &T);
		return (λ / T);
	}
	else if (cho == 2) {
		system("cls");
		printf("\n");
		printf("v = fλ\n\n");
		printf("v : 속도, f : 주파수, λ : 파장\n\n");
		printf("f, λ순으로 입력하시오 : ");
		scanf_s("%lf %lf", &f, &λ);
		return (f * λ);
	}

}


//파동의 반사, 굴절, 회절과 간섭
double wave_rbdi(int cho) {
	double λ, m, a, b, c, v;

	if (cho == 1) {
		system("cls");
		printf("\n");
		printf("      sinl    λ₁    v₁    n₂\n");
		printf("n12 = ---- = ----- = ---- = ----\n");
		printf("      sinr    λ₂    v₂    n₁\n\n");

		printf("λ : 파장, v : 속도, n : 몰 수\n\n");

		printf("n2, n1 또는 sinθ1, sinθ2 또는 V1, v2 또는 λ1, λ2 순으로 입력하시오 : ");
		scanf_s("%lf %lf", &a, &b);
		return (a / b);
	}
	else if (cho == 2) {
		system("cls");
		printf("\n");
		printf("n = c/v\n\n");
		printf("n : 굴절률, c : 빛, v : 속력\n\n");
		printf("c, v 순으로 입력하시오 : ");
		scanf_s("%lf %lf", &c, &v);
		return (c / v);
	}
	else if (cho == 3) {
		system("cls");
		printf("\n");
		printf("경로차(Δ) = (λ/2)(2m) = mλ\n\n");

		printf("λ : 파장, m : 길이\n\n");
		printf("λ, m순으로 입력하시오 : ");
		scanf_s("%lf %lf", &λ, &m);
		return ((λ / 2) * (2 * m));
	}
	else if (cho == 4) {
		system("cls");
		printf("\n");
		printf("경로차(Δ) = (λ / 2)(2m + 1)\n\n");
		printf("λ : 파장, m : 길이\n\n");

		printf("λ, m순으로 입력하시오 : ");
		scanf_s("%lf %lf", &λ, &m);
		return ((λ / 2) * ((2 * m) + 1));
	}

}

//도플러 효과와 충격파
double doppler_I(int cho) {

	double f, λ, v, p1, p2, m, v0;

	if (cho == 1) {
		system("cls");
		printf("\n");
		printf("v = fλ\n\n");
		printf("v :  속도, f : 진동수, λ : 파장\n\n");
		printf(" f, λ 순으로 입력하시오 : ");
		scanf_s("%lf %lf", &f, &λ);
		return (f * λ);
	}
	else if (cho == 2) {
		system("cls");
		printf("\n");
		printf("f = v / λ\n\n");
		printf("f : 진동수, v :  속도, λ : 파장\n\n");
		printf(" v, λ순으로 입력하시오 : ");
		scanf_s("%lf %lf", &v, &λ);
		return (v / λ);
	}

	else if (cho == 3) {
		system("cls");
		printf("\n");
		printf("I = Δp (kgm/s)\n\n");
		printf("I : 충격량, p : 운동량\n\n");

		printf("p1, p2 순으로 입력하시오 : ");
		scanf_s("%lf %lf", &p1, &p2);
		return (p2 - p1);

	}
	else if (cho == 4) {
		system("cls");
		printf("\n");
		printf("I = mv - mv0 (kgm/s)\n\n");
		printf("I : 충격량, m : 질량, v : 속도\n\n");

		printf("m, v, v0 순으로 입력하시오 : ");
		scanf_s("%lf %lf %lf", &m, &v, &v0);
		return ((m * v) - (m * v0));

	}

}

//거울과 렌즈
double mirror_lens(int cho) {
	double a, b, f;

	if (cho == 1) {
		system("cls");
		printf("\n");
		printf("1   1   1 \n");
		printf("- + - = -  \n");
		printf("a   b   f\n\n");
		printf("a : 물체에서 거울까지의 거리 \n");
		printf("b : 거울에서 상까지의 거리 (상이 거울앞에 있을때 (+),뒤에 있을 때 (-)), λ : 파장\n");
		printf("f : 거울의 초점 거리\n\n");
		printf("a, b 순으로 입력하시오 : ");
		scanf_s("%lf %lf", &a, &b);
		return ((1 / a) + (1 / b));
	}
	else if (cho == 2) {
		system("cls");
		printf("\n");
		printf("    b \n");
		printf("m = -  \n");
		printf("    a\n\n");
		printf("a : 물체에서 거울까지의 거리 \n");
		printf("b : 거울에서 상까지의 거리 (상이 거울앞에 있을때 (+),뒤에 있을 때 (-)), λ : 파장\n");
		printf("f : 배율\n\n");
		printf("a, b 순으로 입력하시오 : ");
		scanf_s("%lf %lf", &a, &b);
		return (b / a);
	}

}

//전자기파, 레이저, 편광
double ew_l_p(int cho) {
	double I0, θ, L, C;

	if (cho == 1) {
		system("cls");
		printf("\n");
		printf("I = I0cos²θ\n\n");
		printf("I : 빛의 밝기, I0 : 초기 빛의 세기, θ : 초기 빛의 편광 방향과 편광판의 편광축 사이의 각의 크기\n\n");
		printf("I0, θ 순으로 입력하시오 : ");
		scanf_s("%lf %lf", &I0, &θ);
		return (I0 * cos(θ));
	}
	else if (cho == 2) {
		system("cls");
		printf("\n");
		printf("        1\n");
		printf("f = ---------\n");
		printf("    2π√(LC)\n\n");
		printf("f : 진동수, L : 코일, C : 축전기\n\n");
		printf("L, C 순으로 입력하시오 : ");
		scanf_s("%lf %lf", &L, &C);
		return (2 * M_PI * sqrt(L * C));
	}
}
