#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("ex 09\n");

    int vetorD[10], vetorP[10], j=0;

    for (int i=0; i<10; i++){
        printf ("\nindique o valor do vetor[%d]: ", i+1);
        scanf ("%d", &vetorD[i]);

            if (vetorD[i] > 0){
                vetorP[j] = vetorD[i];
                j++;
            }
        }

        for (int i=0; i<j; i++){
        printf ("\n numeros positivos: %d", vetorP[i]);
        }

    return 0;
}
