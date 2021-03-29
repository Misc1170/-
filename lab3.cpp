#include <iostream>
#include <math.h>
#include <conio.h>

long double fact(int n)
{
    if (n < 0)
        return 0;
    if (n == 0)
        return 1;
    else
        return n * fact(n - 1);
}
using namespace std;
int main()
{
    double x = 0.1, y = 0, s = 0, se = 0, sn = 1, ss = 0, e = 0.0001, ln = 0, lne = 0;
    int n = 1;
    while (x <= 1)
    {
        cout << "x" << x << "  ";
        while (n <= 10)
        {
            ln = pow(log(3), n);
            s = (ln / fact(n)) * pow(x, n);
            sn = sn + s;
            n = n++;
            lne = pow(log(3), e);
            ss = (ln / fact(e)) * pow(x, e);
            se = se + ss;
        }
        y = pow(3, x);
        cout << "sn = " << sn << "  ";
        cout << "se = " << se << "  ";
        cout << "y = " << y << "\n ";
        n = 1;
        y = 0;
        x = x + 0.1;
    }
    return 0;
}


