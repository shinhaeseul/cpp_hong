#include <iostream>
#include <cmath>
#include <limits>

int main()
{
    using namespace std;

    short       s = 1; // 2 bytes = 2 * 8 bits = 16 bits, 
    int         i = 1;
    long        l = 1;
    long long   ll = 1;

    cout << sizeof(short) << endl; // 2
    cout << sizeof(int) << endl; // 4
    cout << sizeof(long) << endl; // 4
    cout << sizeof(long long) << endl; // 8

    cout << std::pow(2, sizeof(short) * 8 - 1) - 1 << endl; // 32767, 1: 부호 표현하는 비트, 1: 0을 표현하는 비트
    cout << std::numeric_limits<short>::max() << endl;
    cout << std::numeric_limits<short>::min() << endl; // -32768
    cout << std::numeric_limits<short>::lowest() << endl; // -32768, 정수형에선 min == lowest

    unsigned int ui = -1;

    cout << ui << endl; // 4294967295

    cout << 22 / 4 << endl; // 5, 정수형끼리의 계산은 정수형으로. 둘 중 하나만 float여도 됨.

    return 0;
}