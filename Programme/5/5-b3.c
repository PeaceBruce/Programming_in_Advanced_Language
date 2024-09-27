/* 2353814 ��С�� ��05 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int leap(int year)
{
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		return 1;
	else
		return 0;
}
int num_day(int month, int day, int order)
{
	int month_day[12] = { 31,0,31,30,31,30,31,31,30,31,30,31 };
	int d=0;
	if (month < 1 || month>12)
		return -1;
	else {
		if (order == 0)
			month_day[1] = 28;		
		else
			month_day[1] = 29;
		if (day<0 || day>month_day[month - 1])
				return 0;
		else {
			for (int i = 0; i < month - 1; i++)
				d = d + month_day[i];
			d = d + day;
			return d;
		   } 
		
	}
}
int main()
{
	int	year, month, day, d, ret1, ret2;
	printf("�������꣬�£���\n");
	scanf("%d %d %d", &year, &month, &day);
	ret1 = leap(year);
	ret2 = num_day(month,day,ret1);
	if (ret2 == -1)
		printf("�������-�·ݲ���ȷ\n");
	else if (ret2 == 0)
		printf("�������-�����µĹ�ϵ�Ƿ�\n");
	else
		printf("%d-%d-%d��%d��ĵ�%d��\n", year, month, day, year, ret2);

	return 0;
}
