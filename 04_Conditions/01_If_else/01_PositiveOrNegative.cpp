#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "ENTER YOUR NUMBER: ";
    cin >> a;

    if (a > 0)
    {
        cout << "YOUR NUMBER IS POSITIVE: " << a;
    }
    else
    {
        cout << "Your NUM IS NEGATIVE: " << a;
    }

    return 0;
}