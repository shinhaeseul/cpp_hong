#include <iostream>

int main()
{
    int x = 5; //x=객체, x는 메모리에서 숫자를 담을 수 있는 공간을 차지하고 있다., initialization(초기화) != assignment, int x(123); == (int x = 123;)
    x = 123; // assignment operator

    std::cout << x << std::endl; //123, 변수x의 값
    std::cout << &x << std::endl; //& ampersand, 변수 x의 주소, output==0x7fffffffd9e4

    return 0;
}