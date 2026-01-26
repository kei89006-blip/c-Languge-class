#include <stdio.h>

struct menu { //構造体menu型の宣言
    char name[100];
    int  price;
    double energy;
};

int main(void)
{
    //構造体menu型変数の初期化
    struct menu curry = {"Curry", 300, 800}; //メンバ定義の順番に値が設定される
    struct menu ramen = {"Ramen", 400, 500};      //指定しない値は0で初期化される

    //構造体menu型変数のメンバを表示
    printf("%s \\%d %.1fkcal\n", curry.name, curry.price ,curry.energy);
    printf("%s \\%d %.1fkcal\n", ramen.name, ramen.price ,ramen.energy);

    return 0;
}
/*
Curry \300 800.0kcal
Ramen \400 500.0kcal
*/