//-----------------------------------------------------------------------
/**
 * Construa um programa (main) que aloque em tempo de execução (dinamicamente) uma
 * matriz de ordem m x n (linha por coluna), usando 1+m chamadas a função malloc. Agora,
 * aproveite este programa para construir uma função que recebendo os parâmetros m e
 * n aloque uma matriz de ordem m x n e retorne um ponteiro para esta matriz alocada.
 * Crie ainda uma função para liberar a área de memória alocada pela matriz. Finalmente,
 * crie um novo programa (main) que teste/use as duas funções criadas acima.
*/
//------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>

int **aloca_matriz(int linha, int coluna)
{
    int ** matriz;
    matriz = (int **) malloc(linha * sizeof(int *));
    
    for (int i = 0; i < coluna; i++)
    {
        *(matriz + i) = (int *) malloc (coluna * sizeof(int));
    }

    return matriz;
}

void liberar_matriz(int linha, int **matriz)
{
    for (int i = 0; i < linha; i++)
    {
        free(*(matriz + i));
    }
    free(matriz);
}

void preenche_e_imprime_matriz(int linha, int coluna, int **matriz)
{
    printf("\tMATRIZ CRIADA: \n");
    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            *((matriz + i) + j) = 0;
            printf("%d ", *((matriz + i) + j));
        }
        printf("\n");
    }
}

int main ()
{
    int linha, coluna, **matriz;

    printf("Informe a quantidade de linhas: \n");
    scanf("%d", &linha);
    printf("Informe a quantidade de colunas: \n");
    scanf("%d", &coluna);

    matriz = aloca_matriz (linha, coluna);
    preenche_e_imprime_matriz(linha, coluna, matriz);
    liberar_matriz(linha, matriz);

    return 0;

}