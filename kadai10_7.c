#include <stdio.h>

int ticket(void)
{
    printf("年齢を入力:");
    int age;
    scanf("%d", &age);

    if(age<3){
        printf("3才未満は無料\n");
        return 0;  //チケット種別(0)を返す
    }else if(age<16){
        printf("15才以下は子供料金\n");
        return 1;  //チケット種別(1)を返す
    }else if(age<60){
        printf("大人料金\n");
        return 2;      //チケット種別(2)を返す
    }else{
        printf("60才以上はシニア料金\n");
        return 3;
    }
    
    
}

int main(void)
{
    switch(ticket()){ //チケット種別により料金を選択
    case 0:
        printf("\\0\n");
        break;
    case 1:
        printf("\\800\n");
        break;
    case 2:
        printf("\\1600\n");
        break;
    case 3:
        printf("\\800\n");
        break;
    }

    return 0;
}
/*
年齢を入力:65
60才以上はシニア料金
\800
*/  