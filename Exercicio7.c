#include <stdio.h>

int main(){

    float tensao;
    float intensidade;

    printf("Para calcular a resistência, digite o valor da tensão: ");
    scanf("%f", &tensao);

    printf("Digite agora o valor da intensidade da corrente: ");
    scanf("%f", &intensidade);

    float resist = tensao / intensidade;

    printf("Resistência (R) = %f", resist);
}