


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

    float crescente(float num1, float num2, float num3);
    float decrescente(float num1, float num2, float num3);
    float maiorNoMeio(float num1, float num2, float num3);

int main()
{
    int valorInteiro;
    float valor1,valor2, valor3;

    printf("\n Digite uma opcao: \n [1] Ordem crescente: \n [2] Ordem decrescente: \n [3] O Maior numero entre os dois numeros:\n");
    scanf("%i", &valorInteiro);


switch(valorInteiro)
{
    case 1:

        printf("\n Digite um numero qualquer: ");
    scanf("%f", &valor1);
    printf("\n Digite mais um numero qualquer: ");
    scanf("%f", &valor2);
    printf("\n Digite outro numero qualquer: ");
    scanf("%f", &valor3);
    crescente(valor1, valor2, valor3);
    break;


    case 2:
        printf("\n Digite um numero qualquer: ");
    scanf("%f", &valor1);
    printf("\n Digite mais um numero qualquer: ");
    scanf("%f", &valor2);
    printf("\n Digite outro numero qualquer: ");
    scanf("%f", &valor3);
    decrescente(valor1, valor2, valor3);
    break;

    case 3:
    printf("\n Digite um numero qualquer: ");
    scanf("%f", &valor1);
    printf("\n Digite mais um numero qualquer: ");
    scanf("%f", &valor2);
    printf("\n Digite outro numero qualquer: ");
    scanf("%f", &valor3);
    maiorNoMeio(valor1, valor2, valor3);
    break;

    default: {
    printf("\n Opcao invalida, tente novamente");
    break;

    }

}
}

float crescente( float num1, float num2, float num3)
{
            if(num1 > num2 && num2 > num3 && num1 > num3 ){
            printf("\n O valor em ordem crescente: %f\n %f\n %f\n", num3,num2,num1);
                }else if (num1 <  num2 && num2 < num3 && num3 > num1 ){
                printf("\n O valor em ordem crescente: %f\n %f\n %f\n", num1,num2,num3);
                    }else if (num2 < num1 && num2 < num3 && num1 > num3){
                    printf("\n O valor em ordem crescente: %f\n %f\n %f\n", num2,num3,num1);
                        }else if (num3 < num2 && num2 > num1 && num1 > num3){
                        printf("\n O valor em ordem crescente: %f\n %f\n %f\n", num3,num1,num2);
                            }else if (num1 < num3 && num2 > num3 && num1 < num2){
                            printf("\n O valor em ordem crescente: %f\n %f\n %f\n", num1,num3,num2);
                            }
            printf("opcao invalida");
            return 0;
}


float decrescente(float num1, float num2, float num3)
{
            if(num1 > num2 && num2 > num3 && num1 > num3 ){
            printf("\n O valor em ordem decrescente: %f\n %f\n %f\n", num1,num2,num3);
                }else if (num1 <  num2 && num2 < num3 && num3 > num1 ){
                printf("\n O valor em ordem decrescente: %f\n %f\n %f\n", num3,num2,num1);
                    }else if (num2 < num1 && num2 < num3 && num1 > num3){
                    printf("\n O valor em ordem decrescente: %f\n %f\n %f\n", num1,num3,num2);
                        }else if (num3 < num2 && num2 > num1 && num1 > num3){
                        printf("\n O valor em ordem decrescente: %f\n %f\n %f\n", num2,num1,num3);
                            }else if (num1 < num3 && num2 > num3 && num1 < num2){
                            printf("\n O valor em ordem decrescente: %f\n %f\n %f\n", num2,num3,num1);
                            }
            printf("opcao invalida");
            return 0;
}


float maiorNoMeio(float num1, float num2, float num3)
{
            if(num1 > num2 && num2 > num3 && num3 < num2 ){
            printf("\n O valor maior esta no meio: %f\n %f\n %f\n", num3,num1,num2);
                }else if (num1 <  num2 && num2 < num3 && num3 >  num2 ){
                printf("\n O valor maior esta no meio: %f\n %f\n %f\n", num3,num2,num1);
                    }else if (num2 < num1 && num2 < num3 && num1 > num3){
                    printf("\n O valor maior esta no meio: %f\n %f\n %f\n", num3,num1,num2);
                        }else if (num3 < num2 && num2 > num1 && num1 > num3){
                        printf("\n O valor maior esta no meio: %f\n %f\n %f\n", num2,num3,num1);
                            }else if (num1 < num3 && num2 < num3 && num1 < num2){
                            printf("\n O valor maior esta no meio: %f\n %f\n %f\n", num2,num3,num1);
                            }else if (num2 > num3 && num2 > num1 && num1 < num3){
                            printf("\n O valor maior esta no meio: %f\n %f\n %f\n", num1,num2,num3);
                            } else{
                                printf("opcao invalida");
                            }

            return 0;
}


/*

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

    float crescente(float num1, float num2, float num3);
    float decrescente(float num1, float num2, float num3);
    float maiorNoMeio(float num1, float num2, float num3);

int main()
{
    int valorInteiro;
    float valor1,valor2, valor3;

    printf("\n Digite uma opcao: \n [1] Ordem crescente: \n [2] Ordem decrescente: \n [3] O Maior numero entre os dois numeros:\n");
    scanf("%i", &valorInteiro);
    printf("\n Digite um numero qualquer:");
    scanf("%f", &valor1);
    printf("\n Digite mais um numero qualquer:");
    scanf("%f", &valor2);
    printf("\n Digite outro numero qualquer:");
    scanf("%f", &valor3);

switch(valorInteiro)
{
    case 1:
    printf("\n O valor em ordem Crescente: \n%.2f \n%.2f \n%.2f",crescente( valor1, valor2, valor3));

    break;

    case 2:
    printf("\n O valor em ordem Decrescente:");
    break;

    case 3:
    printf("\n O maior numero esta no meio: ");
    break;

}
}

float crescente( float num1, float num2, float num3)
{
    float inteiro;
    if(inteiro = num1 < num2 && num1 < num3 && num2 < num3 && num1 < num3 && num3 < num2 && num2 > num3 && num2 < num1 && num2 < num3 && num1 < num3 && num2 < num3 && num3 < num1 && num1 > num2 && num3 < num1 && num1 < num2 && num2 > num3 && num3 < num2 && num2 < num1 && num1 < num3){
        return inteiro;
    }
}


*/

