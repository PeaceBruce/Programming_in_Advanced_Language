/* ��05 2353814 ��С�� */
#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	int arg[5], bu[4], kuan, daxie, xiaoxie, shuzi, qita,cha;
	char password[10][16] = { 0 };
	cout << "���������볤��(12-16)�� ��д��ĸ����(��2)�� Сд��ĸ����(��2)�� ���ָ���(��2)�� �������Ÿ���(��2)" << endl;
	for (int i = 0; i <= 4; i++) {
		cin >> arg[i];
		if (cin.fail() != 0) {
			cout << "����Ƿ�" << endl;
			return 0;
		}
	}
	if (arg[0] < 12 || arg[0]>16) {
		cout << "���볤��[" << arg[0] << "]����ȷ" << endl;
		return 0;
	}
	else if (arg[1] < 2 || arg[1]>arg[0]) {
		cout << "��д��ĸ����[" << arg[1] << "]����ȷ" << endl;
		return 0;
	}
	else if (arg[2] < 2 || arg[2]>arg[0]) {
		cout << "Сд��ĸ����[" << arg[2] << "]����ȷ" << endl;
		return 0;
	}
	else if (arg[3] < 2 || arg[3]>arg[0]) {
		cout << "���ָ���[" << arg[3] << "]����ȷ" << endl;
		return 0;
	}
	else if (arg[4] < 2 || arg[4]>arg[0]) {
		cout << "�������Ÿ���[" << arg[4] << "]����ȷ" << endl;
		return 0;
	}
	else if (arg[1]+ arg[2] + arg[3] + arg[4] >arg[0]) {
		cout << "�����ַ�����֮��[" << arg[1] << "+" << arg[2] << "+" << arg[3] << "+" << arg[4] << "]���������볤��[" << arg[0] << "]" << endl;
		return 0;
	}
	cout << arg[0] << " " << arg[1] << " " << arg[2] << " " << arg[3] << " " << arg[4] << endl;
	srand((unsigned)time(NULL));
	kuan = arg[0];
	for (int i = 0; i < 10; i++) {
		cha = kuan - arg[1] - arg[2] - arg[3] - arg[4];
		for (int k = 0; k < 3; k++) {
			bu[k] = rand() % (cha+1) + 0;
			cha -= bu[k];
		}
		bu[3] = cha;
		daxie = arg[1] + bu[0];
		xiaoxie = arg[2] + bu[1];
		shuzi = arg[3] + bu[2];
		qita = arg[4] + bu[3];
		for (int j = 0; j < kuan; j++) {
			char n = rand() % 94 + 33;
			if (n >= 'A' && n <= 'Z' && daxie > 0) {
				password[i][j] = n;
				daxie--;
			}
			else if (n >= 'a' && n <= 'z' && xiaoxie > 0) {
				password[i][j] = n;
				xiaoxie--;
			}
			else if (n >= '0' && n <= '9' && shuzi > 0) {
				password[i][j] = n;
				shuzi--;
			}
			else if ((n == '!' ||( n >= '#' && n <= '&')|| (n >= '*' && n <= '.')||n=='=' || n == '?' || n == '@' || n == 94 || n == '_')&&qita>0) {
				password[i][j] = n;
				qita--;
			}
			else
				j--;
		}
	}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < kuan; j++) {
			cout << password[i][j];
		}
		cout << endl;
	}

	return 0;
}