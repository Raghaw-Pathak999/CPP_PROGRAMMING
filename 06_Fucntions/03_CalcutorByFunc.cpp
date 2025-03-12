#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}

int multi(int a, int b)
{
    return a * b;
}
int divd(int a, int b)
{
    return a / b;
}

int main()
{
    int a, b;
    cin >> a >> b;

    cout << add(a, b);
    cout << sub(a, b);
    cout << multi(a, b);
    cout << divd(a, b);

    return 0;
}