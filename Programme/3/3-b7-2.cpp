/*2353814 ��05 ��С��*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cout << "����������ֵ��" << endl;
	double n;
	int a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a, b;
	cin >> n;
	a1 = int(n) / 50;
	a2 = (int(n) - 50 * a1) / 20;
	a3 = (int(n) - 50 * a1 - 20 * a2) / 10;
	a4 = (int(n) - 50 * a1 - 20 * a2 - 10 * a3) / 5;
	a5 = int(n) - 50 * a1 - 20 * a2 - 10 * a3 - 5 * a4;
	b = int(round((n - floor(n)) * 100));
	a6 = b / 50;
	a7 = (b - 50 * a6) / 10;
	a8 = (b - 50 * a6 - 10 * a7) / 5;
	a9 = (b - 50 * a6 - 10 * a7 - 5 * a8) / 2;
	a10 = b - 50 * a6 - 10 * a7 - 5 * a8 - 2 * a9;
	a = a1 + a2 + a3 + a4 + a5 + a6 + a7 + a8 + a9 + a10;
	cout << "��" << a << "�����㣬�������£�" << endl;
	if (a1 > 0)
		cout << "50Ԫ" << " " << ":" << " " << a1 << "��" << endl;
	if (a2 > 0)
		cout << "20Ԫ" << " " << ":" << " " << a2 << "��" << endl;
	if (a3 > 0)
		cout << "10Ԫ" << " " << ":" << " " << a3 << "��" << endl;
	if (a4 > 0)
		cout << "5Ԫ " << " " << ":" << " " << a4 << "��" << endl;
	if (a5 > 0)
		cout << "1Ԫ " << " " << ":" << " " << a5 << "��" << endl;
	if (a6 > 0)
		cout << "5�� " << " " << ":" << " " << a6 << "��" << endl;
	if (a7 > 0)
		cout << "1�� " << " " << ":" << " " << a7 << "��" << endl;
	if (a8 > 0)
		cout << "5�� " << " " << ":" << " " << a8 << "��" << endl;
	if (a9 > 0)
		cout << "2�� " << " " << ":" << " " << a9 << "��" << endl;
	if (a10 > 0)
		cout << "1�� " << " " << ":" << " " << a10 << "��" << endl;

	return 0;
}