#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("4 ex 01\n");

    int n=8;
    int vetA[n], vetB[n];

    for (int i=0; i<n; i++){
    printf ("\ndigite os valores para o vetor A[%d]: ", i+1);
    scanf ("%d", &vetA[i]);
    }

    printf ("\n\n");

    for (int k=0; k<n; k++){
    vetB[k] = vetA[k]*2;
    printf ("\nvetor B[%d]: %d\n", k+1, vetB[k]);
    }
    return 0;
}
