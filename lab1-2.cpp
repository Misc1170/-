#include <iostream>

using namespace std;

int main() {
    int n, m;
    n = 5;
    m = 5;

    cout << (n++ + m) << endl;
    cout << (m-- > n) << endl;
    cout << (n-- > m) << endl;   
}
