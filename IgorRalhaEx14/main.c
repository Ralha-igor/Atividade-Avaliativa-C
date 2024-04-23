#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

float ValorAserPago1(float valorFinal);
float ValorAserPago2(float valorFinal);
float ValorAserPago4(float valorFinal);


int main()
{
    int opcao;
    float precoProduto;

    printf("\n Escolha a forma de pagamento: \n [1] A vista em dinheiro ou cheque 10 porcento de desconto: \n [2] A vista no cartao de credito 5 porcento de desconto: \n [3] Em 2 vezes no cartao de credito preco normal etiqueta sem juros: \n [4] Em 3 vezes no cartao de credito juros de 10 porcento: \n");
    scanf("\n %i", &opcao);
    printf("\n Digite o valor do seu produto: \n");
    scanf("%f", &precoProduto);

    switch(opcao){

case 1:
    printf("\n Voce recebeu um desconto de 10 porcento: ");
    printf("\n O valor a ser pago eh: %.2f", ValorAserPago1(precoProduto));
    break;

case 2:
    printf("\n Voce recebeu um desconto de 5 porcento: ");
    printf("\n O valor a ser pago eh: %.2f", ValorAserPago2(precoProduto));
    break;
case 3:
    printf("\n Voce nao recebeu desconto e nem vai pagar por juros: ");
    printf("\n O valor a ser pago eh: %.2f", precoProduto);
    break;

case 4:
    printf("\n Voce vao pagar um juros de 10 porcento: ");
    printf("\n O valor a ser pago eh: %.2f", ValorAserPago4(precoProduto));
    break;
    }
}


float ValorAserPago1(float valorFinal)
{
    float resultado;

    resultado = valorFinal * 0.10;
    return  valorFinal - resultado;

}

float ValorAserPago2(float valorFinal)
{
    float resultado;

    resultado = valorFinal * 0.05;
    return  valorFinal - resultado;

}

float ValorAserPago4(float valorFinal)
{
    float resultado;

    resultado = valorFinal * 0.10;
    return  valorFinal + resultado;

}
