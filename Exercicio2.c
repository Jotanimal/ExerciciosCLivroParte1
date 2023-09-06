#include <stdio.h>

int main(){

    float valor1;
    float valor2;

    printf("Calculadora \n Digite um número para realizar a operação: ");
    scanf("%f", &valor1);

    printf("Escolha um valor a ser multiplicado pelo número escolhido: ");
    scanf("%f", &valor2);

    float multiplicacao = valor1 * valor2;

    printf("%f", multiplicacao);

}