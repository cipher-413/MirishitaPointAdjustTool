
#include <iostream>

int main(void)
{
    int a = 1;          //aのプレイ回数
    int b = 1;          //bのプレイ回数

    int ptA = 0;        //ライブAのポイント
    int ptB = 0;        //ライブBのポイント

    int target = 0;     //目標ポイント
    int current = 0;    //現在のポイント
    int remain = 0;     //目標への残

    char f;             //終了判定

    int surplus = 1;    //剰余

    std::cout << " input target point> ";           //目標・現在pt入力・差算出
    std::cin >> target;

    std::cout << " input current point> ";
    std::cin >> current;

    remain = target - current;

    while (1) {
        std::cout << " input pt of live A> ";       //ライブpt設定
        std::cin >> ptA;

        std::cout << " input pt of live B> ";
        std::cin >> ptB;

        while (surplus != 0) {                      //互除法実行
            surplus = (remain - ptA * a) % ptB;
            a++;

        }
        b = (remain - ptA * (a - 1)) / ptB;

        std::cout << " a: " << a - 1 << " b: " << b << std::endl;   //結果出力

        std::cout << " continue? (y/n) > ";         //終了判定とリセット
        std::cin >> f;
        if (f == 'n')break;

        surplus = 1;
        a = 1;
        b = 1;
    }

    return 0;
}