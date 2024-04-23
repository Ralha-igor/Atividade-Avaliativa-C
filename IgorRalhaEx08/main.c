#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int dados(int idade);

int main()
{
    int idade, classeEleitoral;

    printf("\n Digite sua idade: \n");
    scanf("%i", & idade);

    idade = dados(idade);




}

int dados(int idade){


int retornar, classeEleitoral;
if (idade < 16){
        printf("\n nao eleitor");
        classeEleitoral = 1;
        printf("\n Sua classe eleitoral eh: %i", classeEleitoral);
        retornar = idade;

    } if ((idade >= 19)&&(idade <= 64)){
        printf("\n eleitor obrigatorio");
        classeEleitoral = 2;
        printf("\n Sua classe eleitoral eh: %i", classeEleitoral);
        retornar = idade;

            } if ((idade >= 16) && (idade <= 18)){
                printf("\n Eleitor facultativo");
                classeEleitoral = 3;
                printf("\n Sua classe eleitoral eh: %i", classeEleitoral);
                retornar = idade;

        }           if (idade >= 65) {
                    printf("\n Eleitor facultativo");
                    classeEleitoral = 3;
                    printf("\n Sua classe eleitoral eh: %i", classeEleitoral);
                    retornar = idade;
        }


        }
