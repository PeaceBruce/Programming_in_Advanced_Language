/*2353814 ��05 ��С��*/
#include <iostream>
#include <iomanip>
#include <cmath>      
using namespace std;

int main()
{
	int x ;
    double a = 0, t = 1, m = 1, b = 1, n = 1;
    while (1) {
        cout << "������x��ֵ[-10 ~ +65]" << endl;
        cin >> x;
        if (x < -10 || x > 65) {
            cout << "����Ƿ�������������" << endl;
            continue;
        }
        break;
    }
    while (fabs(t) > 1e-6) {
        a = a + t;
        t = t * (x / n);
        n++;
    }
    cout << "e^" << x << "="<< setprecision(10) << a << endl;

    return 0;
}