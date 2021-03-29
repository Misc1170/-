#include <iostream>
using namespace std;

int main()
{
    double a, b, c, d, f;
    a = 1000;
    b = 0.0001;
    c = (a + b) * (a + b) - (a * a + 2 * a * b);
    d = b * b;
    f = c / d;
    cout << f;



}