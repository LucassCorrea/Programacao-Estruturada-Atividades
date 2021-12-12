#include <stdio.h>

void main(void){
    
    int M[2][3];
    int num, maior, menor, aux=0, x, y;
    
    printf("-Forneça os dados-\n");
    
    for(x=0; x<2; x++){
        
        printf("Informe a %d° linha\n", (x+1));
        
        for(y=0; y<3; y++){
            printf("Informe um número: ");
            scanf("%d", &M[x][y]);
            num = M[x][y];
            
            if(aux==0){
                menor=num;
                maior=num;
                aux++;
            }else if(num > maior){
                maior = num;
            }else if(num < menor){
                menor = num;
            }
        }
        
    }
    printf("\nO menor número é %d\nO maior número é %d", menor, maior);
}
