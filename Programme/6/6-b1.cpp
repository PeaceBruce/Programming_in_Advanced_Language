/* 2353814 ��С�� ��05 */
#include <iostream>
using namespace std;

#define  N  10	/* �������ת��10������ */

/* �������ٶ�������������ȫ�ֱ��� */

int main()
{
	/* ����в���Ҫ�ı���������ɾ��������������ӻ��滻Ϊ�������͵ı��� */
	char str[256], *p;
	int  a[N] = { 0 }, *pnum, *pa;

	/* ����Ķ��岻׼��(ɾ������Ҫ�ı�������)������Ϊ����ľ���ʵ�֣�Ҫ�󲻵��ٶ����κα����������������� */
	cout << "�����������������������ֵ��ַ���" << endl;
	p = str;
	pa = a;
	gets_s(str);
	for (; p < str + 256; p++) {
		if (pa >= a + 10)
			break;
		if (*p >= '0' && *p <= '9') {
			*pa = int(*p - '0');
			p++;
			for (; *p >= '0' && *p <= '9'; p++)
				*pa = *pa * 10 + int(*p - '0');
			pa++;
		}
	}
	cout << "����" << pa - a << "������" << endl;
	for (pnum = a; pnum < pa; pnum++)
		cout << *pnum << " ";
	cout << endl;

	return 0;
}
