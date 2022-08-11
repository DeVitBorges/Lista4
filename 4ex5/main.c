#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("ex 05\n");

    int n=10;
    int vetA[n], inf, igual, sup;
    float QparaMedia;

    for (int i=0; i<10; i++){
        printf ("\ndigite o vetor[%d]: ", i+1);
        scanf ("%d", &vetA[i]);
    }

    for (int i=0; i<10; i++){
        if (vetA[i] < 15)
            inf+=vetA[i];
    }

    for (int i=0; i<10; i++){
        if (vetA[i] == 15)
            igual++;
    }

    for (int i=0; i<10; i++){
        if (vetA[i] > 15)
            sup+=vetA[i];

    }

    for (int i=0; i<10; i++){
        if (vetA[i] > 15)
            QparaMedia++;
    }

    printf ("\n\nsoma dos inferiores a 15: %d", inf);
    printf ("\niguais a 15: %d", igual);
    printf ("\nmedia dos maiores que 15: %f\n", sup/QparaMedia);

    return 0;
}
