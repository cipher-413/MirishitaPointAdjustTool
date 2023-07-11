
#define PT_A 515        //ポイントA
#define PT_B 441        //ポイントB

#define REMAIN 6766    //調整目標までの残ポイント

#include <iostream>

int main(void)
{
    int a = 1;          //aのプレイ回数
    int b = 1;          //bのプレイ回数
    int surplus = 1;    //剰余

    while (surplus != 0) {
        surplus = (REMAIN - PT_A * a) % PT_B;
        a++;

    }

    b = (REMAIN - PT_A * (a - 1)) / PT_B;

    std::cout << a - 1 << " " << b << std::endl;


    return 0;
}
