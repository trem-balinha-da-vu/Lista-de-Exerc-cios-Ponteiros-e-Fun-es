//---------------------------------------------------------------------
/**
 * Escreva uma função que codifica uma string em um código secreto. A regra secreta de
 * codificação é extremamente simples: substitui cada letra pela letra seguinte (Z é
 * codificado como A). Por exemplo, “Estruturas de Dados” se transformaria em
 * “Ftusvuvsbt ef Ebept”. Escreva uma função para codificar e uma para decodificar cadeias
 * segundo este código. Suas funções devem escrever a string produzida em uma string
 * diferente da fornecida como entrada.
*/

#include <stdio.h>
#include <stdlib.h>


void codificar(char* entrada) {
    int i = 0;
    while (entrada[i] != '\0') 
    {
        if ((entrada[i] >= 'a' && entrada[i] <= 'z') || (entrada[i] >= 'A' && entrada[i] <= 'Z')) 
        {
            if (entrada[i] == 'z')
                entrada[i] = 'a';
            else if (entrada[i] == 'Z')
                entrada[i] = 'A';
            else
                entrada[i] = entrada[i] + 1;
        }
        i++;
    }
    entrada[i] = '\0';
}

// Função para decodificar uma string
void decodificar(char* entrada) {
    int i = 0;
    while (entrada[i] != '\0') {
        if ((entrada[i] >= 'a' && entrada[i] <= 'z') || (entrada[i] >= 'A' && entrada[i] <= 'Z')) 
        {
            if (entrada[i] == 'a')
                entrada[i] = 'z';
            else if (entrada[i] == 'A')
                entrada[i] = 'Z';
            else
                entrada[i] = entrada[i] - 1;
        } 
        i++;
    }
    entrada[i] = '\0';
}

int main() {
    
    int tamanho, opt = 5;

    do
    {
        printf("Informe o tamanho da string (contando o '\\0'): \n");
        scanf("%d", &tamanho);

        char entrada[tamanho];

        printf("\nDigite a string: ");
        fflush(stdin);
        scanf("%[^\n]", entrada);

        printf("\n\tESCOLHA O QUE QUER FAZER: \n\t1 - CODIFICAR \n\t 2 - DECODIFICAR \n\t 0 - SAIR\n\n");
        scanf("%d", &opt);

        switch (opt)
        {
        case 1:
            printf("String original: %s\n", entrada);
            codificar(entrada);
            printf("String codificada: %s\n", entrada);
            break;
        case 2:
            printf("String original: %s\n", entrada);
            decodificar(entrada);
            printf("String decodificada: %s\n", entrada);
        default:
            break;
        }
        
    }while(opt != 0);

    return 0;
}
