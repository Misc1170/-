#include <iostream>
#include <stdio.h>
#include<ctime>
using namespace std;
int main(){
    setlocale(LC_ALL, "RUS");
    srand(time(NULL));
    int i, k, j;
    const int n = 15;
    const int b = 200;
    int a[n];
    int a1[b];
    int n1 = n;
    for (i = 1; i < n; i++)
    {
        a[i] = rand() % 100;
        cout << a[i] << " ";
    }
    cout << "\nВведите номер элемента для удаления ";
    cin >> k;
    for (i = 1; i < n; i++)
    {
        if (i==k)
        {
            continue;
        }
        cout << a[i] << " ";
    }
    cout << "\nМассив после добавления 0 " << endl;
    for ( i = 1; i < n; i++)
    {
        if (i==k)
        {
            continue;
        }
        a1[i] = a[i];
        if (a1[i]%2==0)
        {
            a1[i] = 0;
            a[i];
            cout << a[i] << " ";            
        }
        if (a[i]!=0)
        {
            cout << a1[i] << " ";
        }             
    }   
    return 0;
}