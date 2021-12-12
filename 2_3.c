#include<stdio.h>
#define _USE_MATH_DEFINES
#include<math.h>


double wave_of_principle(int cho);
double wave_rbdi(int cho);
double doppler_I(int cho);
double mirror_lens(int cho);

void sub2_unit3();



int main() {
	int subject;
	int unit1;
	int unit2 = 0;
	int choice;
	int cho;

	printf("\n");
	printf("======== 과목 선택 ========\n");
	printf("\n");
	printf("1. 물리1\n");
	printf("2. 물리2\n");
	printf("\n");
	printf("선택지를 고르시오 : ");
	scanf_s("%d", &subject);


	if (subject == 2) {
		printf("\n");
		printf("\n");
		printf("======== 단원 선택 ========\n");
		printf("\n");
		printf("1. 운동과 에너지\n");
		printf("2. 전기와 자기장\n");
		printf("3. 파동과 빛\n");
		printf("\n");
		printf("선택지를 고르시오 : ");
		scanf_s("%d", &unit2);
	}

 if (unit2 == 3) {
		sub2_unit3();
	}

	return 0;
}


//물리2 3단원
void sub2_unit3() {
	int choice;
	int cho;

	printf("\n");
	printf("\n");
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
		printf("1. 파동의 속도 (λ,T)\n");
		printf("2. 파동의 속도 (f,λ)\n");
		printf("\n");

		printf("선택지를 고르시오 : ");
		scanf_s("%d", &cho);

		printf("\n");
		printf("답 : %lf", wave_of_principle(cho));
	}
	else if (choice == 2) {
		printf("1. 상대 굴절률 (매질1에서 매질2로의 굴절률)\n");
		printf("2. 절대 굴절률\n");
		printf("3. 보강 간섭의 조건 (경로차)\n");
		printf("4. 상쇄 간섭의 조건 (경로차)\n");
		printf("\n");

		printf("선택지를 고르시오 : ");
		scanf_s("%d", &cho);

		printf("\n");
		printf("답 : %lf", wave_rbdi(cho));
	}
     else if (choice == 3) {
		printf("1. 도플러 효과 (음속 v는?)\n");
		printf("2. 도플러 효과 (진동수 f는?)\n");
		printf("3. 충격량 - Δp\n");
		printf("3. 충격량 - mv - mv0\n");
		printf("\n");

		printf("선택지를 고르시오 : ");
		scanf_s("%d", &cho);

		printf("\n");
		printf("답 : %lf", doppler_I(cho));
	}
	else if (choice == 4) {
		printf("1. 상의 위치\n");
		printf("2. 배율\n");
		printf("\n");

		printf("선택지를 고르시오 : ");
		scanf_s("%d", &cho);

		printf("\n");
		printf("답 : %lf", mirror_lens(cho));
	}
	else if (choice == 5) {
		printf("1. 편광\n");
		printf("2. LC 진동회로\n");

		printf("\n");

		printf("선택지를 고르시오 : ");
		scanf_s("%d", &cho);

		printf("\n");
		printf("답 : %lf", mirror_lens(cho));
	}
}


//파동의 성질과 중첩의 원리
double wave_of_principle(int cho) {
	double λ, T, f;

	if (cho == 1) {
		printf("\n");
		printf("v = λ/T\n\n");
		printf("v : 속도, λ : 파장, T : 한 주기\n\n");
		printf("λ, T 순으로 입력하시오 : ");
		scanf_s("%lf %lf", &λ, &T);
		return (λ / T);
	}
	else if (cho == 2) {
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
		printf("\n");
		printf("n = c/v\n\n");
		printf("n : 굴절률, c : 빛, v : 속력\n\n");
		printf("c, v 순으로 입력하시오 : ");
		scanf_s("%lf %lf", &c, &v);
		return (c / v);
	}
	else if (cho == 3) {
		printf("\n");
		printf("경로차(Δ) = (λ/2)(2m) = mλ\n\n");

		printf("λ : 파장, m : 길이\n\n");
		printf("λ, m순으로 입력하시오 : ");
		scanf_s("%lf %lf", &λ, &m);
		return ((λ / 2) * (2 * m));
	}
	else if (cho == 4) {
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
		printf("\n");
		printf("v = fλ\n\n");
		printf("v :  속도, f : 진동수, λ : 파장\n\n");
		printf(" f, λ 순으로 입력하시오 : ");
		scanf_s("%lf %lf", &f, &λ);
		return (f * λ);
	}
	else if (cho == 2) {
		printf("\n");
		printf("f = v / λ\n\n");
		printf("f : 진동수, v :  속도, λ : 파장\n\n");
		printf(" v, λ순으로 입력하시오 : ");
		scanf_s("%lf %lf", &v, &λ);
		return (v / λ);
	}

	else if (cho == 3) {
		printf("\n");
		printf("I = Δp (kgm/s)\n\n");
		printf("I : 충격량, p : 운동량\n\n");

		printf("p1, p2 순으로 입력하시오 : ");
		scanf_s("%lf %lf", &p1, &p2);
		return (p2 - p1);

	}
	else if (cho == 4) {
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
		printf("\n");
		printf("    b \n");
		printf("m = -  \n");
		printf("    a\n\n");
		printf("a : 물체에서 거울까지의 거리 \n");
		printf("b : 거울에서 상까지의 거리 (상이 거울앞에 있을때 (+),뒤에 있을 때 (-)), λ : 파장\n");
		printf("f : 배율\n\n");
		printf("a, b 순으로 입력하시오 : ");
		scanf_s("%lf %lf", &a, &b);
		return (b/a);
	}

}


//전자기파, 레이저, 편광
double ew_l_p(int cho) {
	double I0, θ, L, C;

	if (cho == 1) {
		printf("\n");
		printf("I = I0cos²θ\n\n");
		printf("I : 빛의 밝기, I0 : 초기 빛의 세기, θ : 초기 빛의 편광 방향과 편광판의 편광축 사이의 각의 크기\n\n");
		printf("I0, θ 순으로 입력하시오 : ");
		scanf_s("%lf %lf", &I0, &θ);
		return (I0* cos(θ));
	}
	else if (cho == 2) {
		printf("\n");
		printf("        1\n");
		printf("f = ---------\n");
		printf("    2π√(LC)\n\n");
		printf("f : 진동수, L : 코일, C : 축전기\n\n");
		printf("L, C 순으로 입력하시오 : ");
		scanf_s("%lf %lf", &L, &C);
		return (2*M_PI*sqrt(L*C));
	}

}
