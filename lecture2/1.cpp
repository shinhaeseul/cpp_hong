#include <iostream>
#include <bitset>

int main()
{
    using namespace std;

    bool bValue = false;
    
    char chValue = 65; //'A';

    float fValue = 3.141592f; //f 없으면 double로 인식됨
    double dValue = 3.141592;
    
    auto aValue = 3.141592;
    auto aValue2 = 3.141592f;

    int i = 3;
    int a(3); // direct initialization
    int b{ 123 }; // uniform initialization(더 엄격함)

    int pi(3.14); // warning int pi((int)3.14); <-warning 사라짐.
    int er{ 4.5 }; // error

    int k = 3, l = 4, m = 5;
    
    cout << ((bValue) ? 1 : 0 )<< endl;

    cout << (int)chValue << endl;
    cout << chValue << endl;

    cout << fValue << endl;
    cout << dValue << endl;

    cout << sizeof(aValue) << endl; //8(bytes)
    cout << sizeof(aValue2) << endl; //4(bytes)

    cout << (uintptr_t)static_cast<void*>(&chValue) << endl;
    cout << (uintptr_t)static_cast<void*>(&i) << endl;

    return 0;
}