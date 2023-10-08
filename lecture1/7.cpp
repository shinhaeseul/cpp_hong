#include <iostream>

using namespace std;

int main()
{
    int x(0);

    cout << x << " " << &x << endl;

    //영역분리
    {
        int x(1); //위 int x(0);과 다른 x(다른 메모리에 대한 식별자) == 즉, 현진아파트가 다른 주소로 여러 개인 것임.
        cout << x << " " << &x << endl;

        // 여기서 지역변수 x는 로컬영역 밖으로 나오는 순간 사용할 수 X
        // 만약 int x(1);이 아닌 단순 x=1;이라면 이 영역 내 현진아파트는 한 개라서 동일 주소 출력됨 
    }
    
    {
        int x(2);
    }

    return 0;
}