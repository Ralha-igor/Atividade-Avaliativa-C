#include <stdio.h>
#include <stdlib.h>

float pequeno(float taxa2, float valorCarro);
float medio(float taxa2, float valorCarro);
float grande(float taxa2, float valorCarro);

int main()

{
    int  regiao;
    float  valorVeiculo, tipoDeCarro;




    printf("\n Digite a regiao onde sera licenciado: \n [1] Norte Nordeste: \n [2] Sul e Centro Oeste: \n [3] Sudeste (Exceto Sao Paulo e Rio De Janeiro): \n [4] Sao Paulo: \n [5] Rio de Janeiro: \n  \n");
    scanf("\n%i", &regiao);

    printf("\n Digite o valor do carro\n");
    scanf("\n%f", &valorVeiculo);

    printf("\n Digite o tipo de carro que deseja pegar: \n");
    scanf("\n%f", &tipoDeCarro);


    switch(regiao){

case 1:

    printf("\n O valor do Seguro do carro do porte pequeno eh: %.2f \n", pequeno(valorVeiculo,regiao));
    printf("\n O valor do Seguro do carro do porte medio eh: %.2f \n", medio(valorVeiculo,regiao));
    printf("\n O valor do Seguro do carro do porte grande eh: %.2f \n", grande(valorVeiculo, regiao));
    break;
case 2:
   printf("\n O valor do Seguro do carro do porte pequeno eh: %.2f \n", pequeno(valorVeiculo,regiao));
    printf("\n O valor do Seguro do carro do porte medio eh: %.2f \n", medio(valorVeiculo,regiao));
    printf("\n O valor do Seguro do carro do porte grande: %.2f \n", grande(valorVeiculo, regiao));
    break;
case 4:
   printf("\n O valor do Seguro do carro do porte pequeno eh: %.2f \n", pequeno(valorVeiculo,regiao));
    printf("\n O valor do Seguro do carro do porte medio eh: %.2f \n", medio(valorVeiculo,regiao));
    printf("\n O valor do Seguro do carro  do porte grande: %.2f \n", grande(valorVeiculo, regiao));
    break;
case 5:
  printf("\n O valor do Seguro do carro do porte pequeno eh: %.2f \n", pequeno(valorVeiculo,regiao));
    printf("\n O valor do Seguro do carro do porte medio eh: %.2f \n", medio(valorVeiculo,regiao));
    printf("\n O valor do Seguro do carro do porte grande eh: %.2f \n", grande(valorVeiculo, regiao));
    break;
default:
        printf("opcao invalida!! \n\n");
        break;

}
}

float pequeno(float taxa2, float valorCarro)

{
    float  ValorS, taxa1 = 0.08;
    //float taxa1 = 0.08 ;

        ValorS = ((taxa1 + taxa2) * valorCarro)/12;
        // calculando valor da franqua
        //verificando se a franquia e menor que 300
        if (ValorS <= 300){
            printf(" O valor da franquia eh: $400 Reais ");
        }else if(ValorS >= 301 && ValorS <= 500){
        printf(" O valor da franquia eh: $600 Reais ");
        }else if( ValorS > 800) {
        printf("\n O valor da franquia eh: $800 Reias");
        }
        return ValorS;
}


float medio(float taxa2, float valorCarro)

{
    float  ValorS, taxa1;
    //float taxa1 = 0.12;

        ValorS = (((taxa1 = 0.12) + taxa2) * valorCarro)/12;


        if (ValorS <= 300){
            printf(" O valor da franquia eh: $400 Reais ");
        }else if(ValorS >= 301 && ValorS <= 500){
        printf(" O valor da franquia eh: $600 Reais ");
        }else {
        printf("\n O valor da franquia eh: $800 Reias");
        }
        return ValorS;
}


float grande(float taxa2, float valorCarro)

{
    float  ValorS, taxa1;
    //float taxa1 = 0.10;


        ValorS = (((taxa1 = 0.10) + taxa2) * valorCarro)/12;

        if (ValorS <= 300){
        printf(" O valor da franquia eh: $400 Reais ");
        } else if(ValorS >= 301 && ValorS <= 500){
        printf(" O valor da franquia eh: $600 Reais ");
        }else {
        printf("\n O valor da franquia eh: $800 Reias");
        }
        return ValorS;
}


else if (num2 > num3 && num2 > num1 && num1 < num3){
                            printf("\n O valor em ordem crescente: %f\n %f\n %f\n", num1,num2,num3);

