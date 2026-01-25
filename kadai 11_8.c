#include <stdio.h>

void absolute(int *p) //引数としてポインタを指定
{
    *p=*p*-1;
    printf(" %d\n",*p);
}

int main(void)
{
    int a=3;
    
    printf("absolute(%d) =", a);
    if(a>=0){
    printf("%d\n", a);
    }else if(a<0){
        absolute(&a);
        printf("%d\n",a);
    }
    a=-5;
    printf("absolute(%d) =", a);
    if(a>=0){
    printf(" %d\n", a);
    }else if(a<0){
        absolute(&a);

    }
    return 0;
}
/*
absolute(3) =3
absolute(-5) = 5
*/
