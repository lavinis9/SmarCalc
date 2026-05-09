#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <vector>
#include <cctype>
using namespace std;
/*         */
/*         */
double cos_num(double x)
{
    return cos(x);
}
/*         */
/*         */
double sin_num(double x)
{
    return sin(x);
}
/*         */
/*         */
double tan_num(double x)
{
    return tan(x);
}
/*         */
/*         */
double sum_num(double &x, double &y)
{
    return x + y;
}
/*         */
/*         */
double sub_num(double &x, double &y)
{
    return x - y;
}
/*         */
/*         */
double gin_num(double &x, double &y)
{
    return x * y;
}
/*         */
/*         */
double div_num(double &x, double &y)
{
    return x / y;
}
/*         */
/*         */
double dyn_num(double &x, double &y)
{
    return pow(x, y);
}
/*         */
/*         */
double log_num(double &x)
{
    return log10(x);
}
/*         */
/*         */
double sqrt_num(double &x)
{
    return sqrt(x);
}
/*         */
/*         */
double cot_num(double x)
{
    return 1 / tan_num(x);
}
int main()
{
    vector<string> v1;
    string tokens;
    cout << "Dwse ekfrash " << endl;
    cin >> tokens;
    while (tokens != "=")
    {
        v1.push_back(tokens);
        cin >> tokens;
        if (tokens == "C")
        {
            break;
        }
    }
    /*         */
    /*         */
    vector<double> numbers;
    vector<string> op;
    for (int i = 0; i < v1.size(); i++)
    {
        if (isalpha(v1[i][0]))
        {
            double *temp = new double;
            *temp = stod(v1[i + 1]);
            double result;
            if (v1[i] == "sin")
            {
                result = sin_num(*temp * M_PI / 180.0);
            }
            else if (v1[i] == "cos")
            {
                result = cos_num(*temp * M_PI / 180.0);
            }
            else if (v1[i] == "tan")
            {
                result = tan_num(*temp * M_PI / 180.0);
            }
            else if (v1[i] == "cot")
            {
                result = cot_num(*temp * M_PI / 180.0);
            }
            else if (v1[i] == "log")
            {
                result = log_num(*temp);
            }
            else
            {
                result = sqrt_num(*temp);
            }
            /*         */
            /*         */
            numbers.push_back(result);
            delete temp;
            i++;
        }
        else if (isdigit(v1[i][0]) || (v1[i].size() > 1 && isdigit(v1[i][1])))
        {
            double *val = new double;
            *val = stod(v1[i]);
            numbers.push_back(*val);
            delete val;
        }
        else
        {
            op.push_back(v1[i]);
        }
    }
    /*            */
    /*            */
    /*            */
    for (int k = 0; k < op.size(); k++)
    {
        if (op[k] == "^")
        {
            numbers[k] = dyn_num(numbers[k], numbers[k + 1]);
            numbers.erase(numbers.begin() + k + 1);
            op.erase(op.begin() + k);
            k--;
        }
    }
    /*           */
    /*           */
    /*           */
    for (int k = 0; k < op.size(); k++)
    {
        if (op[k] == "*")
        {
            numbers[k] = gin_num(numbers[k], numbers[k + 1]);
            numbers.erase(numbers.begin() + k + 1);
            op.erase(op.begin() + k);
            k--;
        }
        else if (op[k] == "/")
        {
            if (numbers[k + 1] != 0)
            {
                numbers[k] = div_num(numbers[k], numbers[k + 1]);
                numbers.erase(numbers.begin() + k + 1);
                op.erase(op.begin() + k);
                k--;
            }
        }
    }
    /*           */
    /*           */
    /*           */
    for (int k = 0; k < op.size(); k++)
    {
        if (op[k] == "+")
        {
            numbers[k] = sum_num(numbers[k], numbers[k + 1]);
            numbers.erase(numbers.begin() + k + 1);
            op.erase(op.begin() + k);
            k--;
        }
        else if (op[k] == "-")
        {
            numbers[k] = sub_num(numbers[k], numbers[k + 1]);
            numbers.erase(numbers.begin() + k + 1);
            op.erase(op.begin() + k);
            k--;
        }
    }
    /*           */
    /*           */
    /*           */
    if (!numbers.empty())
    {
        cout << "---------------------------" << endl;
        cout << "Teliko apotelesma: " << numbers[0] << endl;
    }
    return 0;
}
