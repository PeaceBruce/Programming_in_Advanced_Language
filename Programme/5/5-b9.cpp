/* 2353814 ��С�� ��05 */
#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

int main()
{
	int shu[9][9] = { 0 }, i, j, k;
	int math[9] = { 0 }, m, n, p, q;
	cout << "������9*9�ľ���ֵΪ1-9֮��" << endl;
	for (i = 0; i < 9; i++) {
		for (j = 0; j < 9; j++) {
			while (1) {
				cin >> shu[i][j];
				if (cin.fail()) {
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout << "�����������" << i + 1 << "��" << j + 1 << "��(���о���1��ʼ����)��ֵ" << endl;
					continue;
				}
				if (shu[i][j] < 1 || shu[i][j]>9) {
					cout << "�����������" << i + 1 << "��" << j + 1 << "��(���о���1��ʼ����)��ֵ" << endl;
					continue;
				}
				break;
			}
		}
	}
	for (i = 0; i < 9; i++) {
		for (j = 0; j < 9; j++) {
			for (k = j + 1; k < 9; k++) {
				if (shu[i][j] == shu[i][k]) {
					//cout << "��" << i+1 << "��" << j+1 << "�к�" << k+1 << "����ȣ�Ϊ" << shu[i][j]<<" "<< shu[i][k]<< endl;
					cout << "���������Ľ�" << endl;
					return 0;
				}
			}
		}
	}
	for (i = 0; i < 9; i++) {
		for (j = 0; j < 9; j++) {
			for (k = j + 1; k < 9; k++) {
				if (shu[j][i] == shu[k][i]) {
					//cout << "��" << i+1 << "��" << j+1 << "�к�" << k+1 << "����ȣ�Ϊ" << shu[j][i]<<" "<< shu[k][i]<< endl;
					cout << "���������Ľ�" << endl;
					return 0;
				}
			}
		}
	}
	for (i = 0; i < 9; i = i + 3) {
		for (j = 0; j < 9; j = j + 3) {
			k = 0;
			for (m = 0; m < 3; m++) {
				for (n = 0; n < 3; n++) {
					int a = i + m, b = j + n;
					math[k] = shu[a][b];
					k++;
				}
			}
			for (p = 0; p < 9; p++) {
				for (q = p + 1; q < 9; q++) {
					if (math[p] == math[q]) {
						//cout << "��Ϊ" << i + 1 << "-" << i + 3 << "����Ϊ" << j + 1 << "-" << j + 3 << "��С�Ź����������ظ�" << endl;
						cout << "���������Ľ�" << endl;
						return 0;
					}
				}
			}
		}
	}
	cout << "�������Ľ�" << endl;

	return 0;
}