// 전역 변수, 정적 변수, 내부 연결, 외부 연결

#include <iostream>
#include "MyConstants.h"

using namespace std;

/*
    int g_x; // external linkage
    static int g_x; // internal linkage
    const int g_x; // 초기화 없이 불가능

    extern int g_z;
    extern const int g_z; // 어디선간 초기화 해줬어야함

    int g_y(1); // external
    static int g_y(1); // internal linkage 초기화
    const int g_y(1); // internal 

    extern int g_w(1); // 다른 곳에선 초기화하면 X
    extern const g_w(1);
*/


// forward declaration
void doSomething4(); //(extern) void doSomething4(); => 생략되어 있는 것임
extern int a;

int value = 123;

void doSomething()
{
    int a = 1; // doSomething()이 실행될 때 할당받았다가 사라졌다가 함.(메모리를 가졌다가 반납했다가)
    ++a;
    cout << a << endl;
}

void doSomething2()
{
    static int a = 1; // 이 영역 안에 변수가 선언이 될 때 같은 메모리를 쓰고, 초기화가 한번만 됨. 실행 할 때마다 초기화X(== const처럼 첫 실행시 무조건 초기화가 되어있어야 함)
    ++a;
    cout << a << endl;
}

int g_a = 1;
void doSomething3()
{
    ++g_a;
    cout << g_a << endl;
}

int main()
{

    cout << value << endl; // 123

    int value = 1;

    cout << value << endl; // 1
    cout << ::value << endl; // 123

    doSomething(); // 2
    doSomething(); // 2
    
    doSomething2(); // 2
    doSomething2(); // 3
    doSomething2(); // 4
    doSomething2(); // 5

    doSomething3(); // 2
    doSomething3(); // 3
    doSomething3(); // 4
    doSomething3(); // 5

    doSomething4();

    cout << a << endl; // 123


    //
    cout << "In test.cpp file" << Constants::pi << " " << &Constants::pi << endl;

    doSomething4(); // 동일한 header file(헤더 내부에서 초기화까지 진행)이지만 주소가 다름. -> MyConstants.cpp에서 정의하고 넘어가면 주소 동일.

    return 0;
}