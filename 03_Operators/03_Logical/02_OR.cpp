#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cin >> a;
    cin >> b;

    c = a > b && a < b;

    // 10 > 10 && 10 < 10
    // 0 && 0 = 0 { 1 && 0 = 1} { 0 && 1 = 1}

    cout << c;

    return 0;
}
