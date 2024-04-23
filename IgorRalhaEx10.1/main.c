#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

float calcular1(float produto1);
float calcular2(float produto2);
float calcular3(float produto3);
float calcular4(float produto4);

int main()
{
   float prod1, prod2,prod3,prod4;
   char nomeProduto1 [40],nomeProduto2 [40],nomeProduto3 [40],nomeProduto4[40];


    printf("\n Digite o valor do produto 1: ");
    scanf("\n%f", &prod1);
    printf("\n Digite o valor do produto 2: ");
    scanf("\n%f", &prod2);
    printf("\n Digite o valor do produto 3: ");
    scanf("\n%f", &prod3);
    printf("\n Digite o valor do produto 4: ");
    scanf("\n%f", &prod4);
    printf("\n Digite o nome do produto 1 : ");
    scanf("\n%s", &nomeProduto1);
    printf("\n Digite o nome do produto 2 : ");
    scanf("\n%s", &nomeProduto2);
    printf("\n Digite o nome do produto 3 : ");
    scanf("\n%s", &nomeProduto3);
    printf("\n Digite o nome do produto 4 : ");
    scanf("\n%s", &nomeProduto4);


   printf("\n O valor do produto 1 com desconto e o nome eh: %f   %s",calcular1(prod1),nomeProduto1 );
   printf("\n O valor do produto 2 com desconto e o nome eh: %f   %s",calcular2(prod2),nomeProduto2);
   printf("\n O valor do produto 3 com desconto e o nome eh: %f   %s",calcular3(prod3),nomeProduto3);
   printf("\n O valor do produto 4 com desconto e o nome eh: %f   %s",calcular4(prod4),nomeProduto4);

}

   float calcular1(float produto1)
{
    float valorDesconto;
    if(produto1 < 10){
    valorDesconto = (produto1 * 0.70);
    }else if((produto1 >=10)&&(produto1 < 30)){
        valorDesconto = (produto1 * 0.50);
    }else if((produto1 >= 30)&&(produto1 < 50)){
        valorDesconto = (produto1 * 0.40);
    }else if(produto1 >= 50){
        valorDesconto = (produto1 * 0.30);
    }

    return  valorDesconto;
}
//produto1 -


   float calcular2(float produto2)
{
     float valorDesconto;
    if(produto2 < 10){
    valorDesconto = (produto2 * 0.70);
    }else if((produto2 >=10)&&(produto2 < 30)){
        valorDesconto = (produto2 * 0.50);
    }else if((produto2 >= 30)&&(produto2 < 50)){
        valorDesconto = (produto2 * 0.40);
    }else if(produto2 >= 50){
        valorDesconto = (produto2 * 0.30);
    }

    return  valorDesconto;
}
//produto2 -
     float calcular3( float produto3)
{
    float valorDesconto;
    if(produto3 < 10){
    valorDesconto = (produto3 * 0.70);
    }else if((produto3 >=10)&&(produto3 < 30)){
        valorDesconto = (produto3 * 0.50);
    }else if((produto3 >= 30)&&(produto3 < 50)){
        valorDesconto = (produto3 * 0.40);
    }else if(produto3 >= 50){
        valorDesconto = (produto3 * 0.30);
    }

    return  valorDesconto;
}
//produto3 -
    float calcular4(float produto4)
{
    float valorDesconto;
    if(produto4 < 10){
    valorDesconto = (produto4 * 0.70);
    }else if((produto4 >=10)&&(produto4 < 30)){
        valorDesconto = (produto4 * 0.50);
    }else if((produto4 >= 30)&&(produto4 < 50)){
        valorDesconto = (produto4 * 0.40);
    }else if(produto4 >= 50){
        valorDesconto = (produto4 * 0.30);
    }

    return  valorDesconto;
}
//produto4 -






























/*
 int opcao;
    float valorProduto;

    printf("\n O que voce deseja comprar: \n [1] Farinha $6 Reais: \n [2] Feijao $15 Reais: \n [3] Arroz $25 Reais: \n [4] Picanha $60 reais o Kg: \n");
    scanf("\n%i", & opcao);


    switch(opcao){
    case 1:{
            valorProduto = 6;
            printf("\n O produto escolhido foi: Farinha");
            printf("\n Voce ganhou um desconto de: 70 Porcento");
            printf("\n O valor com o desconto eh: %f", calcular1(valorProduto));
        break;
        }
        case 2: {
            valorProduto = 15;
            printf("\n O produto escolhido foi: Feijao");
            printf("\n Voce ganhou um desconto de: 50 Porcento");
            printf("\n O valor com o desconto eh: %f", calcular2(valorProduto));
            break;
        }
        case 3:{
            valorProduto = 25;
            printf("\n O produto escolhido foi: Arroz");
            printf("\n Voce ganhou um desconto de: 40 Porcento");
            printf("\n O valor com o desconto eh: %f", calcular3(valorProduto));
            break;
        }
        case 4:{
            valorProduto = 60;
            printf("\n O produto escolhido foi: Picanha");
            printf("\n Voce ganhou um desconto de: 30 Porcento");
            printf("\n O valor com o desconto eh: %f", calcular4(valorProduto));
            break;
            }
            default:{}
            printf("\n Nao temos esse produto, escolha entre Farinha, Feijao, Arroz ou Picanha ");
            break;
    }
}

    float calcular1(produto1)

    {
        float valorDesconto;
        valorDesconto = produto1 * 0.70;
        return produto1 - valorDesconto;
    }

    float calcular2(produto2)

    {
     float valorDesconto;
        valorDesconto = produto2 * 0.50;
        return produto2 - valorDesconto;
    }

    float calcular3(produto3)

    {
    float valorDesconto;
    valorDesconto = produto3 * 0.40;
    return produto3 - valorDesconto;
    }

    float calcular4(produto4)

    {
    float valorDesconto;
    valorDesconto = produto4 * 0.30;
    return produto4 - valorDesconto;
    }


*/
