#pragma once
#include <stdio.h>

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

	result = Nx(Φ / t);

	printf("V= %f", result);
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
	counting();
}

void en_photon()			//광자의 에너지
{
	double c, λ, result;

	printf("c: ");
	scanf_s("%lf", &c);
	printf("λ: ");
	scanf_s("%lf", &λ);

	result = hx(c / λ);

	printf("E= %f", result);
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
	counting();
}