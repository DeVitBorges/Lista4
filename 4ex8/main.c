#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("ex 07\n");

    int aposta[5], resul[10], acertos[5], n=0;

    for (int i=0; i<5; i++){
    printf ("\naposta[%d]: ", i+1);
    scanf ("%d", &aposta[i]);
    }
    for (int i=0; i<10; i++){
    printf ("\nresul [%d]: ", i+1);
    scanf ("%d", &resul[i]);
    }

        for (int i=0; i<5; i++){
            for (int j=0; j<10; j++){
                if (aposta[i] == resul[j]){
                    acertos[n] = aposta[i];
                    n++;

                }
            }
        }

        printf ("\n\nAcertos na Loto: %d\n\n", n);

       return 0;
}
