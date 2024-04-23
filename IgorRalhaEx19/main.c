#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>



int main()
{
    int num1,num2,num3,numeroDigitado;

    printf("\n Digite um numero de 4 digitos para conferir se tem a mesma caracteristica: \n");
    scanf("\n%i", &numeroDigitado);

    num1 = 3025;
    num2 = 2025;
    num3 = 9801;



    if(numeroDigitado == num1){
        printf("\n O numero inserido possuia mesma caracteristica: %i",num1);
            }else if(numeroDigitado == num2){
                printf("\n O numero inserido possuia mesma caracteristica: %i",num2);
                    }else if(numeroDigitado == num3){
                        printf("\n O numero inserido possuia mesma caracteristica: %i", num3);
                            } else if( numeroDigitado <! num1|| numeroDigitado >! num2 || numeroDigitado <! num3) {
                                printf("\n O numero nao tem a mesma caracteristica!!");
                                }

return 0;
}


/*foi feito varios calculos de base 2 para tentar achar combina��es de 4 digitos que teria a mesma caracteristica, fiz algumas pesquisas para tentar relacionar a mesma caracteristica e
nao achei, foi uma das formas que consegui desenvolver o exercicio, como observado logo abaixo tentei fazer somando os dois primeiros numero mas nao tive sucesso por isso optei por
fazer com os resultados prontos e nao pelo intervalo de tempo dos numeros.*/














/*
int main()
{
    int a,b,c,d,aux1,aux2,resultado,potencia;

    printf("\n Digite o valor de A:  ");
    scanf("\n%i", & a);
    printf("\n Digite o valor de B:  ");
    scanf("\n%i", & b);
    printf("\n Digite o valor de C:  ");
    scanf("\n%i", & c);
    printf("\n Digite o valor de D:  ");
    scanf("\n%i", & d);


    aux1 = a + b;
    aux2 = c + d;

    resultado = aux1 + aux2;
    potencia = pow(resultado, 2);


    if(potencia == resultado){
        printf("\n Os numero informados contem a mesma caracteristica: %02i%02i%02i%02i", resultado);
    } else{
    printf("\n Os numero nao contem a mesma caracteristica!!");
    }
    return 0;
}
*/
