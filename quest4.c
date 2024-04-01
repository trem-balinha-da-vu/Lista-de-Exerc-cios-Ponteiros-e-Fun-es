//-----------------------------------------------------------------
/**
 * Escreva uma função em c que escreva em um vetor a soma dos elementos
 * correspondentes de outros dois vetores (os tamanhos dos vetores devem ser fornecidos
 * pelo usuário). Por exemplo, se o primeiro vetor contiver os elementos 1, 3, 0 e -2, e o
 * segundo vetor contiver os elementos 3, 5, -3 e 1, o vetor de soma terá valores resultantes
 * iguais a 4, 8, -3 e -1. A função deve receber 4 argumentos: os nomes dos três vetores e
 * o número de elementos presentes em cada vetor.
*/
//-----------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>

void soma (int *vet1, int *vet2, int *vet3, int tam)
{
    for (int i = 0; i < tam; i++)
    {
        *(vet3 + i) = vet1[i] + vet2[i];
    }
}

int *aloca_vetor(int tam)
{
    int * vetor;
    vetor = (int *) malloc(tam * sizeof(int));

    return vetor;
}

void preenche_vetor(int tam, int *vetor, int num_vetor)
{
     for ( int i = 0; i < tam; i++)
    {
        printf("\nInforme o valor para a posição [%d] do vetor %d: ", i, num_vetor);
        scanf("%d", &vetor[i]);
    }
}

void imprime_vetor(int tam, int *vetor, int num_vetor)
{
    printf("\n\t VETOR %d: ", num_vetor);
    for (int i = 0; i < tam; i++)
    {
        printf("%d, ", *(vetor +i));
    }
}


int main ()
{
    int tam, *vet1, *vet2, *vet3, i;

    printf("Informe o tamanho dos vetores: \n");
    scanf("%d", &tam);

    vet1 = aloca_vetor(tam);
    vet2 = aloca_vetor(tam);
    vet3 = aloca_vetor(tam);
    
    preenche_vetor(tam, vet1, 1);
    preenche_vetor(tam, vet2, 2);
    
    soma(vet1, vet2, vet3, tam);

    imprime_vetor(tam, vet1, 1);
    imprime_vetor(tam, vet2, 2);
    imprime_vetor(tam, vet3, 3);

    free(vet1);
    free(vet2);
    free(vet3);

    return 0;
}