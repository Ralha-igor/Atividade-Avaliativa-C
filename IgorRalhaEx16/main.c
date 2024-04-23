#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void calc(float a,float b,float c);
int main()
{
    float a, b, c;


    printf("\n Digite o valor de A: ");
    scanf("\n%f",& a);
    printf("\n Digite o valor de B: ");
    scanf("\n%f",& b);
    printf("\n Digite o valor de C: ");
    scanf("\n%f",& c);



    calc(a,b,c);

}

void calc(float a, float b, float c)
{
    float potencia, equacao, valorX, valorX2;

    potencia = pow(a, 2);
    equacao = (potencia - 4 * a * c);

    if(equacao > 0 ){
        valorX = ( -b + sqrt(equacao))/(2 * a);
        valorX2 = ( -b - sqrt(equacao))/(2 * a);
        printf("\n As equacoes das raizes reais sao: %.2f, %.2f", valorX, valorX);
            } else {
            printf("\n As equacao  das raizes nao existe");



    return equacao;

}
}


//https://brasilescola.uol.com.br/matematica/equacao-2-grau.htm
//https://comocalcular.com.br/matematica/equacao-do-2-grau/
