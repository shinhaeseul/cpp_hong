#include <iostream>

using namespace std;

int multiplyTwoNumbers(int num_a, int num_b)
{
    int sum = num_a * num_b;
    
    return sum;
}

int addTwoNumbers(int num_a, int num_b)
{
    return num_a + num_b;
}

void printHelloWorld() //return 해줄 것이 없을 때
{
    cout << "Hello World!" << endl;
    return; //선택사항
    cout << "Hello World 2!" << endl; //작성 코드 경우에 따라 실행될 순 있어도 이 코드상 return 때문에 반환X
}

int main()
{
    cout << multiplyTwoNumbers(1, 2) << endl;
    cout << multiplyTwoNumbers(3, 4) << endl;
    cout << multiplyTwoNumbers(8, 13) << endl;

    printHelloWorld();

    int sum = addTwoNumbers(1,2);
    
    return 0;
}