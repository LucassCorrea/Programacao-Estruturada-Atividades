#include <stdio.h>

void main(void)
{
    float media, elem[10], maior=0, menor=0, num;
    int i=0, aux=0;
    
    printf("Informe os dados:\n");
    
    do{
        printf("Informe um número: ");
        scanf("%f", &elem[i]);
        num = elem[i];
        i++;
        
        if(aux==0){
            maior = num;
            menor = num;
            aux++;
        }else if(num > maior){
            maior = num;
        }else if(num < menor){
            menor = num;
        }
    } while(i<10);
    
    printf("O menor número é %.2f\n", menor);
    printf("O maior número é %.2f", maior);
}
