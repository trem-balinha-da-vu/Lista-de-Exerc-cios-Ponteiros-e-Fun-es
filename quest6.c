//------------------------------------------------------------
/**
 * Crie uma função que receba uma string como parâmetro (de tamanho desconhecido) e
 * retorne uma cópia da mesma. O protótipo da função deve ser:
 *      
 *          char *stringcopy(char *str);
*/
//------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>

char *stringcopy(char *str)
{
    int tam_str = 0, i;
    char *str_nova;
    for (int i = 0; str[i] != '\0' ; i++)
    {
        tam_str++;
    }

    str_nova = (char *) malloc (tam_str+1 * sizeof(char));

    for (i = 0; i< tam_str ; i++)
    {
        *(str_nova + i) = *(str + i);
    }
    
    str_nova[i] = '\0';

    return str_nova;
    
}

int main ()
{
    int tam;

    printf("Informe o tamanho da string (contando o '\\0'): \n");
    scanf("%d", &tam);

    char str[tam], str_nova[tam];

    printf("Digite a string: \n");
    fflush(stdin);
    scanf("%[^\n]", str);

    printf("\n\tSTRING ORIGINAL: %s\n", str);
    printf("\n\tSTRING COPIADA: %s", stringcopy(str));

    return 0;
}