#include <iostream>
using namespace std;

int main()
{
    int a;

    cout << "Enter THR VALUE: " << endl;
    cin >> a;

    if (a > 0)
    {
        cout << "POSITIVE";
    }
    else if (a == 0)
    {
        cout << "ITS NOT POSTIVE EVEN NEGTIVE";
    }
    else
    {
        cout << "NEGATIVE";
    }

    return 0;
}
