#include <stdio.h>

void main(void)
{
    int soma1=0, soma2=0;
    int X[10], Y[10], vetor[20];
    int aux=1, i=0;
    
    printf("Informe os dados:\n");
    
    printf("Informe os 10 números de X:\n");
    for(i=0; i<10; i++){
        printf("digite o número: ");
        scanf("%d", &X[i]);
        soma1 =  soma1 + X[i];
    }
    
    printf("Informe os 10 números de Y:\n");
    for(i=0; i<10; i++){
        printf("digite o número: ");
        scanf("%d", &Y[i]);
        soma2 =  soma2 + Y[i];
    }
    
    for(i=0; i<10; i++){
        vetor[2*i] = X[i];
        vetor[2*i+1] = Y[i];
    }
    
    printf("\nA soma dos dois vetores é %d", (soma1 + soma2));
    
    printf("\nOs números dos dois vetores(X e Y) são: ");
    for(i=0; i<20; i++){
        printf("%d, ", vetor[i]);
    }
}