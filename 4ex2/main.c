#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("4 ex 2\n");

    int vetor[20];
    int pares = 0, impares=0, maiores=0, menores=0;

    for (int i=0; i<20; i++){
    printf ("\ndigite os valores para o vetor[%d]: ", i+1);
    scanf ("%d", &vetor[i]);
    }

    for (int i=0; i<20; i++){
    if (vetor[i] % 2 == 0)
        pares++;
    }

    for (int i=0; i<20; i++){
        if (vetor[i] % 2 != 0)
            impares++;
    }

    for (int i=0; i<20; i++){
        if (vetor[i] > 50)
            maiores++;
    }

    for (int i=0; i<20; i++){
        if (vetor[i] < 7)
            menores++;
    }
    printf ("\n\nQ de pares: %d\nQ de impares: %d\nQ de maiores que 50: %d\nQ de menores que 7: %d\n", pares, impares, maiores, menores);
    return 0;
}
