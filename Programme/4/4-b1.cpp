/* 2353814 ��С�� ��05 */
#include <iostream>
#include <cmath>
#include <limits>
using namespace std;

/* �ɸ�����Ҫ�����Ӧ������ */

/***************************************************************************
  �������ƣ�
  ��    �ܣ������д��0~9
  ���������
  �� �� ֵ��
  ˵    �������������⣬�������κκ�����������㡱-������!!!!!!
***************************************************************************/
void daxie(int num, int flag_of_zero)
{
	/* ������Ա��������κ��޸� */
	switch (num) {
		case 0:
			if (flag_of_zero)	//�˱��ʲô��˼������˼��
				cout << "��";
			break;
		case 1:
			cout << "Ҽ";
			break;
		case 2:
			cout << "��";
			break;
		case 3:
			cout << "��";
			break;
		case 4:
			cout << "��";
			break;
		case 5:
			cout << "��";
			break;
		case 6:
			cout << "½";
			break;
		case 7:
			cout << "��";
			break;
		case 8:
			cout << "��";
			break;
		case 9:
			cout << "��";
			break;
		default:
			cout << "error";
			break;
	}
}

/* �ɸ�����Ҫ�Զ�����������(Ҳ���Բ�����) */

/***************************************************************************
  �������ƣ�
  ��    �ܣ�
  ���������
  �� �� ֵ��
  ˵    ����
***************************************************************************/
int main()
{
	/* ������� */
	double n;
	int shiyi, yi, qianwan, baiwan, shiwan, wan, qian, bai, shi, yuan, jiao, fen, a;
	while (1) {
		cout << "������[0-100��)֮�������:" << endl;
		cin >> n;
		if (cin.fail() == 1) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			continue;
		}
		if (n < 0 || n >= 10000000000)
			continue;
		break;
	}
	shiyi = int(n / 10) / 100000000;
	yi = int(n / 10) % 100000000 / 10000000;
	qianwan = int(n / 10) % 10000000 / 1000000;
	baiwan = int(n / 10) % 1000000 / 100000;
	shiwan = int(n / 10) % 100000 / 10000;
	wan = int(n / 10) % 10000 / 1000;
	qian = int(n / 10) % 1000 / 100;
	bai = int(n / 10) % 100 / 10;
	shi = int(n / 10) % 10;
	yuan = int(floor((n / 10 - floor(n / 10)) * 10));
	jiao = int(round((n - floor(n)) * 100)) / 10;
	fen = int(round((n - floor(n)) * 100)) % 10;
	cout << "��д�����:" << endl;
	daxie(shiyi, 0);
	if (shiyi != 0) {
		cout << "ʰ";
		if (yi == 0)
			cout << "��";
	}
	daxie(yi, 0);
	if (yi != 0)
		cout << "��";
	if ((shiyi != 0 || yi != 0) && baiwan != 0)
		a = 1;
	else
		a = 0;
	daxie(qianwan, a);
	if (qianwan != 0) {
		cout << "Ǫ";
		if (baiwan == 0 && shiwan == 0 && wan == 0)
			cout << "��";
	}
	if ((shiyi != 0 || yi != 0 || qianwan != 0) && shiwan != 0)
		a = 1;
	else
		a = 0;
	daxie(baiwan, a);
	if (baiwan != 0) {
		cout << "��";
		if (shiwan == 0 && wan == 0)
			cout << "��";
	}
	if ((shiyi != 0 || yi != 0 || qianwan != 0 || baiwan != 0) && wan != 0)
		a = 1;
	else
		a = 0;
	daxie(shiwan, a);
	if (shiwan != 0) {
		cout << "ʰ";
		if (wan == 0)
			cout << "��";
	}
	daxie(wan, 0);
	if (wan != 0) 
		cout << "��";
	if ((shiyi != 0 || yi != 0 || qianwan != 0 || baiwan != 0 || shiwan != 0 || wan != 0) && bai != 0)
		a = 1;
	else
		a = 0;
	daxie(qian, a);
	if (qian != 0) 
		cout << "Ǫ";
	if ((shiyi != 0 || yi != 0 || qianwan != 0 || baiwan != 0 || shiwan != 0 || wan != 0 || qian != 0) && shi != 0)
		a = 1;
	else
		a = 0;
	daxie(bai, a);
	if (bai != 0)
		cout << "��";
	if ((shiyi != 0 || yi != 0 || qianwan != 0 || baiwan != 0 || shiwan != 0 || wan != 0 || qian != 0 || bai != 0) && yuan != 0)
		a = 1;
	else
		a = 0;
	daxie(shi, a);
	if (shi != 0)
		cout << "ʰ";
	daxie(yuan, 0);
	if (n == 0) {
		daxie(0, 1);
		cout << "Բ";
	}
	if (int(n) != 0)
		cout << "Բ";
	if ((shiyi != 0 || yi != 0 || qianwan != 0 || baiwan != 0 || shiwan != 0 || wan != 0 || qian != 0 || bai != 0 || shi != 0 || yuan != 0) && fen != 0)
		a = 1;
	else
		a = 0;
	daxie(jiao, a);
	if (jiao != 0)
		cout << "��";
	daxie(fen, 0);
	if (fen != 0)
		cout << "��";
	else
		cout << "��";
	cout << endl;
	return 0;
}
