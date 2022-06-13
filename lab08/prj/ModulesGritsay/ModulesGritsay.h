#ifndef MODULESGRITSAY_H_INCLUDED
#define MODULESGRITSAY_H_INCLUDED
#include <cmath>

using namespace std;

const float PI = 3.141592653589793;

float s_calculation(float x, float y, float z, float S)
{
    S = abs(sin(abs(y-(z*z)))+sqrt(x)-sqrt((pow(y*z,x)+y/(2*PI))));
    return S;
}


#endif // MODULESGRITSAY_H_INCLUDED
