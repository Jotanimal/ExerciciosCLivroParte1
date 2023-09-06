#include <stdio.h>

int main(){

    float tensao, resist, intensidadeCorrente;

    printf("Para calcular a intensidade da corrente, digite o valor da tensão aplicada em (V): ");
    scanf("%f", &tensao);

    printf("Agora digite o valor da resistência (R): ");
    scanf("%f", &resist);

    intensidadeCorrente = resist / tensao;

    printf("A intensidade (A) da corrente é igual a: %.2f", intensidadeCorrente);
}