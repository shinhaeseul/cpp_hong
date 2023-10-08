/*
    This is my program.
*/

#include <iostream> //=input output stream 입출력을 가능하게 해주는 스트림, #~ =전처리기(preprocessor directive)

int main(void) //input:void, output:int
{
    (1 + 2) * (3 + 4); //21 (1+2)=expression, (1+2)*(3+4)=expression
    int x = 2; //2,3,5=literal(리터럴) x,y=변수
    x = 5;
    int y = x + 3;

    std::cout << y << std::endl; //end liner = 엔터역할, std = namespace, :: = 앞 네임스페이스에 들어있는 함수에 접근 가능하게 함, << = output operator(연산자)

    return 0; //끝(return statement), 기능수행문장=statement(명령문)
}