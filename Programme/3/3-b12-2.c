/* ��05 2353814 ��С�� */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int ret, x;

	while (1) {
		printf("������x��ֵ[0-100] : ");
		ret = scanf("%d", &x); //����x�ķ�ʽ������scanf�Ҹ�ʽ��Ϊ%d����׼�÷�scanf
		if (ret !=1 ) {
			printf("�����д�[ret=%d x=%d],����������\n", ret, x); //ȷ��һ�£�ret��ֵ����scanf�ķ���ֵ����ʲô���壿
			while (getchar() != '\n')
				;
			continue;
		}
		else if (x < 0 || x > 100) {
			printf("�����д�[ret=%d x=%d],����������\n", ret, x);
			continue;
		}
		break;
	}
		
	printf("ret=%d x=%d\n", ret, x);

	return 0;
}