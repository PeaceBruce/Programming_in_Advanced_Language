/* 2353814 ��С�� ��05 */
#include <iostream>
#include <iomanip>
using namespace std;

/* ----����Ҫ��----
   1���������������ͷ�ļ�
   2����������ȫ�ֱ�������̬�ֲ�����
   3�������������������
   4��main�����������룬����ѭ��
   --------------------------------------------------------------------- */

/***************************************************************************
  �������ƣ�
  ��    �ܣ���ӡn�㺺ŵ�����ƶ�˳��
  ���������int n������
            char src����ʼ��
            char tmp���м���
            char dst��Ŀ����
  �� �� ֵ��
  ˵    ����1�����������βΡ��������;���׼��
            2������������������κ���ʽ��ѭ��
***************************************************************************/
void hanoi(int n, char src, char tmp, char dst)
{
    if (n == 1)
        cout << setw(2) << n << "# " << src << "-->" << dst << endl;
    else {
        hanoi(n - 1, src, dst, tmp);
        cout << setw(2) << n << "# " << src << "-->" << dst << endl;
        hanoi(n - 1, tmp, src, dst);
    }
}

/***************************************************************************
  �������ƣ�
  ��    �ܣ�
  ���������
  �� �� ֵ��
  ˵    ����1��������롢���õݹ麯��
            2�������������ʱ������ʹ��ѭ��
            3��Ϊ��ͳһ��飬���������������������������ʼ/Ŀ�����Ĵ��벻Ҫ��ͳһ����������ֱ�ӷ���main�У�
***************************************************************************/
int main()
{
    int n;
    char src, tmp, dst;
    while (1) {
        cout << "�����뺺ŵ���Ĳ���(1-16)" << endl;
        cin >> n;
        if (cin.fail() || n > 16 || n < 1) {
            cin.clear();
            cin.ignore(2147483647, '\n');
            continue;
        }
        else {
            cin.clear();
            cin.ignore(2147483647, '\n');
            break;
        }
    }
    while (1) {
        cout << "��������ʼ��(A-C)" << endl;
        cin >> src;
        if (cin.fail() || src > 99 || src < 65 || src < 97 && src>67) {
            cin.clear();
            cin.ignore(2147483647, '\n');
            continue;
        }
        else {
            if (src > 96)
                src = src - 32;
            cin.clear();
            cin.ignore(2147483647, '\n');
            break;
        }
    }
    while (1) {
        cout << "������Ŀ����(A-C)" << endl;
        cin >> dst;
        if (cin.fail() || dst > 99 || dst < 65 || dst < 97 && dst>67) {
            cin.clear();
            cin.ignore(2147483647, '\n');
            continue;
        }
        else {
            if (dst > 96)
                dst = dst - 32;
            if (src == dst) {
                cout<< "Ŀ����(" << dst << ")��������ʼ��(" << src << ")��ͬ" << endl;
                cin.clear();
                cin.ignore(2147483647, '\n');
                continue;
            }
            cin.clear();
            cin.ignore(2147483647, '\n');
            break;
        }
    }
    if (src == 65 && dst == 66 || src == 66 && dst == 65)
        tmp = 67;
    else if (src == 65 && dst == 67 || src == 67 && dst == 65)
        tmp = 66;
    else if (src == 66 && dst == 67 || src == 67 && dst == 66)
        tmp = 65;
    cout << "�ƶ�����Ϊ:" << endl;
    hanoi(n, src, tmp, dst);

    return 0;
}
