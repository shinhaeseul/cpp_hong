#include <iostream>

using namespace std;

void my_function(void) // ==()
{

}

int main()
{
    // void my_void; //void는 메모리 차지 X, 선언할 수 X

    int i = 123;
    float f = 123.456f;

    void *my_void; // 포인터(주소).

    // 데이터 타입이 다르고, 데이터 타입의 사이즈가 다르더라도 데이터의 주소를 표현하는 데이터 양은 동일
    // (예를 들어 3층은 301-304호까지 있음, 근데 4층은 401-408호까지 있음, but 3글자로 표현하는 것은 동일)
    my_void = (void*)&i; // 정수형 변수의 주소
    my_void = (void*)&f; // 실수형 변수의 주소

    return 0;
}