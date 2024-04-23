#include <stdio.h>
#include <stdlib.h>

void funcionario(int codigo1,int codigo2,int codigo3);
void idade(int idade1,int idade2,int idade3);
void sexo(char sexo1,char sexo2,char sexo3);
void salario(float salario1,float salario2,float salario3);

int main()
{
    int cod1, cod2, cod3;
    int idade1,idade2,idade3;
    float salario1,salario2,salario3;
    char nome1[50],nome2[50],nome3[50];
    char sexo1[50],sexo2[50],sexo3[50];

    int verificar;

    printf("\n Digite o codigo do Primeiro funcionario:\n ");
    scanf("\n%i",& cod1);
    printf("\n Digite o nome do funcionario:\n  ");
    scanf("\n%s",& nome1);
    printf("\n Digite a idade do funcionario:\n ");
    scanf("\n%i",& idade1);
    printf("\n Digite o sexo do funcionario:\n ");
    scanf("\n%s",&sexo1);
    printf("\n Digite o salario do funcionario:\n ");
    scanf("\n%f", &salario1);

    printf("\n Digite o codigo do Segundo funcionario:\n ");
    scanf("\n%i",& cod2);
    printf("\n Digite o nome do funcionario:\n  ");
    scanf("\n%s",& nome2);
    printf("\n Digite a idade do funcionario:\n ");
    scanf("\n%i",& idade2);
    printf("\n Digite o sexo do funcionario:\n ");
    scanf("\n%s",&sexo2);
    printf("\n Digite o salario do funcionario:\n ");
    scanf("\n%f", &salario2);

    printf("\n Digite o codigo do terceiro funcionario\n: ");
    scanf("\n%i",& cod3);
    printf("\n Digite o nome do funcionario\n:  ");
    scanf("\n%s",& nome3);
    printf("\n Digite a idade do funcionario\n: ");
    scanf("\n%i",& idade3);
    printf("\n Digite o sexo do funcionario\n: ");
    scanf("\n%s",&sexo3);
    printf("\n Digite o salario do funcionario\n: ");
    scanf("\n%f", &salario3);


    funcionario(cod1, cod2, cod3);
    idade(idade1,idade2,idade3);
    salario(salario1,salario2,salario3);


}

void funcionario(int codigo1, int codigo2, int codigo3)
{

    if(codigo1 < 100 && codigo2 < 100 && codigo3 < 100){
        printf("\n todos os funcionarios tem o codigo inferior a 100: \n%i\n%i\n%i\n", codigo1, codigo2, codigo3);
    } else if ( codigo1 < 100 && codigo2 < 100 && codigo3 > 100){
        printf("\n O ultimo funcionario tem o codigo superior a 100, o codigo dos outros dois eh: \n%i \n%i\n:\n ", codigo1, codigo2);
        }else if ( codigo1 < 100 && codigo2 > 100 && codigo3 > 100){
             printf("\n Os dois ultimo funcionario tem o codigo superior a 100, o codigo do primeiro funcionario eh: \n%i\n:\n ", codigo1);
            }else if ( codigo1 > 100 && codigo2 > 100 && codigo3 > 100){
                 printf("\n Todos os codigos sao superiores a 100 \n%i \n%i \n%i: \n", codigo1, codigo2, codigo3);
                }else if ( codigo1 > 100 && codigo2 < 100 && codigo3 < 100){
                     printf("\n O primeiro funcionario tem o codigo superior a 100, os outros dois eh sao inferiores : \n%i \n%i\n:\n ", codigo2, codigo3);
                    }else if ( codigo1 < 100 && codigo2 > 100 && codigo3 < 100){
                         printf("\n O Segundo funcionario tem o codigo superior a 100, o codigo dos outros dois eh: \n%i \n%i:\n", codigo1, codigo3);
                        }else if ( codigo1 > 100 && codigo2 > 100 && codigo3 < 100){
                             printf("\n  O primeiro e o segundo sao superiores a 100, O ultimo funcionario tem o codigo inferior a 100: \n%i\n:\n", codigo3);

}
}

