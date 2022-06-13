#include <cstdlib>
#include <iostream>
#include <math.h>
#include "ModulesGritsay.h"

using namespace std;

int main()
{
    system("chcp 1251 & cls");
    float x[5] = { 1, 2, 3, 4, 5 };
    float y[5] = { 1, 2, 3, 4, 5 };
    float z[5] = { 1, 2, 3, 4, 5 };
    float S ;

    double expectedResult[5] = { 0.0766406, 1.71608, 25.5562, 254.538, 3121.85 };
    double doneResult = 0;
    double NAC = 0.002;
    bool TestResult;

    for (int i = 0; i < 5; i++) {
        doneResult = s_calculation(x[i], y[i], z[i],S);
        if (abs(expectedResult[i]) >= abs(doneResult))
            { TestResult = abs(expectedResult[i]) - abs(doneResult) <= NAC; }
        else
            { TestResult = abs(doneResult) - abs(expectedResult[i]) <= NAC; }

        cout << "Тестові значення №" << i + 1 << " : "
             << "  X = " << x[i]
             << "  Y = " << y[i]
             << "  Z = " << z[i]
             << endl;
        cout << "Очікуваний результат: " << expectedResult[i] << endl;
        cout << "Отриманий результат : " << doneResult << endl;
        cout << boolalpha << "Тестовий результат  : " << TestResult << endl << endl;
    }
    system("pause");
    return 0;
}
