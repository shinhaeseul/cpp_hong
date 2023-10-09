// 비트단위 연산자(Bitwise Operators)

#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    // << left shift
    // >> right shift
    // ~ bitwise NOT, & bitwise AND, | bitwise OR, ^ bitwise ANDOR

    unsigned int aa = 1;
    cout << std::bitset<4>(aa) << endl; // <4> : 4비트, 0001

    // left shift
    
    unsigned int a = 3;
    cout << std::bitset<4>(a) << endl; // 0011

    unsigned int b = a << 1;
    cout << std::bitset<4>(b) << " " << b << endl; // 0110 6 (a*2)

    b <<= 1; // b = a << 2;
    cout << std::bitset<4>(b) << " " << b << endl; // 1100 12 (a*4)

    b <<= 1; // b = a << 3;
    cout << std::bitset<8>(b) << " " << b << endl; // 0001 1000 24 (a*8)

    b <<= 1; // b = a << 4;
    cout << std::bitset<8>(b) << " " << b << endl; // 0011 0000 48 (a*16)

    // right shift

    unsigned int c = 1024;
    cout << std::bitset<16>(c) << endl; // 0000010000000000

    unsigned int d = c >> 1;
    cout << std::bitset<16>(d) << " " << d << endl; // 0000 0010 0000 0000 512 (c/2)

    d >>= 1; // d = c >> 2;
    cout << std::bitset<16>(d) << " " << d << endl; // 0000 0001 0000 0000 256 (c/4)

    d >>= 1; // d = c >> 3;
    cout << std::bitset<16>(d) << " " << d << endl; // 0000 0000 1000 0000 128 (c/8)

    d >>= 1; // d = c >> 4;
    cout << std::bitset<16>(d) << " " << d << endl; // 0000 0000 0100 0000 64 (c/16)

    // bitwise NOT (~)
    cout << std::bitset<16>(~c) << " " << (~c) << endl; // 10111101111111111

    // AND, OR, XOR

    unsigned int x = 0b1100;
    unsigned int y = 0b0110;

    cout << x << " " << y << endl; // 12 6

    cout << std::bitset<4>(x & y) << endl; // bitwise AND 0100
    cout << std::bitset<4>(x | y) << endl; // bitwise OR  1110
    cout << std::bitset<4>(x ^ y) << endl; // bitwise XOR 1010

    unsigned int xx = 0b0110;
    xx >>= 2;
    cout << std::bitset<4>(xx) << endl;

    return 0;
}