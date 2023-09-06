#include <stdio.h>

int main(){

    float PrecoUn;
    float QuantVendida;
    float DescontoPorcent;

    printf("Para calcular o preço de venda do produto, digite o valor unitário: ");
    scanf("%f", &PrecoUn);
    printf("Agora digite a quantidade do produto vendido: ");
    scanf("%f", &QuantVendida);
    printf("Digite agora, por último, o desconto aplicado ao produto: ");
    scanf("%f", &DescontoPorcent);

    float Desconto = (DescontoPorcent / 100) * PrecoUn;
    
    float PrecoDeVenda = (PrecoUn * QuantVendida) - Desconto;

    printf("O preço de venda do produto é igual a %f", PrecoDeVenda);

}