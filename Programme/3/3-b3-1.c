/*2353814 ��05 ��С��*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	printf("������[0,100��)֮�������:\n");
	double n;
	int a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12;
	scanf("%lf",&n);
	a1 = (int)(n / 10) / 100000000;
	a2 = (int)(n / 10) % 100000000 / 10000000;
	a3 = (int)(n / 10) % 10000000 / 1000000;
	a4 = (int)(n / 10) % 1000000 / 100000;
	a5 = (int)(n / 10) % 100000 / 10000;
	a6 = (int)(n / 10) % 10000 / 1000;
	a7 = (int)(n / 10) % 1000 / 100;
	a8 = (int)(n / 10) % 100 / 10;
	a9 = (int)(n / 10) % 10;
	a10 = (int)(floor((n / 10 - floor(n / 10)) * 10));
	a11 = (int)(round((n - floor(n)) * 100)) / 10;
	a12 = (int)(round((n - floor(n)) * 100)) % 10;
	printf("����λ : ");
	printf("%d\n", a1);
	printf("��λ   : ");
	printf("%d\n", a2);
	printf("ǧ��λ : ");
	printf("%d\n", a3);
	printf("����λ : ");
	printf("%d\n", a4);
	printf("ʮ��λ : ");
	printf("%d\n", a5);
	printf("��λ   : ");
	printf("%d\n", a6);
	printf("ǧλ   : ");
	printf("%d\n", a7);
	printf("��λ   : ");
	printf("%d\n", a8);
	printf("ʮλ   : ");
	printf("%d\n", a9);
	printf("Բ     : ");
	printf("%d\n", a10);
	printf("��     : ");
	printf("%d\n", a11);
	printf("��     : ");
	printf("%d\n", a12);

	return 0;
}