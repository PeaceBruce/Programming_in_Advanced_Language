/*2353814 ��05 ��С��*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cout << "������[0,100��)֮�������:" << endl;
	double n;
	int a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12;
	cin >> n;
	a1 = int(n / 10) / 100000000;
	a2 = int(n / 10) % 100000000 / 10000000;
	a3 = int(n / 10) % 10000000 / 1000000;
	a4 = int(n / 10) % 1000000 / 100000;
	a5 = int(n / 10) % 100000 / 10000;
	a6 = int(n / 10) % 10000 / 1000;
	a7 = int(n / 10) % 1000 / 100;
	a8 = int(n / 10) % 100 / 10;
	a9 = int(n / 10) % 10;
	a10 = int(floor((n / 10 - floor(n / 10)) * 10));
	a11 = int(round((n - floor(n)) * 100)) / 10;
	a12 = int(round((n - floor(n)) * 100)) % 10;
	cout << "ʮ��λ" << " " << ":" << " " << a1 << endl;
	cout << "��λ  " << " " << ":" << " " << a2 << endl;
	cout << "ǧ��λ" << " " << ":" << " " << a3 << endl;
	cout << "����λ" << " " << ":" << " " << a4 << endl;
	cout << "ʮ��λ" << " " << ":" << " " << a5 << endl;
	cout << "��λ  " << " " << ":" << " " << a6 << endl;
	cout << "ǧλ  " << " " << ":" << " " << a7 << endl;
	cout << "��λ  " << " " << ":" << " " << a8 << endl;
	cout << "ʮλ  " << " " << ":" << " " << a9 << endl;
	cout << "Բ    " << " " << ":" << " " << a10 << endl;
	cout << "��    " << " " << ":" << " " << a11 << endl;
	cout << "��    " << " " << ":" << " " << a12 << endl;
	
	return 0;
}