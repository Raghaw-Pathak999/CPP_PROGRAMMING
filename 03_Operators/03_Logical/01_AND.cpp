#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    c = 10 > 10 && 40 <= 40;

    // 10 > 10 && 10 < 10
    // 0 && 0 = 0 { 1 && 0 = 1} { 0 && 1 = 1}

    cout << c;

    return 0;
}

// &&  AND
// A B A&&B
// T F C
// 0 0 0
// 0 1 0
// 1 0 0
// 1 1 1

// ||  OR

// A B A||B
// T F C
// 0 1 1
// 0 0 0
// 1 1 1
// 1 0 1
