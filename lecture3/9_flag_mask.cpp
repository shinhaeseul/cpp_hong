// Bit flags, Bit masks

#include <iostream>
#include <bitset>

int main()
{
    using namespace std;

    /* 
    복잡한 방식
    
    bool item1_flag = false;
    bool item2_flag = false;
    bool item3_flag = false;
    bool item4_flag = false;
    ...

    // event!
    item1_flag = true;

    // die! item2 loss
    item2_flag = false;

    if (item3_flag == true)
    {
        //event

    }

    if (item3_flag == true && item4_flag == false)
    {
        item3_flag = false;
        item4_flag = true;
    }
    */

    const unsigned char opt0 = 1 << 0;
    const unsigned char opt1 = 1 << 1;
    const unsigned char opt2 = 1 << 2;
    const unsigned char opt3 = 1 << 3;
    //opt4, 5, 6, 7

    cout << std::bitset<8>(opt0) << endl; // 0000 0001
    cout << std::bitset<8>(opt1) << endl; // 0000 0010
    cout << std::bitset<8>(opt2) << endl; // 0000 0100
    cout << std::bitset<8>(opt3) << endl; // 0000 1000

    unsigned char items_flag = 0;
    cout << "No item " << std::bitset<8>(items_flag) << endl; // 0000 0000

    // item0 on event
    items_flag |= opt0; 
    cout << "item0 obtained " << std::bitset<8>(items_flag) << endl; // 0000 0001

    // item3 on
    items_flag |= opt3; 
    cout << "item3 obtained " << std::bitset<8>(items_flag) << endl; // 0000 1001

    // item3 lost
    items_flag &= ~opt3; 
    cout << "item3 lost " << std::bitset<8>(items_flag) << endl; // 0000 0001

    // has item1 ?
    if(items_flag & opt1)
    {
        cout << "Has item1" << endl;
    }
    else
        cout << "Not have item1" << endl;

    // has item1 ?
    if(items_flag & opt0)
    {
        cout << "Has item0" << endl;
    }
    else
        cout << "Not have item0" << endl;

    // obtain item 2, 3
    items_flag |= (opt2 | opt3);

    cout << bitset<8>(opt2 | opt3) << endl; //0000 1100
    cout << "item2, 3 obtained " << std::bitset<8>(items_flag) << endl; // item2, 3 obtained 00001101

    if((items_flag & opt2) && !(items_flag & opt1))
    {
        items_flag ^= opt2;
        items_flag ^= opt1;
    }

    cout << std::bitset<8>(items_flag) << endl; // 0000 1011

    // 플래그 실용 예제
    // glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    // 비트 마스크
    const unsigned int red_mask = 0xFF0000;
    const unsigned int green_mask = 0x00FF00;
    const unsigned int blue_mask = 0x0000FF;

    cout << std::bitset<32>(red_mask) << endl;   // 00000000111111110000000000000000 색깔값 X, 이 자리에 저장되는 값이 RED라는 뜻.
    cout << std::bitset<32>(green_mask) << endl; // 00000000000000001111111100000000
    cout << std::bitset<32>(blue_mask) << endl;  // 00000000000000000000000011111111

    unsigned int pixel_color = 0xDAA520;

    cout << std::bitset<32>(pixel_color) << endl; //00000000110110101010010100100000

    //
    unsigned int red = pixel_color & red_mask;
    unsigned int green = pixel_color & green_mask;
    cout << "green " << bitset<8>(green) << " "<< int(green) << endl; // 00000000 0
    cout << "green " << bitset<16>(green) << " "<< int(green) << endl; // 1010010100000000 42240

    unsigned char blue = pixel_color & blue_mask;

    red >>= 16;
    red = (unsigned char)red;
    green >>= 8;
    green = (unsigned char)green;

    cout << "red " << bitset<8>(red) << " "<< int(red) << endl; //red 11011010 218
    cout << "green " << bitset<8>(green) << " "<< int(green) << endl; //green 10100101 165
    cout << "blue " << bitset<8>(blue) << " "<< int(blue) << endl; // 00100000 32

    /*
    // 다음 경우에 대해 플래그를 바꿔보세요.
    unsigned char option_viewed = 0x01;
    unsigned char option_edited = 0x02;
    unsigned char option_liked = 0x04;
    unsigned char option_shared = 0x08;
    unsigned char option_deleted = 0x80;

    unsigned char my_article_flags = 0;

    // 기사를 봤을 때

    // 기사 좋아요를 클릭했을 때

    // 기사 좋아요를 다시 클릭했을 때

    // 본 기사만 삭제할 때

    // 아래 두 줄이 왜 동일하게 작동하는지 설명해보세요.

    myflags &= ~(option4 | option5);
    myflags &= ~option4 & ~option5;
    */

    return 0;
}