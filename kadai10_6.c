#include <stdio.h>

int main(void)
{
    for(int i=0; i<3; i++){
        printf("終了しますか?(y/n):");
  
        char input[2];
        scanf("%s", input);
        if(input[0] == 'y'){
            printf("終了します\n");
            return 0;
        }
        
        printf("処理を続行します\n");
    }
    printf("時間切れです\n");

    return 0;
}
/*
終了しますか?(y/n):y
終了します
*/