/*2353814 ��05 ��С��*/
#include <iostream>
using namespace std;

int main()
{
	cout << "������һ��[1..30000]�������:" << endl;
	int n, a, b, c, d, e;
	cin >> n;
	a = n / 10000;
	b = n % 10000 / 1000;
	c = n % 1000 / 100;
	d = n % 100 / 10;
	e = n % 10;
	cout << "��λ" << " " << ":" << " " << a << endl;
	cout << "ǧλ" << " " << ":" << " " << b << endl;
	cout << "��λ" << " " << ":" << " " << c << endl;
	cout << "ʮλ" << " " << ":" << " " << d << endl;
	cout << "��λ" << " " << ":" << " " << e << endl;

	return 0;
}