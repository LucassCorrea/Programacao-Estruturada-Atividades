#include <stdio.h>

void main(void){
    float alt, bmaior, bmenor, area;
    
    printf("-forneça os dados-\n");
    printf("Informe a altura do trapézio: ");
    scanf("%f", &alt);
    printf("Informe a base menor do trapézio: ");
    scanf("%f", &bmenor);
    printf("Informe a base maior do trapézio: ");
    scanf("%f", &bmaior);
    
    area = ((bmaior + bmenor) * alt) / 2;
    printf("O valor da área do trapézio é: %.2f", area);
}
