#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>


float crescer(float charlie);

int main()
{
float retornar;

retornar = crescer(retornar);

printf("\n Bob nao passou Charlie, essa eh a nova altura de Charlie %.2f ",retornar );

}

float crescer(float charlie)
{

     charlie = 1.50;
    float bob = 1.10;

    charlie = charlie + (0.0210 * 13);
    bob = bob + (0.0250  * 15);
    if(charlie > bob){
        return charlie;
    } else if(charlie < bob){
        printf("\n Bob passou o Charlie, essa eh a nova altura de Bob %.2f \n\n  eh essa eh a nova altura de Charlie %.2f \n\n", bob, charlie);
    }

}







