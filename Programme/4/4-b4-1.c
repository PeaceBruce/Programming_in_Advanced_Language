/* 2353814 ��С�� ��05 */
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <windows.h>

const int MAX_X = 69;	//����*��ɵı߿�Ŀ��
const int MAX_Y = 17;	//����*��ɵı߿�ĸ߶�

/***************************************************************************
  �������ƣ�
  ��    �ܣ������system("cls")һ���Ĺ��ܣ���Ч�ʸ�
  ���������
  �� �� ֵ��
  ˵    �������������Ļ���������������ǿɼ���������(ʹ�õ�ǰ��ɫ)
***************************************************************************/
void cls(const HANDLE hout)
{
	COORD coord = { 0, 0 };
	CONSOLE_SCREEN_BUFFER_INFO binfo; /* to get buffer info */
	DWORD num;

	/* ȡ��ǰ��������Ϣ */
	GetConsoleScreenBufferInfo(hout, &binfo);
	/* ����ַ� */
	FillConsoleOutputCharacter(hout, (TCHAR)' ', binfo.dwSize.X * binfo.dwSize.Y, coord, &num);
	/* ������� */
	FillConsoleOutputAttribute(hout, binfo.wAttributes, binfo.dwSize.X * binfo.dwSize.Y, coord, &num);

	/* ���ص�(0,0) */
	SetConsoleCursorPosition(hout, coord);
	return;
}

/***************************************************************************
  �������ƣ�gotoxy
  ��    �ܣ�������ƶ���ָ��λ��
  ���������HANDLE hout������豸���
			int X      ��ָ��λ�õ�x����
			int Y      ��ָ��λ�õ�y����
  �� �� ֵ����
  ˵    �����˺�����׼�޸�
***************************************************************************/
void gotoxy(const HANDLE hout, const int X, const int Y)
{
	COORD coord;
	coord.X = X;
	coord.Y = Y;
	SetConsoleCursorPosition(hout, coord);
}

/***************************************************************************
  �������ƣ�showch
  ��    �ܣ���ָ��λ�ô���ӡһ��ָ�����ַ�
  ���������HANDLE hout������豸���
			int X      ��ָ��λ�õ�x����
			int Y      ��ָ��λ�õ�y����
			char ch    ��Ҫ��ӡ���ַ�
  �� �� ֵ����
  ˵    �����˺�����׼�޸�
***************************************************************************/
void showch(const HANDLE hout, const int X, const int Y, const char ch)
{
	gotoxy(hout, X, Y);
	putchar(ch);
}

/***************************************************************************
  �������ƣ�init_border
  ��    �ܣ���ʾ��ʼ�ı߿�����ַ�
  ���������HANDLE hout������豸���
  �� �� ֵ����
  ˵    �����˺�����׼�޸�
***************************************************************************/
void init_border(const HANDLE hout)
{
	gotoxy(hout, 0, 0);	//����ƻ����Ͻ�(0,0)
	printf("***********************************************************************\n");
	printf("*                                                                     *\n");
	printf("*                                                                     *\n");
	printf("*                                                                     *\n");
	printf("*                                                                     *\n");
	printf("*                                                                     *\n");
	printf("*                                                                     *\n");
	printf("*                                                                     *\n");
	printf("*                                                                     *\n");
	printf("*                                                                     *\n");
	printf("*                                                                     *\n");
	printf("*                                                                     *\n");
	printf("*                                                                     *\n");
	printf("*                                                                     *\n");
	printf("*                                                                     *\n");
	printf("*                                                                     *\n");
	printf("*                                                                     *\n");
	printf("*                                                                     *\n");
	printf("***********************************************************************\n");

	/* �����ʾ20����д��ĸ����ĸ��ֵ��XY���궼�����ʾ
	   rand()�����Ĺ��ܣ��������һ���� 0-32767 ֮�������
	   ˼������ʲô����£��������ѭ��ִ�����ɺ��㿴����ʵ����ĸ��������20���� */
	   /*��������������ĸ������ͬʱ*/
	int i;
	for (i = 0; i < 20; i++)
		showch(hout, rand() % MAX_X + 1, rand() % MAX_Y + 1, 'A' + rand() % 26);

	return;
}

/* -- �������ӵ����ɺ������Է��ڴ˴� --*/
int menu() {
	int a;
	printf("1.��I��J��K��L��������������(��Сд���ɣ��߽�ֹͣ)\n");
	printf("2.��I��J��K��L��������������(��Сд���ɣ��߽����)\n");
	printf("3.�ü�ͷ�������������ң��߽�ֹͣ\n");
	printf("4.�ü�ͷ�������������ң��߽����\n");
	printf("5.��I��J��K��L��������������(��Сд���ɣ��߽�ֹͣ�������ͷ�������ƶ�)\n");
	printf("6.��I��J��K��L��������������(��Сд���ɣ��߽���ƣ������ͷ�������ƶ�)\n");
	printf("0.�˳�");
	printf("[��ѡ��0-6] ");

	while (1)
	{
		a = _getch();
		if (a <= '6' && a >= '0')
			break;
	}
	return a;
}

