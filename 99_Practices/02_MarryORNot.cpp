#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter Your Age: ";
    cin >> age;

    if (age >= 21)
    {
        cout << "OK TO MARRY";
    }
    else
    {
        cout << "NOT TO MARRY";
    }

    return 0;
}
