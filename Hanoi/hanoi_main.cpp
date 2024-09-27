/* ��05 2353814 ��С�� */
#include <iostream>
#include <iomanip>
#include <conio.h>
#include <cstdio>
#include <windows.h>
#include "hanoi.h"
#include "cmd_console_tools.h"
using namespace std;

/* ----------------------------------------------------------------------------------

     ���ļ����ܣ�
	1����main����
	2����ʼ����Ļ
	3�����ò˵�������hanoi_menu.cpp�У�������ѡ��
	4������ѡ����ò˵������Ӧ��ִ�к�����hanoi_multiple_solutions.cpp�У�

     ���ļ�Ҫ��
	1����������ȫ�ֱ��������ⲿȫ�ֺ;�̬ȫ�֣�const��#define�������Ʒ�Χ�ڣ�
	2����̬�ֲ����������������ƣ���ʹ��׼��Ҳ�ǣ����á����á��ܲ��þ�������
	3���������ϵͳͷ�ļ����Զ���ͷ�ļ��������ռ��

   ----------------------------------------------------------------------------------- */

/***************************************************************************
  �������ƣ�
  ��    �ܣ�
  ���������
  �� �� ֵ��
  ˵    ����
***************************************************************************/
int main()
{
	char order,key_return;
	char src, dst, tmp;
	int n;

	/* demo������ִ�д˾䣬��cmd��������Ϊ40��x120�У����������120�У�����9000�У���cmd�����Ҳ���д�ֱ�����ˣ�*/
	cct_setconsoleborder(120, 40, 120, 9000);
	while (1) {
		initialize();
		cct_cls();
		order = menu();
		if (order == '0')
			break;
		else if (order != '5')
			input(&src, &dst, &tmp, &n, order);
		if (order >= '4' && order <= '8') {
			cct_cls();
			cct_setcursor(CURSOR_INVISIBLE);
			if (order != '5')
				shouhang(src, dst, n, order);
			if (order == '4'|| order == '8')
				portrait(order);
		}
		if (order == '4') {
			cct_gotoxy(0, 17);
			cout << "��ʼ: ";
			landscape();
		}
		else if (order == '5')
			column();
		else if (order == '6' || order == '7') {
			column();
			disc(src, n);
			if (order == '7') {
				Sleep(1000);
				if (n % 2 == 0)
					dst = tmp;
				step(src, dst);
				display(src, dst);
			}
			cct_setcursor(CURSOR_VISIBLE_NORMAL);
		}
		else if(order == '8') {
			cct_gotoxy(0, 32);
			cout << "��ʼ: ";
			landscape();
			column();
			disc(src, n);
			Sleep(1000);
		}
		if (order >= '1' && order <= '8'&& order!='5')
			hanoi(n, src, tmp, dst, order);
		cout << endl;
		if (order == '9')
			game(n, src, tmp, dst, order);
		if (order >= '4' && order <= '9')
			cct_gotoxy(0, 38);
		cct_setcursor(CURSOR_VISIBLE_NORMAL);
		cout << "���س�������";
		while (1) {
			key_return = _getch();
			if (key_return == 13)
				break;
		}
	}
	cout << endl;
	
	return 0;
}
