/*2353814 ��05 ��С��*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	printf("������һ��[1..30000]�������:\n");
	int n, a, b, c, d, e;
	scanf("%d",&n);
	a = n / 10000;
	b = n % 10000 / 1000;
	c = n % 1000 / 100;
	d = n % 100 / 10;
	e = n % 10;
	printf("��λ : ");
	printf("%d\n", a);
	printf("ǧλ : ");
	printf("%d\n", b);
	printf("��λ : ");
	printf("%d\n", c);
	printf("ʮλ : ");
	printf("%d\n", d);
	printf("��λ : ");
	printf("%d\n", e);

	return 0;
}