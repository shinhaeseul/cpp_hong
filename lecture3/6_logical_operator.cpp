// 논리 연산자

#include <iostream>

using namespace std;

int main()
{
    // logical AND
    bool x = true;
    bool y = false;

    cout << (x && y) << endl; // &: Bitwise AND

    bool hit = true;
    int health = 10;

    if (hit == true && health < 20)
    {
        cout << "die" << endl;
    }
    else
        health -= 20;

    // logical OR

    cout << (x || y) << endl;

    /*
    틀린 사례

    int x1 = 5;
    int y1 = 7;

    if (!x1 == y1) // (!x) == y 로 계산이 되어 x는 강제형변환 false로 변경됨. !(x1==y1) OR (x1 != y1)
    {
        cout << "x does not equal y" << endl;
    }
    else
        cout << "x equals y" << endl;
    */
    
    int v = 1;

    if (v == 0 || v == 1)
        cout << "v is 0 or 1" << endl;

    // short circuit evaluation

    int x1 = 1;
    int y1 = 2;

    if (x1 == 2 && y1++ == 2) // x1 == 2 -> false이므로 y1++ 실행X
    {
        //do something
    }

    cout << y1 << endl; // 2

    // bool x = true;
    // bool y = false;

    // De Morgan's Law
    !(x || y); // == !x && !y

    // XOR(C++엔 없음)
    // false false => false
    // false true => true
    // true false => true
    // true true => false

    if (x != y)
    {
        //do something
    }

    // logical AND 우선순위 > logical OR
    bool v1 = true;
    bool v2 = false;
    bool v3 = false;

    bool r1 = v1 || v2 && v3; // 1
    bool r2 = (v1 || v2) && v3; // 0
    bool r3 = v1 || (v2 && v3); // 1

    return 0;
}