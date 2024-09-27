/* 2353814 ��05 ��С�� */
#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;

/* -----------------------------------------------------------------------------------
        ����   ��1����������һ�����������������ݹ麯�����������������ӵĺ����в������κ���ʽ��ѭ��
                 2��������ų���
                 3������const�ͱ���

        ������ ��1������ȫ�ֱ���
                 2����print_tower֮������������в������徲̬�ֲ����� 
   ----------------------------------------------------------------------------------- */
void print_left(char left)
{
	cout << left;
	if (left == 'A')
		return;
	else
		print_left(left - 1);
}
void print_right(char right, char end)
{
	cout << right;
	if (right == end)
		return;
	else
		print_right(right + 1, end);
}
/***************************************************************************
  �������ƣ�
  ��    �ܣ���ӡ��ĸ��
  ���������
  �� �� ֵ��
  ˵    �����βΰ�������
            ��ʾ����һ������order��ָ������/���� 
***************************************************************************/
void print_tower(char start_ch,char end_ch,int order1,int order2,int width)
{
	/* �����趨�����һ����̬�ֲ�������Ҳ���Բ����壩 */
	
	/* ����ʵ�֣������в������κ���ʽ��ѭ����������������������� */
	if (order1 == 0) {
		cout << setfill(' ');
		cout << setw(width) << start_ch;
		if (start_ch != 'A') {
			print_left(start_ch-1);
			print_right('B', start_ch);
			cout << endl;
			if (start_ch == end_ch)
				return;
			else
				print_tower(start_ch + 1, end_ch, order1, order2,width-1);
		}
		else {
			cout << endl;
			if (end_ch != 'A')
				print_tower(start_ch + 1, end_ch, order1, order2, width - 1);
			else
				return;
		}
	}
	else {
		if (order2 == 1) {
			if (end_ch == 'A') 
				return;
			else
			    print_tower(start_ch, end_ch - 1, 1, 0, width + 1);
		}
		else {
			cout << setfill(' ');
			cout << setw(width) << end_ch;
			if (end_ch != start_ch) {
				print_left(end_ch - 1);
				print_right('B', end_ch);
				cout << endl;
				if (end_ch == start_ch)
					return;
				else
					print_tower(start_ch, end_ch - 1, 1, 0, width + 1);
			}
			else {
				cout << endl;
			}
		}
	}
}

/***************************************************************************
  �������ƣ�
  ��    �ܣ�
  ���������
  �� �� ֵ��
  ˵    ����main�����е�...�����޸ģ�����λ�ò�׼�޸�
***************************************************************************/
int main()
{
	char end_ch;

	/* ������������ַ�(����д��Ч��Ϊ����ѭ�����֣��������������) */
	cout << "����������ַ�(A~Z)" << endl;
	end_ch = getchar();			//����������һ���ַ�
	if (end_ch < 'A' || end_ch > 'Z') {
		cout << "�����ַ����Ǵ�д��ĸ" << endl;
		return -1;
	}

	/* ��������ĸ��(�м�ΪA) */
	cout << setfill('=') << setw((end_ch - 'A') * 2 + 1) << '=' << endl; /* ����ĸ����������=(��������ѭ��) */
	cout << "��������ĸ��(" << end_ch << "->A)" << endl;
	cout << setfill('=') << setw((end_ch - 'A') * 2 + 1) << '=' << endl; /* ����ĸ����������=(��������ѭ��) */
	print_tower('A',end_ch, 0, 0, end_ch - 'A' + 1); //�����ӡ A~�����ַ� 
	cout << endl;

	/* ��������ĸ��(�м�ΪA) */
	cout << setfill('=') << setw((end_ch - 'A') * 2 + 1) << '=' << endl; /* ����ĸ����������=(��������ѭ��) */
	cout << "��������ĸ��(" << end_ch << "->A)" << endl;
	cout << setfill('=') << setw((end_ch - 'A') * 2 + 1) << '=' << endl; /* ����ĸ����������=(��������ѭ��) */
	print_tower('A',end_ch, 1, 0,1); //�����ӡ A~�����ַ� 
	cout << endl;

	/* ����������Ư�������Σ��м�ΪA�� */
	cout << setfill('=') << setw((end_ch - 'A') * 2 + 1) << '=' << endl;/* ����ĸ����������= */
	cout << "����(" << end_ch << "->A)" << endl;
	cout << setfill('=') << setw((end_ch - 'A') * 2 + 1) << '=' << endl;/* ����ĸ����������= */
	print_tower('A',end_ch, 0, 0, end_ch - 'A' + 1);   //��ӡ A~�����ַ��������� 
	print_tower('A',end_ch, 1, 1,1);   //��ӡ A~�����ַ�-1�ĵ����� 
	cout << endl;

	return 0;
}
