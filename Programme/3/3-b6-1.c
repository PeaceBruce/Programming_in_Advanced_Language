/*2353814 ��05 ��С��*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	printf("������[0-100��)֮�������:\n");
	double n;
	int a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12;
	scanf("%lf", &n);
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
	if (a1 != 0) {
		if (a1 == 1)
			printf("Ҽ");
		else if (a1 == 2)
			printf("��");
		else if (a1 == 3)
			printf("��");
		else if (a1 == 4)
			printf("��");
		else if (a1 == 5)
			printf("��");
		else if (a1 == 6)
			printf("½");
		else if (a1 == 7)
			printf("��");
		else if (a1 == 8)
			printf("��");
		else if (a1 == 9)
			printf("��");
		printf("ʰ");
		if (a2 == 0)
			printf("��");
	}
	if (a2 != 0) {
		if (a2 == 1)
			printf("Ҽ");
		else if (a2 == 2)
			printf("��");
		else if (a2 == 3)
			printf("��");
		else if (a2 == 4)
			printf("��");
		else if (a2 == 5)
			printf("��");
		else if (a2 == 6)
			printf("½");
		else if (a2 == 7)
			printf("��");
		else if (a2 == 8)
			printf("��");
		else if (a2 == 9)
			printf("��");
		printf("��");
	}
	if (a3 != 0) {
		if (a3 == 1)
			printf("Ҽ");
		else if (a3 == 2)
			printf("��");
		else if (a3 == 3)
			printf("��");
		else if (a3 == 4)
			printf("��");
		else if (a3 == 5)
			printf("��");
		else if (a3 == 6)
			printf("½");
		else if (a3 == 7)
			printf("��");
		else if (a3 == 8)
			printf("��");
		else if (a3 == 9)
			printf("��");
		printf("Ǫ");
		if (a4 == 0 && a5 == 0 && a6 == 0)
			printf("��");
	}
	if ((a1 != 0 || a2 != 0) && a3 == 0 && a4 != 0)
		printf("��");
	if (a4 != 0) {
		if (a4 == 1)
			printf("Ҽ");
		else if (a4 == 2)
			printf("��");
		else if (a4 == 3)
			printf("��");
		else if (a4 == 4)
			printf("��");
		else if (a4 == 5)
			printf("��");
		else if (a4 == 6)
			printf("½");
		else if (a4 == 7)
			printf("��");
		else if (a4 == 8)
			printf("��");
		else if (a4 == 9)
			printf("��");
		printf("��");
		if (a5 == 0 && a6 == 0)
			printf("��");
	}
	if ((a1 != 0 || a2 != 0 || a3 != 0) && a4 == 0 && a5 != 0)
		printf("��");
	if (a5 != 0) {
		if (a5 == 1)
			printf("Ҽ");
		else if (a5 == 2)
			printf("��");
		else if (a5 == 3)
			printf("��");
		else if (a5 == 4)
			printf("��");
		else if (a5 == 5)
			printf("��");
		else if (a5 == 6)
			printf("½");
		else if (a5 == 7)
			printf("��");
		else if (a5 == 8)
			printf("��");
		else if (a5 == 9)
			printf("��");
		printf("ʰ");
		if (a6 == 0)
			printf("��");
	}
	if ((a1 != 0 || a2 != 0 || a3 != 0 || a4 != 0) && a5 == 0 && a6 != 0)
		printf("��");
	if (a6 != 0) {
		if (a6 == 1)
			printf("Ҽ");
		else if (a6 == 2)
			printf("��");
		else if (a6 == 3)
			printf("��");
		else if (a6 == 4)
			printf("��");
		else if (a6 == 5)
			printf("��");
		else if (a6 == 6)
			printf("½");
		else if (a6 == 7)
			printf("��");
		else if (a6 == 8)
			printf("��");
		else if (a6 == 9)
			printf("��");
		printf("��");
	}
	if (a7 != 0) {
		if (a7 == 1)
			printf("Ҽ");
		else if (a7 == 2)
			printf("��");
		else if (a7 == 3)
			printf("��");
		else if (a7 == 4)
			printf("��");
		else if (a7 == 5)
			printf("��");
		else if (a7 == 6)
			printf("½");
		else if (a7 == 7)
			printf("��");
		else if (a7 == 8)
			printf("��");
		else if (a7 == 9)
			printf("��");
		printf("Ǫ");
	}
	if ((a1 != 0 || a2 != 0 || a3 != 0 || a4 != 0 || a5 != 0 || a6 != 0) && a7 == 0 && a8 != 0)
		printf("��");
	if (a8 != 0) {
		if (a8 == 1)
			printf("Ҽ");
		else if (a8 == 2)
			printf("��");
		else if (a8 == 3)
			printf("��");
		else if (a8 == 4)
			printf("��");
		else if (a8 == 5)
			printf("��");
		else if (a8 == 6)
			printf("½");
		else if (a8 == 7)
			printf("��");
		else if (a8 == 8)
			printf("��");
		else if (a8 == 9)
			printf("��");
		printf("��");
	}
	if ((a1 != 0 || a2 != 0 || a3 != 0 || a4 != 0 || a5 != 0 || a6 != 0 || a7 != 0) && a8 == 0 && a9 != 0)
		printf("��");
	if (a9 != 0) {
		if (a9 == 1)
			printf("Ҽ");
		else if (a9 == 2)
			printf("��");
		else if (a9 == 3)
			printf("��");
		else if (a9 == 4)
			printf("��");
		else if (a9 == 5)
			printf("��");
		else if (a9 == 6)
			printf("½");
		else if (a9 == 7)
			printf("��");
		else if (a9 == 8)
			printf("��");
		else if (a9 == 9)
			printf("��");
		printf("ʰ");
	}
	if ((a1 != 0 || a2 != 0 || a3 != 0 || a4 != 0 || a5 != 0 || a6 != 0 || a7 != 0 || a8 != 0) && a9 == 0 && a10 != 0)
		printf("��");
	if (a10 != 0) {
		if (a10 == 1)
			printf("Ҽ");
		else if (a10 == 2)
			printf("��");
		else if (a10 == 3)
			printf("��");
		else if (a10 == 4)
			printf("��");
		else if (a10 == 5)
			printf("��");
		else if (a10 == 6)
			printf("½");
		else if (a10 == 7)
			printf("��");
		else if (a10 == 8)
			printf("��");
		else if (a10 == 9)
			printf("��");
	}
	if (n == 0)
		printf("��Բ");
	if((int)n!=0)
	    printf("Բ");
	if (a11 != 0) {
		if (a11 == 1)
			printf("Ҽ");
		else if (a11 == 2)
			printf("��");
		else if (a11 == 3)
			printf("��");
		else if (a11 == 4)
			printf("��");
		else if (a11 == 5)
			printf("��");
		else if (a11 == 6)
			printf("½");
		else if (a11 == 7)
			printf("��");
		else if (a11 == 8)
			printf("��");
		else if (a11 == 9)
			printf("��");
		printf("��");
	}
	if ((a1 != 0 || a2 != 0 || a3 != 0 || a4 != 0 || a5 != 0 || a6 != 0 || a7 != 0 || a8 != 0 || a9 != 0 || a10 != 0) && a11 == 0 && a12 != 0)
		printf("��");
	if (a12 != 0) {
		if (a12 == 1)
			printf("Ҽ");
		else if (a12 == 2)
			printf("��");
		else if (a12 == 3)
			printf("��");
		else if (a12 == 4)
			printf("��");
		else if (a12 == 5)
			printf("��");
		else if (a12 == 6)
			printf("½");
		else if (a12 == 7)
			printf("��");
		else if (a12 == 8)
			printf("��");
		else if (a12 == 9)
			printf("��");
		printf("��");
	}
	if (a12 == 0)
		printf("��");
	printf("\n");

	return 0;
}