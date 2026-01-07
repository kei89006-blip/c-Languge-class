	
/*
program=kadai10_8.c
date=1月5日
*/
#include <stdio.h>
void adult(void)
{
    printf("成人です\n");
}
void child(void)
{
    printf("未成年です\n");
}

int main()
{
    printf("年齢を入力:");
    int age;
    scanf("%d", &age);
    if(age<18){
        child();
       }else{
        adult();
    }
       return 0;
}
/*
年齢を入力:17
未成年です
年齢を入力:19
成人です
*/