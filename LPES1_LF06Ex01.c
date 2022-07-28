#include <stdio.h>
#include <stdlib.h>

int main(){
    int max, n, i, soma;

    max = 10000;

    for(n = 1; n < max; n++){
        soma = 0;
        for(i = 1; i < n; i++){
            if(n % i == 0){
                soma = soma + i;
            }
        }
        if (soma == n){
        printf("%d\n", n);
        }
    }

    system("PAUSE");
    return 0;
}

