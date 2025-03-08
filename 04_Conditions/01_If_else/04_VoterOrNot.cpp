#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your AGE: ";
    cin >> age;

    if (age >= 18 && age <= 100)
    //    1      &&       0
    //             0
    {
        cout << "YOUR HOLDER FOR VOTE";
    }
    else
    {
        cout << "YOUR NOT HOLDER FOR VOTE";
    }

    return 0;
}