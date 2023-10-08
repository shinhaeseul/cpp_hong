#include <iostream> //cout, cin, endl, ...
#include <cstdio> //printf

int main()
{
    using namespace std; // std:: 생략가능
    int x = 1024;
    double pi = 3.141592;

    std::cout << "I love this lecture!\n" ; //<< std::endl; // ""내부 문장이 <<를 타고 cout으로 들어간다는 의미라고 해석가능, \n은 endl과 거의 비슷한 역할, 동일하진 X
    std::cout << "x is " << x << "pi is "<< pi << std::endl;

    /*
    abc     def
    ab      cdef
    */
    std::cout << "abc" << "\t" << "def" << std::endl; // \t == tab을 의미
    std::cout << "ab" << "\t" << "cdef" << std::endl; // \t 자동 줄맞춤 기능, 두글자임에도 한글자로 처리가 됨, \가 있어 기능수행 처리

    cout << "\a"; // audio 출력 역할
    //printf("I love this lecture!")

    return 0;
}
