/* 2353814 ��С�� ��05 */
#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

int main()
{
	int a[21], i, j, k, ret;
	cout << "��������������������������20������0������������" << endl;
	for (i = 0; i < 20; i++) {
		cin >> a[i];
		if (a[i] <= 0) {
			i++;
			break;
		}
	}
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	i--;
	if (a[0] <= 0) {
		cout << "��Ч����" << endl;
		return 0;
	}
	if (a[i] <= 0)
		i--;
	//cout << "i=" << i << endl;
	cout << "ԭ����Ϊ��" << endl;
	for (j = 0; j <= i; j++)
		cout << a[j] << ' ';
	cout << endl;
	cout << "������Ҫ�����������" << endl;
	i++;
	cin >> a[i];
	for (k = 0; k <= i; k++) {
		ret = a[i] < a[k];
		if (ret == 1) {
			int b = a[i],m;
			for (m = i; m > k; m--)
				a[m] = a[m - 1];
			a[k] = b;
			break;
		}
	}
	//cout << "i=" << i << endl;
	cout << "����������Ϊ��" << endl;
	for (j = 0; j <= i; j++)
		cout << a[j] << ' ';
	cout << endl;

	return 0;
}