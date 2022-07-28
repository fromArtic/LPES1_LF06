#include <stdio.h>
#include <stdlib.h>

int main(){
    int ano_atual, n, i;
    float salario_original, percentual, novo_salario;

    printf("Informe o ano atual: ");
    scanf("%d", &ano_atual);

    salario_original = 1000;
    n = 2006;
    i = 2007;

    if(ano_atual >= n){
        percentual = 3.5/100;
        novo_salario = salario_original + percentual * salario_original;
    }
    while(i <= ano_atual){
        percentual = percentual + (0.5/100);
        novo_salario = novo_salario + percentual * novo_salario;
        i = i + 1;
    }

    if(ano_atual >= n){
        printf("O salario recebido pelo funcionario em %d deve ser de R$ %.2f.\n\n", ano_atual, novo_salario);
    }
    if(ano_atual == 2005){
        printf("O salario recebido pelo funcionario em %d deve ser de R$ %.2f.\n\n", ano_atual, salario_original);
    }
    if(ano_atual < 2005){
        printf("%d eh precedente ao ano de ingresso do funcionario a empresa, 2005.\n\n", ano_atual);
    }

    system("PAUSE");
    return 0;
}

