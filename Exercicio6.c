#include <stdio.h>

int main(){

    float Prova1Nota;
    float Prova2Nota;

    printf("Para calcular sua média, digite quanto tirou na primeira prova: ");
    scanf("%f", &Prova1Nota);

    printf("Agora digite quanto tirou na segunda prova: ");
    scanf("%f", &Prova2Nota);

    float MediaFinal = (Prova1Nota *0.4) + (Prova2Nota * 0.6);

    printf("Sua média é de %f", MediaFinal);
}