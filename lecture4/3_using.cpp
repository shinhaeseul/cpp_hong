// Using문과 모호성

#include <iostream>

namespace a
{
    int my_var(10);
    int my_a(123);
    int count(12312312);
}

namespace b
{
    int my_var(20);
    int my_b(456);
}

int main()
{
    using namespace std;
    // using std::cout;
    cout << "Hello, World!" << endl;

    {
        using namespace a;

        cout << my_var << endl;
        // cout << count << endl; // std 내부에 count가 있음
    }

    using namespace a;
    using namespace b;

    // cout << my_var << endl; // 불가능
    cout << a::my_var << endl;
    cout << my_a << endl;
    cout << my_b << endl;

    // using namespace b;의 영향도 받음
    // {
    //     using namespace a;

    //     cout << my_var << endl;
    // }

    return 0;
}