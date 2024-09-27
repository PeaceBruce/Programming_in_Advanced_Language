/*2353814 ��С�� ��05*/
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <conio.h>
#include <windows.h>
#include "5-b7.h"
using namespace std;

int topA = 0, topB = 0, topC = 0;
int A[10] = { 0 }, B[10] = { 0 }, C[10] = { 0 };
int num = 1;
static int velocity, inner;

void speed()
{
    if (velocity == 0) {

        while (_getch() != 13)
            ;
    }
    else if (velocity == 1)
        Sleep(1000);
    else if (velocity == 2)
        Sleep(500);
    else if (velocity == 3)
        Sleep(200);
    else if (velocity == 4)
        Sleep(100);
    else if (velocity == 5)
        Sleep(10);
}
void step(int src,int dst)
{
    int pan;
    if (src == 65) {
        pan = A[topA - 1];
        A[topA - 1] = 0;
        topA = topA - 1;
    }
    else if (src == 66) {
        pan = B[topB - 1];
        B[topB - 1] = 0;
        topB = topB - 1;
    }
    else {
        pan = C[topC - 1];
        C[topC - 1] = 0;
        topC = topC - 1;
    }
    if (dst == 65) {
        A[topA] = pan;
        topA++;
    }
    else if (dst == 66) {
        B[topB] = pan;
        topB++;
    }
    else {
        C[topC] = pan;
        topC++;
    }
}

void landscape()
{
    int i;
    cout << " A:";
    for (i = 0; i < 10; i++) {
        if (A[i] != 0)
            cout << setw(2) << A[i];
        else
            cout << "  ";
    }
    cout << " B:";
    for (i = 0; i < 10; i++) {
        if (B[i] != 0)
            cout << setw(2) << B[i];
        else
            cout << "  ";
    }
    cout << " C:";
    for (i = 0; i < 10; i++) {
        if (C[i] != 0)
            cout << setw(2) << C[i];
        else
            cout << "  ";
    }
}

void portrait()
{
    cct_gotoxy(9, 20);
    cout << "=========================";
    cct_gotoxy(9, 21);
    cout << "  A         B         C  ";
    int i;
    for (i = 0; i < 10; i++) {
        cct_gotoxy(10, 19-i);
        if (A[i] != 0)
            cout << setw(2) << A[i];
        else
            cout << "  ";
    }
    for (i = 0; i < 10; i++) {
        cct_gotoxy(20, 19 - i);
        if (B[i] != 0)
            cout << setw(2) << B[i];
        else
            cout << "  ";
    }
    for (i = 0; i < 10; i++) {
        cct_gotoxy(30, 19 - i);
        if (C[i] != 0)
            cout << setw(2) << C[i];
        else
            cout << "  ";
    }
}

void hanoi(int n, char src, char tmp, char dst)
{
    if (n == 1) {
        speed();
        cct_gotoxy(20, 25);
        cout << "��" << setw(4) << num << " ��(" << setw(2) << n << "): " << src << "-->" << dst;;
        num++;
        step(src, dst);
        if (inner == 1) {
            landscape();
            if (velocity == 0)
                speed();
        }
        portrait();
        if (dst==65)
            cct_gotoxy(12, 20 - topA);
        else if (dst == 66)
            cct_gotoxy(22, 20 - topB);
        else if (dst == 67)
            cct_gotoxy(32, 20 - topC);
    }
    else {
        hanoi(n - 1, src, dst, tmp);
        speed();
        cct_gotoxy(20, 25);
        cout << "��" << setw(4) << num << " ��(" << setw(2) << n << "): " << src << "-->" << dst;
        num++;
        step(src, dst);
        if (inner == 1) {
            landscape();
            if (velocity == 0)
                speed();
        }
        portrait();
        if (dst == 65)
            cct_gotoxy(12, 20 - topA);
        else if (dst == 66)
            cct_gotoxy(22, 20 - topB);
        else if (dst == 67)
            cct_gotoxy(32, 20 - topC);
        hanoi(n - 1, tmp, src, dst);
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
    int n;
    char src, tmp, dst, i;
    while (1) {
        cout << "�����뺺ŵ���Ĳ���(1-10)" << endl;
        cin >> n;
        if (cin.fail() || n > 10 || n < 1) {
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
                cout << "Ŀ����(" << dst << ")��������ʼ��(" << src << ")��ͬ" << endl;
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
    for (i = 0; i < n; i++) {
        if (src == 65)
            A[i] = n - i;
        else if (src == 66)
            B[i] = n - i;
        else
            C[i] = n - i;
    }
    if (src == 65)
        topA = i;
    else if (src == 66)
        topB = i;
    else
        topC = i;
    while (1) {
        cout << "�������ƶ��ٶ�(0-5: 0-���س�������ʾ 1-��ʱ� 5-��ʱ���)" << endl;
        cin >> velocity;
        if (cin.fail() || velocity > 5 || velocity < 0) {
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
        cout << "�������Ƿ���ʾ�ڲ�����ֵ(0-����ʾ 1-��ʾ)" << endl;
        cin >> inner;
        if (cin.fail() || inner > 1 || inner < 0) {
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
    cct_cls();
    if (inner == 1)
        cout << "�� " << src << " �ƶ��� " << dst << "���� " << n << " �㣬��ʱ����Ϊ" << velocity << "����ʾ�ڲ�����ֵ" << endl;
    else
        cout << "�� " << src << " �ƶ��� " << dst << "���� " << n << " �㣬��ʱ����Ϊ" << velocity << "������ʾ�ڲ�����ֵ" << endl;
    if (inner == 1) {
        cct_gotoxy(20, 25);
        cout << "��ʼ:" << setw(15) << " ";
        landscape();
        if (velocity == 0)
            speed();
    }
    portrait();
    if (src == 65)
        cct_gotoxy(12, 20 - topA);
    else if (src == 66)
        cct_gotoxy(22, 20 - topB);
    else if (src == 67)
        cct_gotoxy(32, 20 - topC);
    hanoi(n, src, tmp, dst);
    cct_gotoxy(20, 35);
	system("pause"); //���������ʾ��ͣ��ע�⣺ֻ�ʺ����ض��������ر������ĳ���Ӵ˾���÷�Ϊ0��

	return 0;
}
