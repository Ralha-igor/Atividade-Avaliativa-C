#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main ()
{

    int opcao;

    printf("\n Digite uma opcao: \n [1] Janeiro: \n [2] fevereiro: \n [3] marco: \n [4] Abril: \n [5] Maio: \n [6] Junho: \n [7] Julho: \n [8] Agosto: \n [9] Setembro:\n [10] Outubro: \n [11] Novembro: \n [12] Dezembro: \n ");
    scanf("%i", & opcao);

    switch(opcao)
    {


        case 1:{
        printf("\n Voce escolheu Janeiro");
        break;
        }
        case 2:{
        printf("\n Voce escolheu fevereiro");
        break;
        }
        case 3: {
        printf("\n Voce escolheu marco");
        break;
        }
        case 4: {
        printf("\n Voce escolheu Abril");
        break;
        }
        case 5:{
        printf("\n Voce escolheu Maio");
        break;
        }
        case 6:{
        printf("\n Voce escolheu Junho");
        break;
        }
        case 7: {
        printf("\n Voce escolheu Julho");
        break;
        }
        case 8: {
        printf("\n Voce escolheu Agosto");
        break;
        }
        case 9: {
        printf("\n Voce escolheu Setembro");
        break;
        }
        case 10: {
        printf("\n Voce escolheu Outubro");
        break;
        }
        case 11: {
        printf("\n Voce escolheu Novembro");
        break;
        }
        case 12: {
        printf("\n Voce escolheu Dezembro");
        break;
        }
        default: {
        printf("\n Opcao invalida, escolha entre 1 e 12");
        break;
        }


        getchar();
        return 0;
    }

}
