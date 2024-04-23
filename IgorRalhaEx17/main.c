#include <stdio.h>
#include <stdlib.h>

void verificar1(int numero);
void verificar2(int numero);
void verificar3(int numero);
void verificar4(int numero);

void main()
{
    int num1,num2,num3,num4;

    printf("\n Digite um numero inteiro: \n");
    scanf("\n%i", &num1);
    printf("\n Digite outro numero inteiro: \n");
    scanf("\n%i", &num2);
    printf("\n Digite mais um numero inteiro: \n");
    scanf("\n%i", &num3);
    printf("\n Digite outro numero inteiro: \n");
    scanf("\n%i", &num4);

verificar1(num1);



}
     void verificar1(int numero)
{
    if(numero  % 2 == 0){
        printf("\n O numero %i eh divisivel por 2\n\n", numero);

    }else {
        printf(" O numero %i nao eh divisivel por 2\n\n",numero);


    }

    if ( numero % 3 == 0){
        printf("\n O numero %i divisivel por 3\n\n", numero);
    }else {
        printf("\n O numero %i nao eh divisivel por 3\n\n", numero);
    }
}

void verificar2(int numero)
{
    if(numero  % 2 == 0){
        printf("\n O numero %i eh divisivel por 2\n\n", numero);
    }else {
        printf("\n O numero %i nao eh divisivel por 2\n\n", numero);
    }

    if (numero % 3 == 0){
        printf("\n O numero %i eh divisivel por 3\n\n", numero);
    }else {
        printf("\n O numero %i nao eh divisivel por 3\n\n");
    }
}

void verificar3(int numero)
{
    if(numero  % 2 == 0){
        printf("\n O numero %i eh divisivel por 2\n\n", numero);
    }else {
        printf("\n O numero %i nao eh divisivel por 2\n\n",numero);
    }

    if (numero % 3 == 0){
        printf("\n O numero %i divisivel por 3\n\n", numero);
    }else {
        printf("\n O numero %i nao eh divisivel por 3\n\n");
    }
}

void verificar4(int numero)
{
    if(numero  % 2 == 0){
        printf("\n O numero %i eh divisivel por 2\n\n", numero);
    }else {
        printf("\n O numero %i nao eh divisivel por 2\n\n",numero);
    }

    if (numero % 3 == 0){
        printf("\n O numero %i divisivel por 3\n\n", numero);
    } else {
        printf("\n O numero %i nao eh divisivel por 3\n\n");
    }
}
