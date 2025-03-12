#include <iostream>
using namespace std;

int add(int a, int b)
{
    cout << a + b << endl;
}

double add(double a, double b)
{
    cout << a + b << endl;
}

int main()
{

    add(10, 20);
    add(10.55, 12.14);

    return 0;
}
