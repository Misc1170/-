#include <iostream> 
#pragma warning(disable:4716)
using namespace std;
struct complexniechisla
{
    float real;
    float imag;
};
complexniechisla sumcomp(complexniechisla a, complexniechisla b)
{
    complexniechisla sum2;
    sum2.real = a.real + b.real;
    sum2.imag = a.imag + b.imag;
    cout << "\ncумма комплексных чисел " << sum2.real << " + " << sum2.imag << "i";
}
int sum(int a, int b)
{
    int sum1 = a + b;
    cout << "сумма целых чисел " << sum1;
}
int main()
{
    setlocale(LC_ALL, "RUS");
    int cel1, cel2;
    complexniechisla comp1, comp2;
    cout << "ведите целые числа" << "\n";
    cout << "первое число ";
    cin >> cel1;
    cout << "второе число ";
    cin >> cel2;
    cout << "введите сначала действительную, а затем мнимую часть комплексного числа " << "\n";
    cout << "действительная часть ";
    cin >> comp1.real;
    cout << "мнимая часть ";
    cin >> comp1.imag;
    cout << "введите сначала действительную, а затем мнимую часть комплексного числа " << "\n";
    cout << "действительная часть ";
    cin >> comp2.real;
    cout << "мнимая часть ";
    cin >> comp2.imag;
    sum(cel1, cel2);
    sumcomp(comp1, comp2);
    return 0;
}


