#include <iostream>

bool isEqual(int a, int b)
{
    bool result = (a == b);
    return result;
}


int main()
{
    using namespace std;

    bool b1 = true; // copy initialization
    bool b2(false); // direct initialization
    bool b3{ true }; // uniform initialization
    b3 = false; // assignment

    cout << b3 << endl; // 0
    cout << b1 << endl; // 1

    cout << std::boolalpha << endl;
    cout << b3 << endl; // false
    cout << b1 << endl; // true

    cout << std::noboolalpha << endl; // 다시 숫자

    cout << !true << endl; // 0, false
    cout << !false << endl; // 1, true

    cout << (true && true) << endl; // 1

    cout << (true || true) << endl; // 1

    if (false)
    {
        cout << "This is true" << endl;
        cout << "True second line" << endl;
    }
    else
        cout << "This is false" << endl;

    cout << isEqual(1, 1) << endl; // 1
    cout << isEqual(0, 3) << endl; // 0

    if (5)
    {
        cout << "True" << endl; // 실행됨, 0이면 false, 외엔 모두 True
    }
    else
        cout << "False" << endl;

    bool b;

    cin >> b;
    cout << std::boolalpha;
    cout << "Your input : " << b << endl; // 0 과 1로 입력할 것. false X

    return 0;
}