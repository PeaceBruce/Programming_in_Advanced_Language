/*2353814 ��05 ��С��*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	printf("�����������ε����߼���н�(�Ƕ�)\n");
	const float pi = 3.14159f;
	int a, b, c;
	float s, d;
	scanf("%d %d %d", &a, &b, &c);
	d = c * pi / 180;
	s = 0.5f * a * b * (float)sin(d);
	printf("�����ε����Ϊ : ");
	printf("%.3f\n", s);

	return 0;
}