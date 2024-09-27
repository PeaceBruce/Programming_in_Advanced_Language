/* 2353814 ��С�� ��05 */
#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

int my_min(int a, int b, int c = 2147483647, int d = 2147483647)
{
	int min;
	min = a < b ? a : b;
	min = min < c ? min : c;
	min = min < d ? min : d;

	return min;
}

int main()
{
	int num, a, b, c, d, min;
	while (1) {
		cout << "���������num��num����������" << endl;
		cin >> num;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			continue;
		}
		if (num < 2 || num>4) {
			cout << "�����������" << endl;
			break;
		}
		if (num == 2) {
			cin >> a >> b;
			if (cin.fail() || a <= 0 || b <= 0) {
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				continue;
			}
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			min = my_min(a, b);
			cout << "min=" << min << endl;
			break;
		}
		else if (num == 3) {
			cin >> a >> b >> c;
			if (cin.fail() || a <= 0 || b <= 0 || c <= 0) {
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				continue;
			}
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			min = my_min(a, b, c);
			cout << "min=" << min << endl;
			break;
		}
		else if (num == 4) {
			cin >> a >> b >> c >> d;
			if (cin.fail() || a <= 0 || b <= 0 || c <= 0 || d <= 0) {
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				continue;
			}
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			min = my_min(a, b, c, d);
			cout << "min=" << min << endl;
			break;
		}
	}

	return 0;
}