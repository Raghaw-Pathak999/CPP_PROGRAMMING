#include <iostream>
using namespace std;

void printONE()
{
    cout << "Hello world ONE" << endl;
}
void printTWO()
{
    printONE();
    cout << "Hello world TWO" << endl;
}
void printThree()
{
    printTWO();
    cout << "Hello world THREE" << endl;
}

int main()
{
    printThree();
    return 0;
}
