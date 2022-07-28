#include <stdio.h>
#include <stdlib.h>

int main(){
    int original, n, fat;

    n = 1;

    while(n){
        printf("Insira um numero positivo: ");
        scanf("%d", &original);
        n = original;

        if(n < 0){
            printf("%d eh um valor invalido. ", original);
        }
        if(n >= 0){
            for(fat = 1; n > 1; n = n - 1){
                fat = fat * n;
            }
            printf("%d! = %d\n\n", original, fat);
            n = 0;
        }
    }

    system("PAUSE");
    return 0;
}

