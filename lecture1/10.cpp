#include <iostream>

using namespace std;

int add (int a, int b); // forward declaration
int muliply (int a, int b);
int sub (int a, int b);

int main()
{
    cout << add(1, 2) << endl;

    return 0;
}


int add (int a, int b) // definition
{
    return a + b;
}

int multiply (int a, int b)
{
    return a * b;
}

int sub (int a, int b)
{
    return a - b;
}