// 산술 연산자

#include <iostream>

using namespace std;

int main()
{   
    int x = 1;
    int xx = -x; // -: unary minus, - x: 컴파일 상엔 문제 없지만 사람이 알아보기 힘들수도 있음. 웬만해선 붙여쓰기.
    int y = 2;
    int z = x % y;

    cout << x / y << " " << z << endl; // output(정수): 몫, 나머지

    //output 실수.
    cout << float(x) / y << endl;
    cout << x / float(y) << endl; 
    cout << float(x) / float(y) << endl;

    // 주의사항
    cout << -5 / 2 << endl; // -2(절삭)
    cout << -5 % 2 << endl; // output 부호: 왼쪽 숫자 양수 -> 양수, 왼쪽 숫자 음수 -> 음수

    int zz = x; // 대입 연산자
    zz +=  y; // zz = zz + y

    return 0;
}