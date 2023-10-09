// external

#include <iostream>
#include "MyConstants.h"

extern int a = 123;

void doSomething4()
{
    using namespace std;

    cout << "Hello" << endl;
    cout << "In test.cpp file" << Constants::pi <<  " " << &Constants::pi << endl;
}