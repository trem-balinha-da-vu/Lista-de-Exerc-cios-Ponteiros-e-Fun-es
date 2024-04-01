#include <stdio.h>
#include <stdlib.h>

int raizes(float A, float B, float C, float *x1, float *x2){
    float delta = B*B - 4*A*C;
    if(delta < 0){
        return 0;
    }
        *x1 = (-B + sqrt(delta)) / (2 * A);
        *x2 = (-B - sqrt(delta)) / (2 * A);


    return 1;

}

int main(void){

    float A,B,C,x1,x2;

    printf("Digite os valores de A,B e C: ");
    scanf("%f %f %f", &A, &B, &C);

    if (raizes(A, B, C, &x1, &x2)) {
        printf("As raízes da equacao sao: %.2f e %.2f\n", x1, x2);
    } else {
        printf("Nao ha raizes reais para a equacao.\n");
    }

}
