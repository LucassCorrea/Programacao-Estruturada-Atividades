#include <stdio.h>

void main(void)
{
    int pao, broa;
    float arrecadou, poupanca;
    
    printf("-forneça os dados-\n");
    printf("Informe a quantidade de pães franceses vendidos no dia: ");
    scanf("%d", &pao);
    printf("Informe a quantidade de broas vendidos no dia: ");
    scanf("%d", &broa);
    
    arrecadou = (pao * 0.12) + (broa * 1.5);
    poupanca = arrecadou * 0.10;
    
    printf("O valor arrecadado com a venda de pães e broas é: %.2f \n", arrecadou);
    printf("O valor a ser guardado na conta poupança é: %.2f", poupanca);
}
