/* 2353814 马小龙 信05 */
#define _CRT_SECURE_NO_WARNINGS		//使用了VS认为unsafe的函数
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <ctime>
#include <conio.h>	//用getch，因此不需要支持Linux
#include <string.h>	//Dev/CB的strlen需要
using namespace std;

struct tj_time {
	int tj_year;	//表示年份
	int tj_month;	//表示月(1-12)
	int tj_day;	//表示日(1-28/29/30/31)
	int tj_hour;	//表示小时(0-23)
	int tj_minute;	//表示分(0-59)
	int tj_second;	//表示秒(0-59)
};

/* 可以在此定义其它需要的函数 */
int leap(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		return 1;
	else
	    return 0;
}



/***************************************************************************
  函数名称：
  功    能：给出提示并等待回车键
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
void wait_for_enter(const char *const prompt = NULL)
{
	if ((prompt == NULL) || (strlen(prompt) == 0)) //思考一下，||的左右两个条件能否互换
		cout << endl << "按回车键继续";
	else
		cout << endl << prompt << "，按回车键继续";

	while (_getch() != '\r')
		;
	cout << endl << endl;
}

/***************************************************************************
  函数名称：
  功    能：调用系统的转换函数将整型秒值转换为与本题相似的结构体并输出
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
void system_time_output(const time_t input_time)  //time_t的本质是64位无符号整数
{
    struct tm *tt;	//struct tm 为系统定义的结构体

    tt = localtime(&input_time);	//localtime为系统函数

    /* tm_*** 为struct tm中的成员，和本题的struct tj_time具体的内容不完全符合，具体含义自己查找相关资料 */
    cout << setfill('0') << setw(4) << tt->tm_year+1900 << '-' 
						<< setw(2) << tt->tm_mon + 1 << '-' 
						<< setw(2) << tt->tm_mday << ' ' 
						<< setw(2) << tt->tm_hour << ':' 
						<< setw(2) << tt->tm_min << ':' 
						<< setw(2) << tt->tm_sec << endl;

    return;
}

/***************************************************************************
  函数名称：
  功    能：自定义转换结果输出函数
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
void tj_time_output(const struct tj_time *const tp)
{
    /* 实现自定义结构的输出，输出形式与system_time_output相同 */
    cout << setfill('0') << setw(4) << tp->tj_year << '-' 
						<< setw(2) << tp->tj_month << '-' 
						<< setw(2) << tp->tj_day << ' '
						<< setw(2) << tp->tj_hour << ':' 
						<< setw(2) << tp->tj_minute << ':'
						<< setw(2) << tp->tj_second << endl;
}

/***************************************************************************
  函数名称：
  功    能：自定义转换函数
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
struct tj_time *tj_time_convert(int input_time)
{
    static struct tj_time result;	//定义静态局部变量，不准动

    /* 实现过程开始，在下面添加相应的定义及执行语句即可 */
	int year_s[2] = { 31536000,31622400 }, common_year_s = 31536000, leap_month_s = 2505600, common_month_s = 2419200, day_s = 86400, hour_s = 3600, minute_s = 60;
	int month_s[12] = { 2678400,0,2678400,2592000,2678400,2592000,2678400,2678400,2592000,2678400,2592000,2678400 };
	int initial = 28800;
	result = {1970,1,1,0,0,0};
	input_time += initial;
	for (; input_time >= year_s[leap(result.tj_year)]; result.tj_year++)
		input_time -= year_s[leap(result.tj_year)];
	if (leap(result.tj_year))
		month_s[1] = leap_month_s;
	else
		month_s[1] = common_month_s;
	for (int i = 0; input_time >= month_s[i]; i++, result.tj_month++)
		input_time -= month_s[i];
	for (; input_time >= day_s; result.tj_day++)
		input_time -= day_s;
	for (; input_time >= hour_s; result.tj_hour++)
		input_time -= hour_s;
	for (; input_time >= minute_s; result.tj_minute++)
		input_time -= minute_s;
	result.tj_second = input_time;
    /* 实现过程结束 */

    return &result;	//注意，返回的是静态局部变量的地址，本语句不准动
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int main()
{
	int read_time;
	struct tj_time *tp;

	for (;;) {
		cin >> read_time; //因为采用输入重定向，此处不加任何提示

		/* 输入错误或<0则退出循环 */
		if (cin.good() == 0 || read_time < 0)
			break;

		cout << "秒数             : " << read_time << endl;
		cout << "系统转换的结果   : ";
		system_time_output(read_time);
	
		cout << "自定义转换的结果 : ";
		tp = tj_time_convert(read_time);
		tj_time_output(tp);

		wait_for_enter();
		}

	if (1) {
		struct tj_time *tp;
		int t=(int)time(0);		//系统函数，取当前系统时间（从1970-01-01 00:00:00开始的秒数）

		cout << "当前系统时间     : " << t << endl;
		cout << "系统转换的结果   : ";
		system_time_output(t);
	
		cout << "自定义转换的结果 : ";
		tp = tj_time_convert(t);
		tj_time_output(tp);

		wait_for_enter();
		}

	return 0;
}
