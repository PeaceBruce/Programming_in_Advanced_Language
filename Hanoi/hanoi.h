/* ��05 2353814 ��С�� */
#pragma once

/* ------------------------------------------------------------------------------------------------------

     ���ļ����ܣ�
	1��Ϊ�˱�֤ hanoi_main.cpp/hanoi_menu.cpp/hanoi_multiple_solutions.cpp ���໥���ʺ����ĺ�������
	2��һ�����ϵ�cpp���õ��ĺ궨�壨#define����ȫ��ֻ����const����������������
	3�����Բο� cmd_console_tools.h ��д���������Ķ�����ᣩ
   ------------------------------------------------------------------------------------------------------ */

void initialize();
char menu();
void input(char* src, char* dst, char* tmp, int* n, char order);
void landscape();
void portrait(char order);
void speed();
void column();
void disc(char src, int n);
void display(char src, char dst);
void step(int src, int dst);
void shouhang(char src, char dst, int n, char order);
void detail(int n, char src, char tmp, char dst, char order);
void hanoi(int n, char src, char tmp, char dst, char order);
void game(int n, char src, char tmp, char dst, char order);