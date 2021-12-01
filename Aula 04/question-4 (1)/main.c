#include <stdio.h>

void main(void) {
    float prato, valor;
    
    printf("-forneça os dados-\n");
    printf("Informe o peso do seu prato(em quilos): ");
    scanf("%f", &prato);
    
    valor = prato * 12;
    
    printf("O valor do seu prato é: %.2f", valor);
}
