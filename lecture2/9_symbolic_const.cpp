#include <iostream>
#include "9_MY_CONSTANTS.h"

using namespace std;

void printNumber(const int my_number)
{
    // my_number = 456;

    int n = my_number;

    cout << n << endl;
}

int main()
{
    const double gravity{ 9.8 }; // double const 도 가능. but 순서에 따라 의미가 달라지는 경우도 있음 보통은 앞에 const

    printNumber(123);
    
    int number;
    cin >> number;

    const int my_const(123); // compile time 상수
    const int special_number(number); // Runtime 상수(사용자 입력에 따라 바뀜), number는 변경 가능하나 special number는 변경 불가.

    constexpr int my_con(123); //컴파일시 결정된다는 것을 표시하기 위해 constexpr

    // symbolic num

    const int price_per_item = 30; // 맨 위에 매크로로 #define PRICE_PER_ITEM 30 <- c방식인데 다른 전체 코드에도 영향을 미쳐서 요샌 잘 안 씀.

    int num_item = 123;
    int price = num_item * price_per_item;

    double radius;
    cin >> radius;
    
    double circumference = 2.0 * radius * constants::pi;

    return 0;
}