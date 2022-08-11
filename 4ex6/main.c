#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("ex 06\n");

    int vetorA[10], menor, maior;

    for (int i=0; i<10; i++){
    printf ("\ninsira a idade da pessoa[%d]: ", i+1);
    scanf ("%d", &vetorA[i]);
    }

    menor = vetorA[0];
    maior = vetorA[0];

    for (int i=0; i<10; i++){
       if(menor > vetorA[i]){
        menor = vetorA [i];
       }

       if (maior < vetorA[i]){
        maior = vetorA [i];
       }

    }

    printf ("\nmenor idade: %d \nmaior idade: %d", menor, maior);

    return 0;
}
