#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("4 ex 01\n");

    int n=10;
    int vet1[n], vet2[n];
    int vetR[n];

    for (int i=0; i<n; i++){
    printf ("\ndigite os valores para o vetor 1 [%d]: ", i+1);
    scanf ("%d", &vet1[i]);
    }

    printf ("\n\n");

    for (int j=0; j<n; j++){
    printf ("\ndigite os valores para o vetor 2 [%d]: ", j+1);
    scanf ("%d", &vet2[j]);
    }

    for (int k=0; k<n; k++){
    printf ("\n\na soma do vetor1[%d] e do vetor2[%d] resulta em: %d ", k+1, k+1, vet1[k]+vet2[k]);
    }
    return 0;
}
