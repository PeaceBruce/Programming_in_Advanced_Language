/*2353814 ��05 ��С��*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	printf("����������ֵ��\n");
	double n;
	int a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a, b;
	scanf("%lf", &n);
	a1 = (int)n / 50;
	a2 = ((int)n - 50 * a1) / 20;
	a3 = ((int)n - 50 * a1 - 20 * a2) / 10;
	a4 = ((int)n - 50 * a1 - 20 * a2 - 10 * a3) / 5;
	a5 = (int)n - 50 * a1 - 20 * a2 - 10 * a3 - 5 * a4;
	b = (int)(round((n - floor(n)) * 100));
	a6 = b / 50;
	a7 = (b - 50 * a6) / 10;
	a8 = (b - 50 * a6 - 10 * a7) / 5;
	a9 = (b - 50 * a6 - 10 * a7 - 5 * a8) / 2;
	a10 = b - 50 * a6 - 10 * a7 - 5 * a8 - 2 * a9;
	a = a1 + a2 + a3 + a4 + a5 + a6 + a7 + a8 + a9 + a10;
	printf("��%d�����㣬�������£�\n", a);
	if (a1 > 0)
		printf("50Ԫ : %d��\n", a1);
	if (a2 > 0)
		printf("20Ԫ : %d��\n", a2);
	if (a3 > 0)
		printf("10Ԫ : %d��\n", a3);
	if (a4 > 0)
		printf("5Ԫ  : %d��\n", a4);
	if (a5 > 0)
		printf("1Ԫ  : %d��\n", a5);
	if (a6 > 0)
		printf("5��  : %d��\n", a6);
	if (a7 > 0)
		printf("1��  : %d��\n", a7);
	if (a8 > 0)
		printf("5��  : %d��\n", a8);
	if (a9 > 0)
		printf("2��  : %d��\n", a9);
	if (a10 > 0)
		printf("1��  : %d��\n", a10);

	return 0;
}