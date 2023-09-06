#include <stdio.h>

int main(){

    int valor1;
    int valor2;
    int valor3;
    int valor4;

    printf("Escolha 4 números para realizar uma operação de soma: ");
    scanf("%d", &valor1);
    scanf("%d", &valor2);
    scanf("%d", &valor3);
    scanf("%d", &valor4);

    int somaTotal = valor1 + valor2 + valor3 +valor4;

    printf("O resultado da soma é: %d", somaTotal);
}