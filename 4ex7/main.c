#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("ex 07\n");

    int vetR[5], vetS[10], vetX[5], n=0;

    for (int i=0; i<5; i++){
    printf ("\nVetorR[%d]: ", i+1);
    scanf ("%d", &vetR[i]);
    }
    for (int i=0; i<10; i++){
    printf ("\nVetorS [%d]: ", i+1);
    scanf ("%d", &vetS[i]);
    }

        for (int i=0; i<5; i++){
            for (int j=0; j<10; j++){
                if (vetR[i] == vetS[j]){
                    vetX[n] = vetR[i];
                    n++;

                }
            }
        }
    for (int k=0; k<n; k++){
        printf ("\n\nVetK[%d]:%d", k+1, vetX[k]);
    }
       return 0;
}
