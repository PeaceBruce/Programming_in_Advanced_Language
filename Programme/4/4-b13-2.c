/* 2353814 ��С�� ��05 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* ----����Ҫ��----
   1���������������ͷ�ļ�
   2��������һ��ȫ�ֱ������������徲̬�ֲ�����
   3�������������������
   4��main�����������룬����ѭ��
   --------------------------------------------------------------------- */

int num = 0;
/***************************************************************************
  �������ƣ�
  ��    �ܣ���ӡn�㺺ŵ�����ƶ�˳��
  ���������int n������
            char src����ʼ��
            char tmp���м���
            char dst��Ŀ����
  �� �� ֵ��
  ˵    ����1�����������βΡ��������;���׼��
            2������������������κ���ʽ��ѭ��
***************************************************************************/
void hanoi(int n, char src, char tmp, char dst)
{
    if (n == 1) {
        num++;
        printf("%5d:%3d# %c-->%c\n", num, n, src, dst);
    }
    else {
        hanoi(n - 1, src, dst, tmp);
        num++;
        printf("%5d:%3d# %c-->%c\n", num, n, src, dst);
        hanoi(n - 1, tmp, src, dst);
    }
}

/***************************************************************************
  �������ƣ�
  ��    �ܣ�
  ���������
  �� �� ֵ��
  ˵    ����1��������롢���õݹ麯��
            2�������������ʱ������ʹ��ѭ��
            3��Ϊ��ͳһ��飬���������������������������ʼ/Ŀ�����Ĵ��벻Ҫ��ͳһ����������ֱ�ӷ���main�У�
***************************************************************************/
int main()
{
    int n,ret;
    char src, tmp, dst;
    while (1) {
        printf("�����뺺ŵ���Ĳ���(1-16)\n");
        ret = scanf("%d", &n);
        if (ret!=1 || n > 16 || n < 1) {
            while (getchar() != '\n')
                ;
            continue;
        }
        else {
            while (getchar() != '\n')
                ;
            break;
        }
    }
    while (1) {
        printf("��������ʼ��(A-C)\n");
        ret= scanf("%c", &src);
        if (ret != 1 || src > 99 || src < 65 || src < 97 && src>67) {
            while (getchar() != '\n')
                ;
            continue;
        }
        else {
            if (src > 96)
                src = src - 32;
            while (getchar() != '\n')
                ;
            break;
        }
    }
    while (1) {
        printf("������Ŀ����(A-C)\n");
        ret = scanf("%c", &dst);
        if (ret != 1 || dst > 99 || dst < 65 || dst < 97 && dst>67) {
            while (getchar() != '\n')
                ;
            continue;
        }
        else {
            if (dst > 96)
                dst = dst - 32;
            if (src == dst) {
                printf("Ŀ����(%c)��������ʼ��(%c)��ͬ\n",dst,src);
                while (getchar() != '\n')
                    ;
                continue;
            }
            while (getchar() != '\n')
                ;
            break;
        }
    }
    if (src == 65 && dst == 66 || src == 66 && dst == 65)
        tmp = 67;
    else if (src == 65 && dst == 67 || src == 67 && dst == 65)
        tmp = 66;
    else if (src == 66 && dst == 67 || src == 67 && dst == 66)
        tmp = 65;
    printf("�ƶ�����Ϊ:\n");
    hanoi(n, src, tmp, dst);

    return 0;
}
