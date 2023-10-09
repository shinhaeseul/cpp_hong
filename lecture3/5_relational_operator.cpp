// 관계 연산자

#include <iostream>

using namespace std;

int main()
{
    // 5.1
    while (true)
    {
        int x, y;
        cin >> x >> y;
        cout << "Your input values are : " << x << " " << y << endl;

        if (x == y)
            cout << "equal" << endl;
        if (x != y)
            cout << "Not equal" << endl;
        if (x > y)
            cout << "x is greater than y" << endl;
        if (x < y)
            cout << "x is less than y" << endl;
        if (x >= y)
            cout << "x is greater than y or equal to y" << endl;
        if (x <= y)
            cout << "x is less than y or equal to y" << endl;
    }

    // 5.2
    double d1(100 - 99.99); // 0.001
    double d2(10 - 9.99);   // 0.001

    // not eqaul, d1 > d2
    if (d1 == d2)
        cout << "equal" << endl;
    else
    {
        cout << "not equal" << endl;
        if (d1 > d2) cout << "d1 > d2" << endl;
        else cout << "d1 < d2" << endl;
    }

    cout << std::abs(d1 - d2) << endl; // 5.32907e-15

    const double epsilon = 1e-10;

    if(std::abs(d1 - d2) < epsilon)
        cout << "Approximately equal" << endl;
    else
        cout << "Not equal" << endl;


    return 0;
}