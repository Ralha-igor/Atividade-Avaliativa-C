#include <stdio.h>
#include <stdlib.h>

void polindromo(int num1,int num2,int num3,int num4,int num5);
int main()
{
    int numero1, numero2,numero3,numero4,numero5;

    printf("\n Digite um numero inteiro :");
    scanf("\n%i", &numero1);
    printf("\n Digite outro numero inteiro :");
    scanf("\n%i", &numero2);
    printf("\n Digite mais um numero inteiro :");
    scanf("\n%i", &numero3);
    printf("\n Digite outro numero inteiro :");
    scanf("\n%i", &numero4);
    printf("\n Digite mais um numero inteiro :");
    scanf("\n%i", &numero5);

    polindromo(numero1,numero2,numero3,numero4,numero5);
}

void polindromo(int num1,int num2,int num3,int num4,int num5)
{

    if(num1 == num5 && num2 == num4 && num3 == num3){
        printf("\n O numero polindromo formado eh: %i%i%i%i%i", num1,num2,num3,num4,num5);
    } else{
    printf("\n Nao eh um numero polindromo!!!");
    }

}


