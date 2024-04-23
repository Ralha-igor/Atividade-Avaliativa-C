#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

int calc(int data);

int main()
{
    int data;

    printf("\n Digite uma data em DDMMAAAA: ");
    scanf("\n%i", &data);

    data = calc(data);
}

int calc(int data)
{
    int dia, mes,ano;

    dia = (data / 1000000) %100;
    mes = (data / 10000)%100;
    ano = data % 10000;

    printf("\n A data em DD/MM/AAAA eh: %02d/%02d/%02d.\n", dia,mes,ano);

    return 0;
}


//https://pt.stackoverflow.com/questions/521634/como-converter-ddmmaaaa-para-dd-mm-aaaa-em-c
//https://rafaelomarques.wordpress.com/2010/08/28/validacao-de-data-em-cc/