void move_by_ijkl(int huirao, int zhengque) {
	const HANDLE hout = GetStdHandle(STD_OUTPUT_HANDLE);
	srand((unsigned int)(time(0)));
	init_border(hout);
	int x = 35, y = 9, a, b;
	gotoxy(hout, x, y);
	while (1) {
		a = _getch();
		if (zhengque == 1)
			if (a == 224)
				b = _getch();
		if (huirao == 0) {
			if ((a == 'i' || a == 'I') && y > 1) {
				y--;
				gotoxy(hout, x, y);
			}
			if ((a == 'k' || a == 'K') && y < 17) {
				y++;
				gotoxy(hout, x, y);
			}
			if ((a == 'j' || a == 'J') && x > 1) {
				x--;
				gotoxy(hout, x, y);
			}
			if ((a == 'l' || a == 'L') && x < 69) {
				x++;
				gotoxy(hout, x, y);
			}
		}
		else {
			if (a == 'i' || a == 'I') {
				y--;
				if (y == 0)
					y = 17;
				gotoxy(hout, x, y);
			}
			if (a == 'k' || a == 'K') {
				y++;
				if (y == 18)
					y = 1;
				gotoxy(hout, x, y);
			}
			if (a == 'j' || a == 'J') {
				x--;
				if (x == 0)
					x = 69;
				gotoxy(hout, x, y);
			}
			if (a == 'l' || a == 'L') {
				x++;
				if (x == 70)
					x = 1;
				gotoxy(hout, x, y);
			}
		}
		if (a == ' ') {
			printf(" \b ");
			gotoxy(hout, x, y);
		}
		if (a == 'q' || a == 'Q') {
			gotoxy(hout, 0, 23);
			printf("��Ϸ���������س������ز˵�.");
			while (1) {
				a = _getch();
				if (a == 13) {
					cls(hout);
					return;
				}
			}
		}
	}
}

void move_by_arrow(int huirao) {
	const HANDLE hout = GetStdHandle(STD_OUTPUT_HANDLE);
	srand((unsigned int)(time(0)));
	init_border(hout);
	int x = 35, y = 9, a;
	gotoxy(hout, x, y);
	while (1) {
		a = _getch();
		if (a == 224) {
			a = _getch();
			if (huirao == 0) {
				if ((a == 72) && y > 1) {
					y--;
					gotoxy(hout, x, y);
				}
				if ((a == 80) && y < 17) {
					y++;
					gotoxy(hout, x, y);
				}
				if ((a == 75) && x > 1) {
					x--;
					gotoxy(hout, x, y);
				}
				if ((a == 77) && x < 69) {
					x++;
					gotoxy(hout, x, y);
				}
			}
			else {
				if (a == 72) {
					y--;
					if (y == 0)
						y = 17;
					gotoxy(hout, x, y);
				}
				if (a == 80) {
					y++;
					if (y == 18)
						y = 1;
					gotoxy(hout, x, y);
				}
				if (a == 75) {
					x--;
					if (x == 0)
						x = 69;
					gotoxy(hout, x, y);
				}
				if (a == 77) {
					x++;
					if (x == 70)
						x = 1;
					gotoxy(hout, x, y);
				}
			}
		}
		if (a == ' ') {
			printf(" \b ");
			gotoxy(hout, x, y);
		}
		if (a == 'q' || a == 'Q') {
			gotoxy(hout, 0, 23);
			printf("��Ϸ���������س������ز˵�.");
			while (1) {
				a = _getch();
				if (a == 13) {
					cls(hout);
					return;
				}
			}
		}
	}
}

/***************************************************************************
  �������ƣ�
  ��    �ܣ�
  ���������
  �� �� ֵ��
  ˵    ����main���������ڳ�ʼ��ʾ�����԰���ĿҪ��ȫ���Ʒ���д
***************************************************************************/
int main()
{
	printf(" ");
	const HANDLE hout = GetStdHandle(STD_OUTPUT_HANDLE); //ȡ��׼����豸��Ӧ�ľ��

	/* ����α����������ӣ�ֻ���ڳ���ʼʱִ��һ�μ��� */
	//srand((unsigned int)(time(0)));

	/* �˾�������ǵ���ϵͳ��cls�������� */
	cls(hout);

	/* ��ʾ��ʼ�ı߿����е�����ַ� */
	//init_border(hout);

	//��ͣ
	//getchar();

	//gotoxy(hout, 0, 23);
	//printf("��Ϸ���������س����˳�.\n");

	//��ͣ(�˴���ҵҪ����ֻ�ܰ��س��˳���Ŀǰ��getcharʾ���������������+�س��˳�������������������Ļ��)
	//getchar();
	int a;
	while (1) {
		a = menu();
		switch (a) {
			case '0':
				printf("0");
				return 0;
				break;
			case '1':
				move_by_ijkl(0, 0);
				break;
			case '2':
				move_by_ijkl(1, 0);
				break;
			case '3':
				move_by_arrow(0);
				break;
			case '4':
				move_by_arrow(1);
				break;
			case '5':
				move_by_ijkl(0, 1);
				break;
			case '6':
				move_by_ijkl(1, 1);
				break;
			default:
				break;
		}
	}

	return 0;
}
/******************************************************************
˼������
1.�������ִ����⡣���ͣ�_getch()���뷽�����᷵������ֵ���������
ͷ��Ӧ114��75����75ǡ��ΪK��ASCII�룻���������ͷ��224��75���뻺
���������224��ֵ������a����ʱa�������κ�һ����֧����������ѭ����
��������ڶ���ѭ��������a=_getch(),ֱ�ӽ���������75��ֵ��a����ʱa��
��a==K�����Թ�������ƶ���
2.��һ��������20����ĸ���п��ܣ�������������ĸ������ͬʱ��������ĸ
�ĸ�����С��20��
******************************************************************/