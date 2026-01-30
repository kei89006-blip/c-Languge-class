#include <stdio.h>

/* 関数 hello() */
void hello(void)
{
    printf("Hello");
}

void world(void)
{
    printf(",World!\n");
}

    
/* 関数 helloworld() */
void helloworld(void)
{
    hello();  //関数 hello() を呼び出す
    world();
}

int main(void)
{
    helloworld();  //関数 helloworld() を呼び出す

    return 0;
}
/*
Hello,World!
*/