void idade(int idade1, int idade2, int idade3)
{

    if(idade1 > 60 && idade2 > 60 && idade3 > 60){
        printf("\n todos os funcionarios tem a idade superior a 60: \n%i\n%i\n%i\n", idade1, idade2, idade3);
    } else if ( idade1 < 60 && idade2 < 60 && idade3 < 60){
        printf("\n todos os funcionarios tem a idade inferior a 60: \n%i\n%i\n%i\n", idade1, idade2, idade3);
        }else if ( idade1 < 60 && idade2 > 100 && idade3 > 100){
             printf("\n O primeiro funcionario tem a idade inferior a 60, o segundo e o terceiro funcionario sao superiores a 60: \n%i\n%i: \n", idade2, idade3);
            }else if ( idade1 < 60 && idade2 < 60 && idade3 > 60){
                 printf("\n O dois primeiros funcionarios tem a idade inferior a 60, o ultimo funcionario eh superior a 60  \n%i:\n ",  idade3);
                }else if ( idade1 > 60 && idade2 < 60 && idade3 > 60){
                     printf("\n O Segundo funcionario tem a idade inferior a 60, os outros dois eh sao superiores a 60 : \n%i \n%i: \n", idade1, idade3);
                    }else if ( idade1 > 60 && idade2 > 60 && idade3 < 60){
                         printf("\n O ultimo funcionario tem a idade inferior a 60, O primeiro e o segundo tem a idade superior a 60: \n%i \n%i: \n", idade1, idade2);
                        }else if ( idade1 > 60 && idade2 < 60 && idade3 < 60){
                             printf("\n  O primeiro funcionario tem a idade superior a 60, O Segundo funcionario e o terceiro tem a idade inferior a 60: \n%i\n%i:\n ", idade2,idade3);

}
}

void sexo(char sexo1,char sexo2,char sexo3)
{

}

void salario(float salario1,float salario2,float salario3)
{

     if(salario1 >= 1001 && salario1 <= 2000 && salario2 >= 1001 && salario2 <= 2000 && salario3 >= 1001 && salario3 <=2000){
        printf("\n todos os funcionarios tem o salario entre $1000 Reais e $2000 Reais %f\n %f\n %f\n", salario1, salario2, salario3);
    } else if (salario1 <= 1000  && salario2 <= 1000 && salario3 <= 1000 ){
        printf("\n todos os funcionarios tem o salario menor que $1000: \n %f\n%f \n%f \n", salario1, salario2, salario3);
            }else if (salario1 <= 1000  && salario2 <= 1000 && salario3 >= 1001 && salario3 <= 2000 ){
            printf("\n O funcionario 3 tem um salario entre $1000 e $2000. O salario do funcionario 3 eh: %f \n", salario3);
                }else if (salario1 <= 1000  && salario2 >= 1001 && salario2 <= 2000 && salario3 >= 1001 && salario3 <= 2000 ){
                printf("\n O funcionario 2 e o funcionario 3 tem um salario entre $1000 e $2000. O salario dos funcionario  eh: %f\n%f\n ", salario2,salario3);
                   } else if (salario1 >= 1001 && salario1 <= 2000 && salario2 >= 1001 && salario2 <=2000 && salario3 <= 1000 ){
                    printf("\n Os funcionarios 1 e 2 tem um salario entre $1000 e $2000. O salario dos funcionarios  eh: %f\n%f\n ", salario1, salario2);
                   } else if (salario1 >= 1001 && salario1 <= 2000 && salario2 < 1000  && salario3 >= 1001 &&salario3 <=2000){
                    printf("\n Os funcionarios 1 e 3 tem um salario entre $1000 e $2000. O salario dos funcionarios  eh: %f\n%f\n ", salario1, salario3);
                     }   else if (salario1 >= 1001  && salario1 <= 2000 && salario2 <= 1000 && salario3 <= 1000 ){
                        printf("\n O funcionario 1 tem um salario entre $1000 e $2000. O salario do funcionario 1 eh: %f \n", salario1);
                     }
}
