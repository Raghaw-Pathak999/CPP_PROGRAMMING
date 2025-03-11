#include <iostream>
using namespace std;

int main()
{

    int n, i = 1, s = 0;

    cout << "enter Your Number : ";
    cin >> n;

    while (i <= n)
    {
        s += i;
        i++;
    }
    cout << s << endl;

    return 0;
}
