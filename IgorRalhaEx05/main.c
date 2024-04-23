#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int calcularD(int horaInicio, int minutoInicio, int horaTermino, int minutoTermino);

int main() {
    int horaInicio, minutoInicio, horaTermino, minutoTermino;


    printf("\n Digite a hora de inicio (hora minuto): ");
    scanf("%d %d", &horaInicio, &minutoInicio);

    printf("Digite a hora de termino (hora minuto): ");
    scanf("%d %d", &horaTermino, &minutoTermino);

    calcularD(horaInicio, minutoInicio, horaTermino, minutoTermino);
}


int calcularD(int horaInicio, int minutoInicio, int horaTermino, int minutoTermino)


{
    int duracaoHoras, duracaoMinutos;

    duracaoHoras = horaTermino - horaInicio;
    duracaoMinutos = minutoTermino - minutoInicio;


    if (duracaoMinutos < 0) {
        duracaoHoras--;
        duracaoMinutos += 60;
        } if (duracaoHoras < 0) {
        duracaoHoras += 24;
    }
    printf("Duracao do jogo: %d horas e %d minutos\n", duracaoHoras, duracaoMinutos);
}


//https://www.youtube.com/watch?v=xkvbHf-TnVA
//https://www.youtube.com/@progdescomplicada






















