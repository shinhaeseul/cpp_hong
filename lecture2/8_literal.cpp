#include <iostream>

int main()
{
    using namespace std;

    float pi = 3.14f; // 3.14 -> literal, double -> l(=long double)
    int i = 12324u; // u,U -> unsigned, ul, uL, LU(Long unsigned), LL(long long), U와 L정도는 자주 쓰임
    int j = (unsigned int)12324;

    unsigned int n = 5u;
    long n2 = 5L;
    double d = 6.0e-10;

    // Decimal(10진수)   : 0 1 2 3 4 5 6 7 8  9  10 11 12 13 14 15 16
    // Octal(8진수)      : 0 1 2 3 4 5 6 7 10 11 12 13
    // Hexa(16진수)      : 0 1 2 3 4 5 6 7 8  9  A  B  C  D  E  F  10
    // binary(2진수)

    int x = 012; // 앞에 0 -> 8진수라는 의미
    cout << x << endl; // 10진수로 10을 의미

    int y = 0xF; //16진수는 0x
    cout << y << endl; //15

    int z = 0b1010; //2진수 0b
    cout << z << endl; // 10

    int a = 0b1010'1111'1110; // 2진수(10진수에도 사용가능)가 너무 길어지면 따옴표로 표시해도 컴파일러가 무시함 c14부터?

    //16진수는 많이 쓰임
    // 0011 1010 1111 1111
    // = 3AFF(16진수)

    const int price_per_items = 10; // symbolic num
    int num_items = 123;
    int price = num_items * price_per_items;

    return 0;
}