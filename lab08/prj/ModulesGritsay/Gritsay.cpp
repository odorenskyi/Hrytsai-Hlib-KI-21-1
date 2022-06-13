#include <iostream>
#include <cmath>
#include "ModulesGritsay.h"

using namespace std;

const float PI = 3.141592653589793;

float s_calculation(float x, float y, float z)
{
    return abs(sin(abs(y-(z*z)))+sqrt(x)-sqrt((pow(y*z,x)+y/(2*PI))));
}
