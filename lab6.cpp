#include<iostream>
#include<string>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int i;
    string s, s1;
    cout << "введите строку  ";
    cin >> s;
    i = s.length();
    for (i = i-1; i >= 0; i--)
    {
        s1 = s1 + s[i];
    }
    if (s == s1)
    {
        cout << "палиндром ";
    }
    else
    {
        cout << "не палиндром ";
    }
    return 0;
}
