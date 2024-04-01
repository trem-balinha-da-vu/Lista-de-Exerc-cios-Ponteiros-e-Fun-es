//-------------------------------------------------------------
/**
 * Escreva uma função mm que receba um vetor inteiro v[0..n-1] e os endereços de duas
 * variáveis inteiras, digamos min e max, e deposite nessas variáveis o valor de um
 * elemento mínimo e o valor de um elemento máximo do vetor. Escreva também uma
 * função main que use a função mm.
*/
//-------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>

void mm (int *vetor, int *min, int *max, int tam)
{
    *min = vetor[0];
    *max = vetor[0];

    for (int i = 0; i < tam; i++)
    {
        if (vetor[i] < *min) *min = vetor[i];
        if (vetor[i] > *max) *max = vetor[i];
    }
    
}

int main()
{
    int min, max, tam, *vetor;

    printf("Informe o tamanho do vetor: \n");
    scanf("%d", &tam);

    vetor = (int *) malloc (tam * sizeof(int));

    for (int i = 0; i < tam; i++)
    {
        printf("Informe a posicao [%d] do vetor: ", i);
        scanf("%d", &(*(vetor + i)));
    }

    mm(vetor, &min, &max, tam);

    printf("\n\t NUMERO MINIMO: %d\n", min);
    printf("\t NUMERO MAXIMO: %d\n\n", max);

    free(vetor);

    return 0;

}