// sizeof, 쉼표 연산자, 조건부 연산자(==3항연산자)

#include <iostream>

using namespace std;

int getPrice(bool onSale)
{
    if (onSale)
        return 10;
    else
        return 100;
}


int main()
{
    // sizeof operator : 데이터형의 크기를 알기 위해 사용하는 operator(not function)

    float a;

    // sizeof(float);
    // sizeof(a); //4바이트 == 32비트.

    cout << sizeof a << endl; // 작동 ㅇ

    // comma operator

    int x = 3;
    int y = 10;

    // int z = (++x, ++y); 아래와 동일
    ++x;
    ++y;
    int z = y;

    cout << x << " " << y << " " << z << endl;

    // comma operator의 주의사항
    int a = 1, b = 10; // comma: 단순 구분기호로 사용됨
    int z;

    z = a, b; // z = a; comma가 assignment(=) 연산자보다 우선순위가 낮기 때문. (z = a), b; 처럼 작동.

    // conditional operator(== arithmetric if, 조건부연산자, 3항연산자)
 
    bool onSale = true;

    // int price;

    // if (onSale)
    // {
    //     price = 10;
    // }
    // else
    // {
    //     price = 100;
    // }

    const int price = (onSale == true)? 10 : 100;
    // const int price = getPrice(onSale);
    
    // 주의사항

    int xx = 5;
    
    cout << ((xx % 2 == 0)? "even" : "odd") << endl;

    return 0;
}