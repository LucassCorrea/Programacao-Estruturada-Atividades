#include <stdio.h>

void main(void){
    
    int M[3][4];
    int soma=0, media=0, x, y;
    
    printf("Informe os dados:\n");
    
    for(x=0; x<3; x++){
        
        for(y=0; y<4; y++){
            printf("Informe um número: ");
            scanf("%d", &M[x][y]);
            soma = soma + M[x][y];
        }
        
    }
    
    media = soma / 12;
    
    printf("A média dos números informados é %d", media);
}

