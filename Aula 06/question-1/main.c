#include <stdio.h>

void main(void){
    float media, soma = 0;
    float elem[10];
    int i = 0;
    
    printf("Informe os dados:\n");
    
    for(i=0; i<10; i++)
    {
        printf("Informe um número: ");
        scanf("%f", &elem[i]);
        soma = soma + elem[i];
    }
    
    media = soma / 10;
    printf("A média dos números informados é %.2f", media);
}