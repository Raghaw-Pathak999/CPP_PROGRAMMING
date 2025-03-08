#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    int max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    cout << "The largest number is: " << max;

    return 0;
}
