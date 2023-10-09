#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>

int main()
{
    using namespace std;

    //float 32비트(4바이트), 1(부호)/8(지수)/23(가수, 0.xx)
    float f;
    double d;
    long double ld;

    cout << sizeof(f) << endl; // 4
    cout << sizeof(d) << endl; // 8
    cout << sizeof(ld) << endl; // 16 but 강의에선 8

    cout << numeric_limits<float>::max() << endl; //3.40282e+38
    cout << numeric_limits<double>::max() << endl; //1.79769e+308
    cout << numeric_limits<long double>::max() << endl; //1.18973e+4932

    cout << numeric_limits<float>::min() << endl; //1.17549e-38
    cout << numeric_limits<double>::min() << endl; //2.22507e-308
    cout << numeric_limits<long double>::min() << endl; //3.3621e-4932

    cout << numeric_limits<float>::lowest() << endl; //-3.40282e+38
    cout << numeric_limits<double>::lowest() << endl; //-1.79769e+308
    cout << numeric_limits<long double>::lowest() << endl; //-1.18973e+4932

    // 초기화 및 exponential

    float ff(3.141592f);
    double dd(3.141592);
    long double ldd(3.141592);

    float fff(3.14); // 31.4 * 0.1

    cout << 3.14 << endl;
    cout << 31.4e-1 << endl;
    cout << 31.4e-2 << endl;
    cout << 31.4e+1 << endl;
    cout << 31.4e+2 << endl;

    // Precision

    cout << std::setprecision(16) << endl; //0.3333333333333333
    cout << (1.0 / 3.0) << endl; // 0.333333

    float ten_f(123456789.0f); // 10 significant digits
    cout << std::setprecision(9) << endl;
    cout << ten_f << endl; //123456792

    // 오차

    double db(0.1);

    cout << db << endl; // 0.1
    cout << std::setprecision(17);
    cout << db << endl; // 0.10000000000000001

    double d1(1.0);
    double d2(0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 );

    cout << d1 << endl; // 1
    cout << d2 << endl; // 0.99999999999999989 (오차누적)

    //NAN

    double zero = 0.0;
    double posinf = 5.0 / zero;
    double neginf = -5.0 / zero;
    double nan = zero / zero;

    cout << posinf << " " << std::isinf(posinf) << endl; //inf 1
    cout << neginf << " " << std::isinf(neginf) << endl; //-inf 1
    cout << nan << " " << std::isnan(nan) << endl; //-nan 1 , indeterminate.
    cout << 1.0 << " " << std::isnan(1.0) << endl; // 1 0
    
    return 0;
}