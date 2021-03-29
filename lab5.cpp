#include <algorithm>
#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;
void zamena(string& str, string naiti, string pomenyat)
{
    size_t pos = str.find(naiti);
    while (pos != string::npos)
    {
        str.replace(pos, naiti.size(), pomenyat);
        pos = str.find(naiti, pos + pomenyat.size());
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int i;
    string* s;
    int n;
    cout << "введите количество строк ";
    cin >> n;
    s = new string[n];
    for (i = 0; i < n; i++)
    {
        int k;
        cout << "введите строку ";
        cin >> s[i];
        k = size(s[i]);
        s[i].resize(k - 1);
        zamena(s[i], "0", ",");
    }
    for (i = 0; i < n; i++)
    {
        cout << "(" << s[i].c_str() << ")";
    }
    delete[] s;
}


