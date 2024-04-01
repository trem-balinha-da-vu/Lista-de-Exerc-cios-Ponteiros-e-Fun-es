//--------------------------------------------------------------------
/**
 * Implemente uma função que receba como parâmetro um array de números reais de  ́
 * tamanho N e retorne quantos números negativos há nesse array. Essa função deve  ̃ ter
 * o seguinte protótipo:
 *      
 *          int negativos(float *vet, int N);
*/

#include <stdio.h>
#include <stdlib.h>

int negativos(float *vet, int N) {
    int count = 0;

    for (int i = 0; i < N; i++) {
        printf("%.2f \n", vet[i]);
        if (vet[i] < 0) {
            count++;
        }
    }

    return count;
}

int main() {
    float *array;
    int tam;

    printf("Informe o tamanho do array: \n");
    scanf("%d", &tam);
    
    array = (float *) malloc(tam * sizeof(float));

    for ( int i = 0; i < tam; i++)
    {
        printf("\nInforme o valor para a posição [%d] do vetor: ", i);
        scanf("%f", &array[i]);
    }

    int negativos_count = negativos(array, tam);

    printf("Numero de numeros negativos no array: %d\n", negativos_count);

    free(array);

    return 0;
}
