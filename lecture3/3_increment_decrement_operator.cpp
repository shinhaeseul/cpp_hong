// 증감 연산자

#include <iostream>

using namespace std;

int add (int a, int b)
{
    return a + b;
}

int main()
{
    int x = 5;
    int y = ++x;

    cout << y << endl; // x+1=6

    int a = 6, b = 6;
    cout << x << " " << y << endl; // 6 6
    cout << ++x << " " << --y << endl; // 7 5
    cout << x << " " << y << endl; // 7 5 
    cout << x++ << " " << y-- << endl; // 7 5
    cout << x << " " << y << endl; // 8 4

    int z = 1;
    int v = add(z, ++z); // do not use! 답은 3, 하지만 4가 나옴. 컴파일러에 따라 정의가 잘 안됨.

    cout << v << endl;

    /*
    주의

    int x = 1;
    // x = x++; <-undefined.
    ++x;

    */

    return 0;
}