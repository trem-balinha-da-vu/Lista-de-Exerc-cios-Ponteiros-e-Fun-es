//--------------------------------------------------------------
/**
 * Escreva uma função que recebe uma string de caracteres e uma letra e devolve um
 * vetor de inteiros contendo as posições (índices no vetor da string) onde a letra foi
 * encontrada) e um inteiro contendo o tamanho do vetor criado (total de letras iguais
 * encontradas). Utilize o retorno de um vetor para retornar os índices e um ponteiro para
 * guardar o tamanho do vetor.
*/
//---------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>

int *encontra_posicoes (char *str, char letra, int *tam)
{
    int contador = 0,i, tam_str = 0;
    char *str_nova;
    
    for (i = 0; str[i] != '\0' ; i++)
    {
        tam_str++;
    }

    str_nova = (char *) malloc (tam_str+1 * sizeof(char));

    for (i = 0; i< tam_str ; i++)
    {
        *(str_nova + i) = *(str + i);
    }
    
    str_nova[i] = '\0';

    int * indices = (int *) malloc (tam_str+1 * sizeof(int));

    for (int i = 0; i < tam_str; i++) 
    {
        if (*(str_nova + i) == letra) 
        {
            indices[contador] = i;
            contador++;
        }
    }

    *tam = contador;
    return indices;
}

int main ()
{
    char letra;
    int tamanho;

    printf("Informe o tamanho da string (contando o '\\0'): \n");
    scanf("%d", &tamanho);

    char str[tamanho];

    printf("\nDigite a string: ");
    fflush(stdin);
    scanf("%[^\n]", str);

    printf("\nInforme a letra a ser procurada: \n");
    fflush(stdin);
    scanf("%c", &letra);

    int* posicoes = encontra_posicoes(str, letra, &tamanho);

    printf("\nTamanho do novo vetor: %d\n", tamanho);
    printf("Letra '%c' encontrada nas posicoes: ", letra);
    
    for (int i = 0; i < tamanho; i++) 
    {
        printf("%d ", posicoes[i]);
    }

    printf("\n");

    free(posicoes); 

    return 0;
}

