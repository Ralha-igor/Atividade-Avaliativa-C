#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

float premio(float horas);

int main()
{
    char nome [30];
    float qtdHE, qtdHA, total;

    printf("\n Digite o Nome do Funcionario: \n");
    scanf("\n %s", &nome);
    printf("\n Digite a quantidade de Horas Extras do Funcionario\n");
    scanf("\n %f", &qtdHE);
    printf("\n Digite a quantidade de Horas de ausencia do Funcionario \n");
    scanf("\n %f", &qtdHA);

    total = qtdHE - qtdHA;

    printf("\n O nome do funcionario eh: %s", nome);
    printf("\n O valor da sua gratificacao eh: %.2f", premio(total));


   getchar();
   return 0;
}

float premio(float horas)
{

    //horas = qtdHE - (2/3 * (qtdHA));

    if( horas > 2401){
            horas = 500;
                }else if(horas >= 1800 && horas < 2400){
                    horas = 400;
                    } else if( horas >= 1201 && horas < 1800){
                        horas = 300;
                        } else if(horas >= 601 && horas < 1200){
                            horas = 200;
                                } else if(horas < 600){
                                    horas = 100;
                                        } else if (horas < 0){
                                            printf("\n Voce nao recebeu gratificacao \n");

                                }

                    return horas;

}










/*
{

    //horas = qtdHE - (2/3 * (qtdHA));

    if( horas > 2401){
            printf("\n Sua gratificacao eh $500 Reais \n ");
                }else if(horas >= 1800 && horas < 2400){
                    printf("\n Sua gratificacao eh $400 Reais \n");
                    } else if( horas >= 1201 && horas < 1800){
                        printf("\n Sua gratificacao eh $300 Reais \n");
                        } else if(horas >= 601 && horas < 1200){
                            printf("\n Sua gratificacao eh $200 Reais \n");
                                } else if(horas < 600){
                                    printf("\n Sua gratificacao eh $100 Reais \n");
                                }
                    return horas;

}
*/
