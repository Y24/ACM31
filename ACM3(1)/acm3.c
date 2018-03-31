#include<stdio.h>
float CY(float, float, float, float);
int main(void) {
	int i, t;
	float X[100], Y[100], T[100], S[100];
	while (scanf_s("%d", &t))
	{
		for (i = 0; i<t; i++)
			scanf_s("%f %f %f %f", &X[i], &Y[i], &T[i], &S[i]);

		for (i = 0; i<t; i++)
			printf("case #%d: %.3f\n", i + 1, CY(X[i], Y[i], T[i], S[i]));
	}

	return 0;
}
float CY(float X, float Y, float T, float S)
{
	if (Y >= X)
		return S / X;
	while (S> X*(T*Y) / (X - Y))
		return T*Y / (X - Y) + CY(X, Y, T*X / (X - Y), S);
	return S / X;
}
