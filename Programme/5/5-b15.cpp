/* ��05 2353814 ��С�� */
#include <iostream>
using namespace std;

int main()
{
	char str[3][128];
	for (int i = 0; i < 3; i++) {
		cout << "�������" << i + 1 << "��" << endl;
		cin.get(str[i], 128);
		getchar();
	}
	int daxie = 0, xiaoxie = 0, shuzi = 0, kongge = 0, qita = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; str[i][j] != '\0'; j++) {
			if (str[i][j] >= 65 && str[i][j] <= 90)
				daxie++;
			else if (str[i][j] >= 97 && str[i][j] <= 122)
				xiaoxie++;
			else if (str[i][j] >= '0' && str[i][j] <= '9')
				shuzi++;
			else if (str[i][j] == ' ')
				kongge++;
			else
				qita++;
		}
	}
	cout << "��д : " << daxie << endl;
	cout << "Сд : " << xiaoxie << endl;
	cout << "���� : " << shuzi << endl;
	cout << "�ո� : " << kongge << endl;
	cout << "���� : " << qita << endl;

	return 0;
}
