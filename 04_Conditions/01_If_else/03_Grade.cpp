#include <iostream>
using namespace std;

int main()
{
    int m;
    cout << "Enter your marks: ";
    cin >> m;

    if (m > 85)
    {
        cout << "Garde A";
    }
    else
    {
        if (m > 65)
        {
            cout << "Garde B";
        }
        else
        {
            if (m > 45)
            {
                cout << "Garde C";
            }
            else
            {
                cout << "FAIL";
            }
        }
    }

    return 0;
}