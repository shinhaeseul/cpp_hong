/*
Chapter1_14.cpp : Defines the entry point for the console application.
*/

#include <iostream>
#include <algorithm>

using namespace std;

#define MY_NUMBER 9 //매크로. 코드에서 MY_NUMBER를 만나면 다 9로 변경. 대문자사용
#define MAX(a, b) (((a) > (b)) ? (a) : (b)) //요즘 매크로 잘 안 씀.
#define LIKE_APPLE

void doSomething()
{
#ifdef LIKE_APPLE // LIKE_APPLE이 정의가 되어있으면 아랫줄 실행, 보통 os가 윈도우인지 리눅스인지 확인하기 위해 등등..
    cout << "Apple" << endl;
#endif

#ifndef LIKE_APPLE
    cout << "Orange" << endl;
#endif
}

int main()
{
    doSomething();
    
    cout << MY_NUMBER << endl;
    cout << MAX(1, 2) << endl;
    cout << MAX(1 + 3, 2) << endl;
    cout << std::max(1 + 3, 2) << endl;
    return 0;
}