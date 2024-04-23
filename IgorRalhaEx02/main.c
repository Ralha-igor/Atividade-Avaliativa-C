#include <stdio.h>
#include <stdlib.h>

float trocar(float num1,float num2);

int main()
{
    float numero1, numero2, receber;

    printf("\n Digite o valor de um numero: \n");
    scanf("\n%f", &numero1);
    printf("\n Digite o valor de outro numero: \n");
    scanf("\n%f", &numero2);

    receber = trocar(numero2,numero1);
    if (receber != 0 ){
        printf("\n Os valores foram invertidos: Primeiro Numero digitado eh: %2.f", receber);
    }
}

float trocar(float num1,float num2)

{
    if (num1 < num2){
        num2 = num1;
        return (num1);
    } else{
        (num2 > num1);
        printf("valores nao foram trocados");
        return (0);
    }

}



/*else {
    printf("valores nao foram trocados: ");
    }
*/


/*int verificar(int num1, int aux);
//int verificar2(int num2, int aux);
int main()
{
    int num1, num2, receber;

    printf("\n Digite o valor de um numero: \n");
    scanf("\n%i", &num1);
    printf("\n Digite o valor de outro numero: \n");
    scanf("\n%i", &num2);
    receber = verificar(num1,num2);
    printf("\n Os valores foram invertidos: Primeiro Numero eh: %i, Segundo Numero eh: %i", receber);
}
int verificar(int num1, int aux){
*/
/*if (num1 > 0){
        num1 = aux;
    return (aux, num1);
} else{
return (num1,aux);}
}
*/
