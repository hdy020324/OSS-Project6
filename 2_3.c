#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <windows.h>
#include "system.h"

double wave_of_principle(int cho);
double wave_rbdi(int cho);
double doppler_I(int cho);
double mirror_lens(int cho);
double ew_l_p(int cho);
void P2_3sel();

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
		printf("답 : %lf", ew_l_p(cho));
		printf("\n");
		counting();
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

		printf("파장(λ) : ");
		scanf_s("%lf", &λ);
		printf("한 주기(T) : ");
		scanf_s("%lf", &T);

		return (λ / T);
	}
	else if (cho == 2) {
		system("cls");
		printf("\n");
		printf("v = fλ\n\n");
		printf("v : 속도, f : 주파수, λ : 파장\n\n");

		printf("주파수(f) : ");
		scanf_s("%lf", &f);
		printf("파장(λ) : ");
		scanf_s("%lf", &λ);

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

		printf("n2 or sinθ1 or V1 or λ1 : ");
		scanf_s("%lf", &a);
		printf("n1 or sinθ2 or V2 or λ2 : ");
		scanf_s("%lf", &b);

		return (a / b);
	}
	else if (cho == 2) {
		system("cls");
		printf("\n");
		printf("n = c/v\n\n");
		printf("n : 굴절률, c : 빛, v : 속력\n\n");

		printf("빛(c) : ");
		scanf_s("%lf", &c);
		printf("속력(v) : ");
		scanf_s("%lf", &v);

		return (c / v);
	}
	else if (cho == 3) {
		system("cls");
		printf("\n");
		printf("경로차(Δ) = (λ/2)(2m) = mλ\n\n");
		printf("λ : 파장, m : 길이\n\n");

		printf("파장(λ) : ");
		scanf_s("%lf", &λ);
		printf("길이(m) : ");
		scanf_s("%lf", &m);

		return ((λ / 2) * (2 * m));
	}
	else if (cho == 4) {
		system("cls");
		printf("\n");
		printf("경로차(Δ) = (λ / 2)(2m + 1)\n\n");
		printf("λ : 파장, m : 길이\n\n");

		printf("파장(λ) : ");
		scanf_s("%lf", &λ);
		printf("길이(m) : ");
		scanf_s("%lf", &m);

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

		printf("진동수(f) : ");
		scanf_s("%lf", &f);
		printf("파장(λ) : ");
		scanf_s("%lf", &λ);

		return (f * λ);
	}
	else if (cho == 2) {
		system("cls");
		printf("\n");
		printf("f = v / λ\n\n");
		printf("f : 진동수, v :  속도, λ : 파장\n\n");

		printf("속도(v) : ");
		scanf_s("%lf", &v);
		printf("파장(λ) : ");
		scanf_s("%lf", &λ);

		return (v / λ);
	}

	else if (cho == 3) {
		system("cls");
		printf("\n");
		printf("I = Δp (kgm/s)\n\n");
		printf("I : 충격량, p : 운동량\n\n");

		printf("처음 운동량(p1) : ");
		scanf_s("%lf", &p1);
		printf("나중 운동량(p2) : ");
		scanf_s("%lf", &p2);

		return (p2 - p1);

	}
	else if (cho == 4) {
		system("cls");
		printf("\n");
		printf("I = mv - mv0 (kgm/s)\n\n");
		printf("I : 충격량, m : 질량, v : 속도\n\n");

		printf("질량(m) : ");
		scanf_s("%lf", &m);
		printf("속력(v) : ");
		scanf_s("%lf", &v);
		printf("처음 속력(v0) : ");
		scanf_s("%lf", &v0);


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

		printf("물체~거울 거리(a) : ");
		scanf_s("%lf", &a);
		printf("거울~상 거리(b) : ");
		scanf_s("%lf", &b);

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

		printf("물체~거울 거리(a) : ");
		scanf_s("%lf", &a);
		printf("거울~상 거리(b) : ");
		scanf_s("%lf", &b);

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

		printf("초기 빛의 세기(I0) : ");
		scanf_s("%lf", &I0);
		printf("초기 빛의 편광 방향과 편광판의 편광축 사이의 각의 크기(θ) : ");
		scanf_s("%lf", &θ);

		return (I0 * cos(θ));
	}
	else if (cho == 2) {
		system("cls");
		printf("\n");
		printf("        1\n");
		printf("f = ---------\n");
		printf("    2π√(LC)\n\n");
		printf("f : 진동수, L : 코일, C : 축전기\n\n");

		printf("코일(L) : ");
		scanf_s("%lf", &L);
		printf("축전기(C) : ");
		scanf_s("%lf", &C);

		return (2 * M_PI * sqrt(L * C));
	}
}
