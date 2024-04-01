//-------------------------------------------------------------------------------
/**
 * Desenvolva uma função que retorne o número de elementos pares de um vetor de
 * inteiros recebido como parâmetro.
 *     a. Na função main, teste os seguintes vetores e mostre o resultado retornado pela função:
 *          i. int vet1[14]={1,2,3,4,5,6,7,8,9,10,11,12,13,14}
 *          ii. int vet2[5]={1,3,5,7,9}
*/
//--------------------------------------------------------------------------------

#include <stdio.h>

#define TAM_VET1 14
#define TAM_VET2 5

int contar_num_pares(int * vet, int tam)
{
    int qtd_par = 0;

    for (int i = 0; i < tam; i++)
    {
        if (*(vet +i)%2 == 0)
        {
            qtd_par++;
        } 
       
    }

    return qtd_par;
}

int main()
{
    int vet1[TAM_VET1]={1,2,3,4,5,6,7,8,9,10,11,12,13,14}, vet2[TAM_VET2]={1,3,5,7,9}, qtd_par_vet1, qtd_par_vet2;

    qtd_par_vet1 = contar_num_pares(vet1, TAM_VET1);
    qtd_par_vet2 = contar_num_pares(vet2, TAM_VET2);

    printf("\tQUANTIDADE DE NUMEROS PARES NO VETOR {1,2,3,4,5,6,7,8,9,10,11,12,13,14} : %d\n", qtd_par_vet1);
    printf("\tQUANTIDADE DE NUMEROS PARES NO VETOR {1,3,5,7,9} : %d\n", qtd_par_vet2);

    return 0;
}