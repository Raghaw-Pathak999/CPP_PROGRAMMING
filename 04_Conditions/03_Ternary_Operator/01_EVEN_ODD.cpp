#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    // condition ? expression1 : expression2;
    // ( condition ) ? ture : false;
    (num % 2 == 0) ? cout << "Even" : cout << "Odd";

    return 0;
}

// 10 % 2 == 1;