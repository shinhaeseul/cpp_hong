#include <iostream>

using namespace std;

int main()
{
    int x = 2; // x는 변수(메모리 주소를 가지고 있는 것), 2는 literal. =은 assignment(대입)

    cout << 1 + 2 << endl; // 1과 2는 literal, 1+2는 expression(표현식), +는 연산자

    cout << x + 2 << endl; // x,2는 피연산자(operand). 두개이기 때문에 이항연산자라고 부름.(binary)

    int y = (x > 0) ? 1 : 2; //Ternary(삼항) 연산자. x>0이 참이면 1, 거짓이면 2

    cout << y << endl;

    cout << "Hello World" << endl;

    return 0;
}