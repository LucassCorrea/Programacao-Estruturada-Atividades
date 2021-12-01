#include <stdio.h>
#include "calculos.h"

void main(void){
    float comp, larg, resultado;
    
    printf("-forneça os dados-\n");
    printf("Informe o comprimento do terreno: ");
    scanf("%f", &comp);
    printf("Informe a largura do terreno: ");
    scanf("%f", &larg);
    
    resultado = areaRetangulo(comp, larg);
    printf("O valor da área do terreno é: %2.f", resultado);
}
