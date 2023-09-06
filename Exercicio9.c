#include <stdio.h>

int main(){

    float potencia, tensao, corrente;

    printf("Para calcular a potência do aparelho, digite a tensão em Volts: ");
    scanf("%f", &tensao);

    printf("Agora digite o valor da corrente elétrica em (A): ");
    scanf("%f", &corrente);

    potencia = tensao * corrente;

    printf("A potência do aparelho é de: %.2f", potencia);
}