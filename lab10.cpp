#include<iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    int n, n1, n2, i, j;
    cout << "введите количество элементов массива ";
    cin >> n;
    int* mas = new int[n];
    for (int i = 1; i <= n; i++)
    {
        mas[i] = rand() % 50;
        cout << mas[i] << " ";
    }
    cout << "\nвведите номер элемента, который нужно удалить - ";
    cin >> n1;
    cout << "удаление ";
    for (i = 0; i < n; i++)
    {
        if (n1 == i) for (j = i; j < n; j++) mas[j] = mas[j + 1];
    }
    for (i = 1; i < n; i++)
    {
        cout << mas[i] << " ";
    }
    cout << "\nвведите номер элемента, который нужно добавить в конец - ";
    cin >> n2;
    cout << "добавление ";
    for (i = 1; i < n; i++)
    {
        cout << mas[i] << " ";
    }
    cout << mas[n2];
    return 0;
}
