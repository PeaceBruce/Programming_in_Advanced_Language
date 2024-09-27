/* ��05 2353814 ��С�� */
#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

int zeller(int y, int m, int d) {
	int w, c;
	if (m == 1 || m == 2) {
		m = m + 12;
		y = y - 1;
	}
	c = y / 100;
	y = y % 100;
	w = y + y / 4 + c / 4 - 2 * c + 26 * (m + 1) / 10 + d - 1;
	while (w < 0)
		w = w + 7;
	w = w % 7;
	return w;
}
int main()
{
	int year, month, day, week;
	while (1) {
		cout << "��������[1900-2100]���¡��գ�" << endl;
		cin >> year >> month >> day;
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
		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
			if (day < 1 || day>31) {
				cout << "�ղ���ȷ������������" << endl;
				continue;
			}
		}
		else if (month == 4 || month == 6 || month == 9 || month == 11) {
			if (day < 1 || day>30) {
				cout << "�ղ���ȷ������������" << endl;
				continue;
			}
		}
		else {
			if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
				if (day < 0 || day>29) {
					cout << "�ղ���ȷ������������" << endl;
					continue;
				}
			}
			else {
				if (day < 0 || day>28) {
					cout << "�ղ���ȷ������������" << endl;
					continue;
				}
			}
		}
		break;
	}
	week = zeller(year, month, day);
	if (week == 1)
		cout << "����һ" << endl;
	else if (week == 2)
		cout << "���ڶ�" << endl;
	else if (week == 3)
		cout << "������" << endl;
	else if (week == 4)
		cout << "������" << endl;
	else if (week == 5)
		cout << "������" << endl;
	else if (week == 6)
		cout << "������" << endl;
	else
		cout << "������" << endl;

	return 0;
}