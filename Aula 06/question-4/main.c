#include <stdio.h>

void main(void)
{
    int soma;
    int pos[8], neg[8], vet[8];
    int i=0;
    
    printf("Informe os oito números.\n");
    for(i=0; i<8; i++){
        printf("Informe um número: ");
        scanf("%d", &vet[i]);
        soma = soma + vet[i];
    }
    
    printf("\nVetor positivo: ");
    for(i=0; i<8; i++){
        if(vet[i] >= 0){
            pos[i] = vet[i];
            printf("%d, ", pos[i]);
        }
    }
    
    printf("\nVetor negativo: ");
    for(i=0; i<8; i++){
        if(vet[i] < 0){
            neg[i] = vet[i];
            printf("%d, ", neg[i]);
        }
    }
    
    printf("\nO valor da soma de todos os números é %d", soma);
}
