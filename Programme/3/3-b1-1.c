/*2353814 ��05 ��С��*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	printf("������뾶�͸߶�\n");
	const double pi = 3.14159;
	double r, h, a, b, c, d, e;
	scanf("%lf %lf", &r, &h);
	a = 2 * pi * r;
	b = pi * r * r;
	c = 4 * pi * r * r;
	d = pi * r * r * r * 4 / 3;
	e = pi * r * r * h;
	printf("Բ�ܳ�    ");
	printf(" ");
	printf(":");
	printf(" ");
	printf("%.2lf\n", a);
	printf("Բ���    ");
	printf(" ");
	printf(":");
	printf(" ");
	printf("%.2lf\n", b);
	printf("Բ������");
	printf(" ");
	printf(":");
	printf(" ");
	printf("%.2lf\n", c);
	printf("Բ�����  ");
	printf(" ");
	printf(":");
	printf(" ");
	printf("%.2lf\n", d);
	printf("Բ�����  ");
	printf(" ");
	printf(":");
	printf(" ");
	printf("%.2lf\n", e);
	
	return 0;
}