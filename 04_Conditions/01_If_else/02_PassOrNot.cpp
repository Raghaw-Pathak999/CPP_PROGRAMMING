#include <iostream>
using namespace std;

int main()
{
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    if (marks >= 33)
    {
        cout << "PASS";
    }
    else
    {
        cout << "FAIL";
    }

    return 0;
}