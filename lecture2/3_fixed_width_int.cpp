#include <iostream>
//#include <cstdint>

int main()
{
    using namespace std;

    std::int16_t i(5); // 16비트 == 2바이트 데이터 타입.
    std::int8_t myint = 65; // 1바이트 데이터 타입 == char. (int X)

    //cout << myint << endl; // 'A'

    std::int_fast8_t fi(5); // 8비트 사이즈 중에 가장 빠른 데이터 타입(signed char)
    std::int_least64_t fl(5); // 적어도 64비트(8바이트)를 갖는 데이터 타입

    return 0;
}