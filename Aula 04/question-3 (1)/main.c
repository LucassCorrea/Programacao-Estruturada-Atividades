#include <stdio.h>

void main(void) {
    int cav, resultado;
    
    printf("-forneça os dados-\n");
    printf("Informe quantos cavalos há no haras: ");
    scanf("%d", &cav);
    
    resultado = cav * 4;
    printf("A quantidade de ferraduras para equipar todos os cavalos é: %d", resultado);
}
