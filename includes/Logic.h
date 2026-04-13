#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <vector>
#include <cctype>
inline double cos_num(double x)
{
    return cos(x);
}
/*         */
/*         */
inline double sin_num(double x)
{
    return sin(x);
}
/*         */
/*         */
inline double tan_num(double x)
{
    return tan(x);
}
/*         */
/*         */
inline double sum_num(double& x, double& y)
{
    return x + y;
}
/*         */
/*         */
inline double sub_num(double& x, double& y)
{
    return x - y;
}
/*         */
/*         */
inline double gin_num(double& x, double& y)
{
    return x * y;
}
/*         */
/*         */
inline double div_num(double& x, double& y)
{
    return x / y;
}
/*         */
/*         */
inline double dyn_num(double& x, double& y)
{
    return pow(x, y);
}
/*         */
/*         */
inline double log_num(double& x)
{
    return log10(x);
}
/*         */
/*         */
inline double sqrt_num(double& x)
{
    return sqrt(x);
}
/*         */
/*         */
inline double cot_num(double x)
{
    return 1 / tan_num(x);
}
#pragma once