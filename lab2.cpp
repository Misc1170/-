#include<iostream>
using namespace std;
int main() {
	int begin = 0;
	int end = 200;
	int sum = 0;
	for (sum = 0; begin < end; begin++)
	{
		if (begin % 3 != 0)
		{
			continue;
		}
		sum += begin;
	}
	cout << "summa\t" << sum << endl;
}