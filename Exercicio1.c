#include <stdio.h>

int main(){

    char nome[40];
    char sobrenome[40];

    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Agora digite seu sobrenome: ");
    scanf("%s", sobrenome);

    printf("Você é: %s, %s \n", sobrenome, nome);

    return 0;
}