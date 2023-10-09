#include <iostream>
#include <limits>

int main()
{
    using namespace std;

    char c1(65);
    char c2('A'); // 한 글자 표현시 따옴표, 문자열 표현시 쌍따옴표

    cout << c1 << " " << c2 << " " << int(c1) << " " << int(c2) << endl; // A A 65 65

    // c-style casting
    cout << (char)65 << endl; // 'A'
    cout << (int)'A' << endl; // 65

    //cpp style
    cout << char(65) << endl; //'A'
    cout << int('A') << endl; // 65

    cout << static_cast<char>(65) << endl; // 'A'
    cout << static_cast<int>('A') << endl; // 65

    char ch(97);
    cout << ch << endl; // a
    cout << static_cast<int>(ch) << endl; // 97

    char ch1;

    //input: abc -> a 97 b 98 c 99

    // cin >> ch1;
    // cout << ch1 << " " << static_cast<int>(ch1) << endl; // input:C -> C 67

    // cin >> ch1;
    // cout << ch1 << " " << static_cast<int>(ch1) << endl;

    // cin >> ch1;
    // cout << ch1 << " " << static_cast<int>(ch1) << endl;

    // cin >> ch1;
    // cout << ch1 << " " << static_cast<int>(ch1) << endl;

    cout << sizeof(char) << endl;
    cout << (int)std::numeric_limits<char>::max() << endl; //127
    cout << (int)std::numeric_limits<char>::lowest() << endl; //-128
    cout << (int)std::numeric_limits<unsigned char>::max() << endl; // 255
    cout << (int)std::numeric_limits<unsigned char>::lowest() << endl; //0

    cout << "This is first line \nsecond line";

    cout << int('\n') << endl; //10
    cout << int('\t') << endl; //9

    cout << "This is \"" << endl; // 따옴표 출력

    return 0;
}