//-------------------------------------------------------------------
/**
 * Escreva uma função que receba duas strings A e B por parâmetro e retorne uma terceira 
 * string C com os caracteres que aparecem tanto em A quanto em B. O tamanho das string
 * A e B pode ser diferente e a string C deve ter o tamanho exato da quantidade de
 * caracteres que ela tem, mais o ‘\0’.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* interseccao(char* A, char* B) {
    // Verificando o tamanho máximo possível da string de interseção
    int tamanhoMaximo = strlen(A) < strlen(B) ? strlen(A) : strlen(B);

    // Alocando memória para a string de interseção (mais o caractere nulo)
    char* C = (char*)malloc((tamanhoMaximo + 1) * sizeof(char));

    int indiceC = 0;

    for (int i = 0; A[i] != '\0'; i++) {
        // Verificando se o caractere de A está presente em B
        if (strchr(B, A[i]) != NULL) {
            // Verificando se o caractere ainda não está presente em C
            if (strchr(C, A[i]) == NULL) {
                // Adicionando o caractere a C
                C[indiceC] = A[i];
                indiceC++;
            }
        }
    }

    // Adicionando o caractere nulo ao final de C
    C[indiceC] = '\0';

    return C;
}

int main() {

    int tamanhoA, tamanhoB;

    printf("Informe o tamanho da string A (contando o '\\0'): \n");
    scanf("%d", &tamanhoA);

    char A[tamanhoA];

    printf("\nDigite a string: ");
    fflush(stdin);
    scanf("%[^\n]", A);

    printf("Informe o tamanho da string B (contando o '\\0'): \n");
    scanf("%d", &tamanhoB);

    char B[tamanhoB];

    printf("\nDigite a string: ");
    fflush(stdin);
    scanf("%[^\n]", B);

    char* C = interseccao(A, B);

    printf("String de intersecao: %s\n", C);

    free(C);

    return 0;
}
