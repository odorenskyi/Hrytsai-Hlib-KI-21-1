#include <iostream>
#include <locale.h>
#include <iomanip>
#include <conio.h>
#include <cstring>

#include "ModulesGritsay.h"
using namespace std;

float x = 0, y = 0, z = 0 , S = 0;
float a = '0', b = '0';

string Copyright()
{
    cout << "\n ------------------------------------------------------------\n"
         <<"| Gritsay Glib, CUNTU |"
         <<"| ������ ���, ����  |"
         << "\n -----------------� ALL Rights Reserded ---------------------\n\n";
}

void inputValues(int X, int Y, int Z, float A, float B)
{
     cout << "������ �������� x: " << endl;
        cin >> X; x = X;
    cout << "������ �������� y: " << endl;
        cin >> Y; y = Y;
    cout << "������ �������� z: " << endl;
        cin >> Z; z = Z;
    cout << "������ ������ a: " << endl;
        cin >> A; a = A;
    cout << "������ ������ b: " << endl;
        cin >> B; b = B;
}

bool Compare(float A, float B)
{
  return A + 7 == B ;
}

void DecAndHex(int X, int Y, int Z)
{
    cout << "'x' � ���������: " << dec << X << endl
         << "'y' � ���������: " << dec << Y << endl
         << "'z' � ���������: " << dec << Z << endl << endl;

    cout << "'x' � �������������: " << hex << X << endl
         << "'y' � �������������: " << hex << Y << endl
         << "'z' � �������������: " << hex << Z << endl;
}

int main()
{
    cout<< Copyright;
    char *locale = setlocale(LC_ALL, "ukr");
    system("chcp 1251 & cls");
    cout << Copyright() << endl << endl;
    inputValues(x, y, z, a, b);
    cout << boolalpha
         << "���������: " << a << " + 7 =  " << b << " : " << Compare(a, b) << endl << endl;
    DecAndHex(x, y, z);
    cout << endl << "��������� ������: " << s_calculation(x, y, z, S);
    _getch(); return 0;
}
