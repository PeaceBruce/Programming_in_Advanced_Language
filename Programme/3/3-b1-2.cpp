#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	cout << "������뾶�͸߶�" << endl;
	const double pi = 3.14159;
	double r,h,a,b,c,d,e;
	cin >> r >> h;
	a = 2 * pi * r;
	b = pi * r * r;
	c = 4 * pi * r * r;
	d = pi * r * r * r * 4 / 3;
	e = pi * r * r * h;
	cout << "Բ�ܳ�    " << " " << ":" << " " << setprecision(2) << fixed << a << endl;
	cout << "Բ���    " << " " << ":" << " " << setprecision(2) << fixed << b << endl;
	cout << "Բ������" << " " << ":" << " " << setprecision(2) << fixed << c << endl;
	cout << "Բ�����  " << " " << ":" << " " << setprecision(2) << fixed << d << endl;
	cout << "Բ�����  " << " " << ":" << " " << setprecision(2) << fixed << e << endl;

	return 0;
}