/* ��05 2353814 ��С�� */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int y, m, d, n, i, j, ret1, ret2;
	while (1) {
		printf("���������(2000-2030)���·�(1-12) : ");
		ret1 = scanf("%d%d", &y,&m);
		if (ret1!=2) {
			printf("����Ƿ�������������\n");
			while (getchar() != '\n')
				;
			continue;
		}
		if (y < 2000 || y > 2030) {
			printf("����Ƿ�������������\n");
			continue;
		}
		if (m < 1 || m > 12) {
			printf("����Ƿ�������������\n");
			continue;
		}
		break;
	}
	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
		n = 31;
	else if (m == 2) {
		if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
			n = 29;
		else
			n = 28;
	}
	else
		n = 30;
	while (1) {
		printf("������%d��%d��1�յ�����(0-6��ʾ������-������) : ", y, m);
		ret2 = scanf("%d", &d);
		if (ret2!=1) {
			printf("����Ƿ�������������\n");
			while (getchar() != '\n')
				;
			continue;
		}
		if (d < 0 || d > 7) {
			printf("����Ƿ�������������\n");
			continue;
		}
		printf("\n");
		break;
	}
	printf("%d��%d�µ�����Ϊ:\n", y, m);
	printf("������  ����һ  ���ڶ�  ������  ������  ������  ������\n");
	for (i = 1; i <= d; i++) {
		if (i == 1)
			printf("    ");
		else
			printf("        ");
	}
	for (j = 1; j <= n; j++) {
		if ((d + j - 1) % 7 == 0)
			printf("%4d", j);
		else
			printf("%8d", j);
		if ((d + j) % 7 == 0)
			printf("    \n");
		if ((d + j) % 7 != 0 && j == n)
			printf("    ");
	}
	printf("\n");

	return 0;
}