/* 2353814 ��С�� ��05 */
#include <iostream>
#include <iomanip>
#include <conio.h>
#include <windows.h>
using namespace std;

void menu(char *porder)
{
	cout << setfill('-') << setw(60) << "-" << endl;
	cout << " 1.�ڲ����飬���ɳ�ʼ״̬��Ѱ���Ƿ��г�ʼ��������" << endl;
	cout << " 2.�ڲ����飬������ʼ����������0�����䲢��0���" << endl;
	cout << " 3.�ڲ����飬������ʼ������������������ʾ" << endl;
	cout << " 4.n*n�Ŀ��(�޷ָ���)����ʾ��ʼ״̬" << endl;
	cout << " 5.n*n�Ŀ��(�зָ���)����ʾ��ʼ״̬" << endl;
	cout << " 6.n*n�Ŀ��(�޷ָ���)����ʾ��ʼ״̬����ʼ��������" << endl;
	cout << " 7.n*n�Ŀ��(�зָ���)��������ʼ�����������ʾ������ʾ" << endl;
	cout << " 8.cmdͼ�ν���������(�зָ��ߣ�����ƶ�ʱ��ʾ���꣬�Ҽ��˳�)" << endl;
	cout << " 9.cmdͼ�ν���������" << endl;
	cout << setfill('-') << setw(60) << "-" << endl;
	cout << "[��ѡ��:] ";
	while (1) {
		*porder = _getch();
		if (*porder < '0' || *porder > '9')
			continue;
		else {
			cout << *porder << endl;
			break;
		}
	}
	Sleep(100);
}