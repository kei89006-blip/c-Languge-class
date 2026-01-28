#include <stdio.h>

void print(int[], int); //関数プロトタイプ宣言 引数の変数名は省略可
void reset(int[], int, int); //関数プロトタイプ宣言 引数の変数名は省略可

int main(void){
    int a[] = {0,1,2};
    print(a, 3); //配列と配列の長さを渡して配列を表示
    reset(a, 3,-1); //配列と配列の長さを渡して配列をリセット
    print(a, 3); //リセットされた配列を再表示

    return 0;
}

void print(int a[], int len){ //引数の配列aの要素を引数lenの長さ分表示する
    printf("{");
    for(int i=0; i<len; i++){
        printf("%d", a[i]);
        if(i < len-1) printf(",");
    }
    printf("}\n");
}

void reset(int a[], int len, int value){ //引数の配列aの要素を引数lenの長さ分リセットする
    for(int i=0; i<len; i++){
        a[i] = value;
        
    }
}
/*
{0,1,2}
{-1,-1,-1}
*/