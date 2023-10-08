#pragma once (헤더가드)

//#ifndef MY_ADD //MY_ADD가 include가 이미 되어있을 경우 재정의 하지 말라는 의미.(헤더가드)
//#define MY_ADD

int add(int a, int b)
{
    return a + b;
}

// int add (int a, int b);

//#endif