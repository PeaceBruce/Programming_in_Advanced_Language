/* 2353814 ��С�� ��05 */
#include <iostream>
using namespace std;

int judge(char *first,char *end)
{
	for (; first < end ; first++, end--) {
		//static int i = 1;
		if (*first != *end){
			//cout << "i=" << i << endl;
			//cout <<"*first="<< * first << " " << "*end=" <<* end << endl;
			return 0;
		}
		//i++;
	}
	return 1;
}

int main()
{
	char str[80], * p;
	cout << "������һ������С��80���ַ��������Ĵ���" << endl;
	cin.get(str, 80, '\n');
	p = str + strlen(str)-1;
	if (judge(str,p))
		cout << "yes" << endl;
	else 
		cout << "no" << endl;

	return 0;
}