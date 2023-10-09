// 지역변수의 범위와 지속기간

#include <iostream>

int a = 1;
void doSomething()
{
    a += 3;
}

int b = 1;
void doSomething(int a) // input에 int a가 있음 == 파라미터가 다르므로 다른 함수.
{
    a += 5;
}

namespace work1
{
    namespace work11
    {
        int a = 1;
        void doSomething()
        {
            a += 3;
        }
    }
}

namespace work2::work22::work222 // c17부터 가능.
{
    int a = 1;
    void doSomething() // input에 int a가 있음 == 파라미터가 다르므로 다른 함수.
    {
        a += 5;
    }
}

int main()
{
    using namespace std;

    int apple = 5;

    cout << apple << endl; // 5

    {
        apple = 1;

        cout << apple << endl; // 1
    }

    cout << apple << endl; // 1

    apple = 5;
    cout << apple << endl; // 5

    {
        int apple = 1;
        cout << apple << endl; // 1
    }    

    cout << apple << endl; // 5

    work1::work11::a;
    work1::work11::doSomething();

    work2::work22::work222::a;
    work2::work22::work222::doSomething();

    return 0;
}