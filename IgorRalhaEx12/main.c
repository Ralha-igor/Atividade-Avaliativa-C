#include <stdio.h>
#include <stdlib.h>

float converter1(float real);
float converter2(float real);

int main()
{
    float dinheiro;
    int opcao;

    printf("\n Digite uma opcao: \n [1] converter Real para Dolar: \n [2] converter Real para Euro: \n");
    scanf("%i", &opcao);
    printf("\n Digite a quantidade de dinheiro que possui em reais:");
    scanf("%f", &dinheiro);


    switch(opcao){
        case 1: {
            printf("\n A  quantidade de Dolar apos a conversao eh: %.2f ", converter1(dinheiro));
            break;
        }
        case 2: {
            printf("\n A  quantidade de Euro apos a conversao eh: %.2f ",converter2(dinheiro));
            break;
        }
        default: {
            printf("\n Essa opcao nao eh valida");
            break;
        }


    }
}

float converter1(float real){

    float dolar;
    dolar = real * 0.1970;
    return dolar;
}

float converter2(float real)

{
    float euro;
    euro = real * 0.18331543;
    return euro;
}
