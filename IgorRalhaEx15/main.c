#include <stdio.h>
#include <stdlib.h>

int meses(idade);
int dias(idade);

int main()
{
    int idade;

   printf("\n Digite sua idade em anos: \n");
   scanf("%i", &idade);


   printf("\n Sua idade em meses eh: %i ",meses(idade));
   printf("\n Sua idade em dia eh: %i",dias(idade));
}

int meses(idade)

{
    int resultado;
    resultado = idade * 12;
    return resultado;
}

int dias(idade)

{

    int resultado;
    resultado = idade * 360;
    return resultado;

}
