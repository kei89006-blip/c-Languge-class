#include <stdio.h>
#include <string.h> //strcpy()関数を利用するため

struct student {    //構造体student型の宣言
    int  id;
    double gpa;
    char name[100];
};

int main(void)
{
    struct student a;            //構造体student型 変数aの宣言
    a.id = 999;                  //int型メンバid に整数値を代入
    a.gpa = 3.9;                 //double型メンバgpaに浮動小数点を代入
    strcpy(a.name, "Taro Joho"); //strcpy()関数でchar[]型メンバnameに文字列をコピー
    
    struct student b;            //構造体student型 変数aの宣言
    b.id = 500;                  //int型メンバid に整数値を代入
    b.gpa = 3.2;                 //double型メンバgpaに浮動小数点を代入
    strcpy(b.name, "Jiro Shofu"); //strcpy()関数でchar[]型メンバnameに文字列をコピー                  
    printf("%s (%d) GPA=%.2f\n", a.name, a.id, a.gpa); //構造体student型変数aのメンバを表示
    printf("%s (%d) GPA=%.2f\n", b.name, b.id, b.gpa); //構造体student型変数aのメンバを表示
    

    return 0;
}
/*
Taro Joho (999) GPA=3.90
Jiro Shofu (500) GPA=3.20
*/