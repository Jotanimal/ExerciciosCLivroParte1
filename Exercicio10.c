#include <stdio.h>

int main(){

    float potencia, corrente, tensao;

    printf("Para calcular a corrente elétrica do aparelho, digite a potência do mesmo: ");
    scanf("%f", &potencia);

    printf("Agora digite a tensão em Volts: ");
    scanf("%f", &tensao);

    corrente = potencia / tensao;

    printf("A corrente elétrica do aparelho é de %.2f Watts", corrente);
}