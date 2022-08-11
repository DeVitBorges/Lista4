#include <stdio.h>
#include <stdlib.h>

int main() {



    int min, aux, n;

    printf ("\nnumero de vetores: ");
    scanf ("%d", &n);
    int vetor[n];

    for (int i=0; i<n; i++){
        printf ("\ndifite o vetor[%d]: ", i+1);
        scanf ("%d", &vetor[i]);
    }

    for(int inicio=0; inicio<n; inicio++){


        min = inicio;
        for(int j=inicio+1; j<n; j++){
            if(vetor[min] > vetor[j]) {
                min = j;
            }
        }

        aux = vetor[inicio];
        vetor[inicio] = vetor[min];
        vetor[min] = aux;
    }

    for(int i=0;i<n;i++) {
        printf("\n  %d\n ", vetor[i]);
    }
    return 0;
}
