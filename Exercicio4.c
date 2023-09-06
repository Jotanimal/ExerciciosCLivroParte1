#include <stdio.h>

int main(){

    float valor1;
    float valor2;
    float valor3;

    printf("Digite três valores para receber o valor de sua média: ");
    scanf("%f", &valor1);
    scanf("%f", &valor2);
    scanf("%f", &valor3);

    float mediaTotal = (valor1 + valor2 + valor3) / 3;

    printf("Sua média é de %f pontos", mediaTotal);

    return 0;
}