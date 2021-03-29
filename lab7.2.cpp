#include <iostream>
using namespace std;
int sum(int k, ...)
{
    int* p = &k;
    int s = 0;
    for (; k != 0; k--)
        s += *(++p);
    return s;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "сумма из 3 параметров " << sum(3, 1, 2, 3) << " " << endl;
    cout << "сумма из 7 параметров " << sum(7, 1, 2, 3, 4, 5, 6, 7) << " " << endl;
    cout << "сумма из 11 параметров " << sum(11, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11) << " " << endl;
    return 0;
}

