#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>



float indiceAumento1(float salario );
float corrigido1 (float aumento, float salarioAtual);

int main()
{
    float  salarioAtual, indiceAumento, corrigidoo;
    int codigo;

    printf("\n Digite sua matricula: \n");
    scanf("%i", &codigo);
    printf("\n Digite seu salario atual: \n");
    scanf("%f", &salarioAtual);


    indiceAumento = indiceAumento1(salarioAtual);
    corrigidoo = corrigido1(indiceAumento,salarioAtual);



    printf("\n A matricula do funcionario eh: %i\n", codigo);
    printf("\n O seu salario atual eh: %.2f\n", salarioAtual);
    printf("\n O valor do salario com o aumento  eh: %.2f\n", corrigidoo );
    printf("\n O indice de aumento foi: %.2f\n",indiceAumento);

}


    float indiceAumento1(float salario )
{

    float indiceDeAumento;

    if( salario < 400){
        indiceDeAumento = 0.15;

            } if((salario > 400.01)&&(salario < 700)){
            indiceDeAumento = 0.12;

                }if((salario > 700.01)&&(salario < 1000)){
                indiceDeAumento = 0.10;

                    } if((salario > 1000.01)&&(salario < 1800)){
                    indiceDeAumento = 0.07;

                        }if((salario > 1800.01)&&(salario < 2500)){
                        indiceDeAumento = 0.04;

                            }if(salario > 2500){
                                printf("\n Sem aumento, seu salario eh maior que 2500:");

                            }

                    return indiceDeAumento;
}

    float corrigido1 (float aumento, float salarioAtual)
    {
        float corrigido;

        corrigido = ((salarioAtual * aumento) + (salarioAtual));

        return corrigido;
    }
