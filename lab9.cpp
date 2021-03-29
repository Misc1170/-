#include <stdio.h>
#include <conio.h>
#include <string>
#include <stdlib.h>
#include <iostream>


#pragma warning(disable : 4996)

using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    FILE* F1;
    FILE* F2;
    int i;
    char str[255];
    errno_t err;
    err = fopen_s(&F1, "f1.txt", "r");
    err = fopen_s(&F2, "f2.txt", "w");
    for (int i = 1; i <= 10 && fgets(str, 255, F1) != NULL; i++)
    {
        if (i % 2 == 0)
            fputs(str, F2);
    }
    fclose(F1);
    fclose(F2);
    F1 = fopen("f1.txt", "r");
    F2 = fopen("f2.txt", "r");
    fseek(F1, 0, SEEK_END);
    fseek(F2, 0, SEEK_END);
    unsigned long r1 = (unsigned long)ftell(F1);
    unsigned long r2 = (unsigned long)ftell(F2);
    cout << "размер файла 1 " << r1 << "\n";
    cout << "размер файла 2 " << r2;
}
