#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

float calc(float metade);

int main()
{
    float nmr;

    printf("\n Digite um numero: ");
    scanf("%f", &nmr);


    nmr = metade(nmr);
    printf("\n A metade do numero digitado eh: %f\n",nmr);

    return 0;
}

float calc(float metade)

{
        float calcular;

        if (metade > 20){
            calcular = (metade / 2);
            return calcular;
        }
                else{
                    printf("o valor nao eh maior que 20");
                    return 0;

                    }


}
