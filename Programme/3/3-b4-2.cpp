/*2353814 ��05 ��С��*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	cout << "�����������ε����߼���н�(�Ƕ�)" << endl;
	const float pi = 3.14159f;
	int a, b, c;
	float s,d;
	cin >> a >> b >> c;
	d = c * pi / 180;
	s = 1.0f / 2 * a * b * sin(d);
	cout << "�����ε����Ϊ" << " " << ":" << " " << setprecision(3) << fixed << s << endl;

	return 0;
} 