/* ��05 2353814 ��С�� */
#include <iostream>
#include <cmath>
#include <limits>
#include <string>
//�ɰ���������Ҫ��ͷ�ļ�
using namespace std;

const char chnstr[] = "��Ҽ��������½��ƾ�"; /* ���������д "��" ~ "��" �ĵط���ֻ��������������ȡֵ */
string result;  /* ��result�⣬�����������κ���ʽ��ȫ�ֱ��� */

/* --���������Ҫ�ĺ��� --*/
void daxie(int num, int flag_of_zero)
{
	switch (num) {
		case 0:
			if (flag_of_zero)
				result = result + chnstr[0] + chnstr[1];
			break;
		case 1:
			result = result + chnstr[2] + chnstr[3];
			break;
		case 2:
			result = result + chnstr[4] + chnstr[5];
			break;
		case 3:
			result = result + chnstr[6] + chnstr[7];
			break;
		case 4:
			result = result + chnstr[8] + chnstr[9];
			break;
		case 5:
			result = result + chnstr[10] + chnstr[11];
			break;
		case 6:
			result = result + chnstr[12] + chnstr[13];
			break;
		case 7:
			result = result + chnstr[14] + chnstr[15];
			break;
		case 8:
			result = result + chnstr[16] + chnstr[17];
			break;
		case 9:
			result = result + chnstr[18] + chnstr[19];
			break;
		default:
			cout << "error";
			break;
	}
}

/***************************************************************************
  �������ƣ�
  ��    �ܣ�
  ���������
  �� �� ֵ��
  ˵    ����
***************************************************************************/
int main()
{
    /* --���������Ҫ������ --*/
	double n;
	int shiyi, yi, qianwan, baiwan, shiwan, wan, qian, bai, shi, yuan, jiao, fen, a;
	const char unit[] = "����Ǫ��ʰԲ�Ƿ���";
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
	daxie(shiyi, 0);
	if (shiyi != 0) {
		result = result + unit[8] + unit[9];
		if (yi == 0)
			result = result + unit[0] + unit[1];
	}
	daxie(yi, 0);
	if (yi != 0)
		result = result + unit[0] + unit[1];
	if ((shiyi != 0 || yi != 0) && baiwan != 0)
		a = 1;
	else
		a = 0;
	daxie(qianwan, a);
	if (qianwan != 0) {
		result = result + unit[4] + unit[5];
		if (baiwan == 0 && shiwan == 0 && wan == 0)
			result = result + unit[2] + unit[3];
	}
	if ((shiyi != 0 || yi != 0 || qianwan != 0) && shiwan != 0)
		a = 1;
	else
		a = 0;
	daxie(baiwan, a);
	if (baiwan != 0) {
		result = result + unit[6] + unit[7];
		if (shiwan == 0 && wan == 0)
			result = result + unit[2] + unit[3];
	}
	if ((shiyi != 0 || yi != 0 || qianwan != 0 || baiwan != 0) && wan != 0)
		a = 1;
	else
		a = 0;
	daxie(shiwan, a);
	if (shiwan != 0) {
		result = result + unit[8] + unit[9];
		if (wan == 0)
			result = result + unit[2] + unit[3];
	}
	daxie(wan, 0);
	if (wan != 0)
		result = result + unit[2] + unit[3];
	if ((shiyi != 0 || yi != 0 || qianwan != 0 || baiwan != 0 || shiwan != 0 || wan != 0) && bai != 0)
		a = 1;
	else
		a = 0;
	daxie(qian, a);
	if (qian != 0)
		result = result + unit[4] + unit[5];
	if ((shiyi != 0 || yi != 0 || qianwan != 0 || baiwan != 0 || shiwan != 0 || wan != 0 || qian != 0) && shi != 0)
		a = 1;
	else
		a = 0;
	daxie(bai, a);
	if (bai != 0)
		result = result + unit[6] + unit[7];
	if ((shiyi != 0 || yi != 0 || qianwan != 0 || baiwan != 0 || shiwan != 0 || wan != 0 || qian != 0 || bai != 0) && yuan != 0)
		a = 1;
	else
		a = 0;
	daxie(shi, a);
	if (shi != 0)
		result = result + unit[8] + unit[9];
	daxie(yuan, 0);
	if (n == 0) {
		daxie(0, 1);
		result = result + unit[10] + unit[11];
	}
	if (int(n) != 0)
		result = result + unit[10] + unit[11];
	if ((shiyi != 0 || yi != 0 || qianwan != 0 || baiwan != 0 || shiwan != 0 || wan != 0 || qian != 0 || bai != 0 || shi != 0 || yuan != 0) && fen != 0)
		a = 1;
	else
		a = 0;
	daxie(jiao, a);
	if (jiao != 0)
		result = result + unit[12] + unit[13];
	daxie(fen, 0);
	if (fen != 0)
		result = result + unit[14] + unit[15];
	else
		result = result + unit[16] + unit[17];
	cout << "��д�����:" << endl;
    cout << result << endl;  /* ת���õ��Ĵ�д�����ֻ�����ñ��������������ط����������κ���ʽ�Դ�д�������ȫ��/������� */
    return 0;
}
