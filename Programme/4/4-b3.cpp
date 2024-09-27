/* ��05 2353814 ��С�� */
#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

void calender(int year, int month)
{
	/* ������Ӵ��� */
	int w, c, m, y, i, j, n;
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		n = 31;
	else if (month == 2) {
		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
			n = 29;
		else
			n = 28;
	}
	else
		n = 30;
	m = month;
	y = year;
	if (m == 1 || m == 2) {
		m = m + 12;
		y = y - 1;
	}
	c = y / 100;
	y = y % 100;
	w = y + y / 4 + c / 4 - 2 * c + 26 * (m + 1) / 10 + 1 - 1;
	while (w < 0)
		w = w + 7;
	w = w % 7;
	cout << endl;
	cout << year << "��" << month << "��" << endl;
	/* ͷ���ָ��ߣ������� */
	cout << "======================================================" << endl;
	cout << "������  ����һ  ���ڶ�  ������  ������  ������  ������" << endl;
	cout << "======================================================" << endl;

	/* ������Ӵ��� */
	for (i = 1; i <= w; i++) {
		if (i == 1)
			cout << std::right << setw(4) << " ";
		else
			cout << std::right << setw(8) << " ";
	}
	for (j = 1; j <= n; j++) {
		if ((w + j - 1) % 7 == 0)
			cout << std::right << setw(4) << j;
		else
			cout << std::right << setw(8) << j;
		if ((w + j) % 7 == 0)
			cout << std::right << setw(4) << " " << endl;
		if ((w + j) % 7 != 0 && j == n)
			cout << std::right << setw(4) << " " << endl;
	}
	/* β���ָ��ߣ������� */
	cout << "======================================================" << endl;
}
int main()
{
	int year, month, day = 1;
	while (1) {
		cout << "��������[1900-2100]����" << endl;
		cin >> year >> month;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "�����������������" << endl;
			continue;
		}
		if (year < 1900 || year > 2100) {
			cout << "��ݲ���ȷ������������" << endl;
			continue;
		}
		if (month < 1 || month > 12) {
			cout << "�·ݲ���ȷ������������" << endl;
			continue;
		}
		break;
	}
	calender(year, month);

	return 0;
}