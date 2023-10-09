// 연산자 우선순위와 결합법칙

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x = 4 + 2 * 3;

    int y = -2; // 여기서 -는 unary minus.

    int z = std::pow(2, 3); // pow는 보통 double type으로 return..
    cout << x << endl;

    return 0;
}