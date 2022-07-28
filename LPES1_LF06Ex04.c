#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 0;
    int filhos = 0;
    int semFilhos = 0;
    int umFilho = 0;
    int doisFilhos = 0;
    float salarios = 0;
    float salMed_Geral = 0;
    float salMed_semFilhos = 0;
    float salMed_umFilho = 0;
    float salMed_doisFilhos = 0;
    float salMax = 0;

    while(filhos >= 0){
        //Informar numero de filhos
        printf("Registro %d\n", n+1);
        printf("Informe o numero de filhos, ou insira um valor negativo para concluir: ");
        scanf("%d", &filhos);

        if(filhos < 0){
            //calculo das medias
            salMed_Geral = salMed_Geral / n;

            salMed_semFilhos = salMed_semFilhos / semFilhos;
            salMax = salMed_semFilhos;

            salMed_umFilho = salMed_umFilho / umFilho;
            if(salMax < salMed_umFilho){
                salMax = salMed_umFilho;
            }
            salMed_doisFilhos = salMed_doisFilhos / doisFilhos;
            if(salMax < salMed_doisFilhos){
                salMax = salMed_doisFilhos;
            }

            //resultados
            printf("\nRESULTADOS:\n- A media salarial geral eh de R$ %.2f", salMed_Geral);
            if(semFilhos > 0){
                printf("\n- O salario medio entre os entrevistados que nao possuem filhos eh de R$ %.2f", salMed_semFilhos);
            }
            if(doisFilhos > 0){
                printf("\n- O salario medio entre os entrevistados que possuem dois filhos eh de R$ %.2f", salMed_doisFilhos);
            }

            //resultado da maior media salarial
            if((salMax == salMed_semFilhos) && (salMax != salMed_umFilho) && (salMax != salMed_doisFilhos)){
                printf("\n- A maior media salarial, de %.2f reais, pertence ao grupo de entrevistados que nao possuem filhos\n\n", salMax);
            }
            if((salMax == salMed_umFilho) && (salMax != salMed_semFilhos) && (salMax != salMed_doisFilhos)){
                printf("\n- A maior media salarial, de %.2f reais, pertence ao grupo de entrevistados que possuem apenas um filho\n\n", salMax);
            }
            if((salMax == salMed_doisFilhos) && (salMax != salMed_semFilhos) && (salMax != salMed_umFilho)){
                printf("\n- A maior media salarial, de %.2f reais, pertence ao grupo de entrevistados que possuem dois filhos\n\n", salMax);
            }
            if((salMax == salMed_semFilhos) && (salMax == salMed_umFilho)){
                printf("\n- A maior media salarial, de %.2f reais, pertence ao grupo de entrevistados que nao possuem filhos e, igualmente, aos que possuem um filho\n\n", salMax);
            }
            if((salMax == salMed_semFilhos) && (salMax == salMed_doisFilhos)){
                printf("\n- A maior media salarial, de %.2f reais, pertence ao grupo de entrevistados que nao possuem filhos e, igualmente, aos que possuem dois filhos\n\n", salMax);
            }
            if((salMax == salMed_umFilho) && (salMax == salMed_doisFilhos)){
                printf("\n- A maior media salarial, de %.2f reais, pertence ao grupo de entrevistados que possuem um ou dois filhos, igualmente\n\n", salMax);
            }

            return 0;
        }

        if(filhos >= 0){
            //informar salario
            printf("Informe o salario: R$ ");
            scanf("%f", &salarios);
            n++;
            printf("\n");

            //repositorio salarios

            salMed_Geral = salMed_Geral + salarios;

            if(filhos == 0){
               semFilhos++;
               salMed_semFilhos = salMed_semFilhos + salarios;
            }
            if (filhos == 1){
                umFilho++;
                salMed_umFilho = salMed_umFilho + salarios;
            }
            if(filhos == 2){
                doisFilhos++;
                salMed_doisFilhos = salMed_doisFilhos + salarios;
            }
        }
    }
}

