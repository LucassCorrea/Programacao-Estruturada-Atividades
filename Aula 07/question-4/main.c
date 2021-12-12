#include <stdio.h>

void main(void){
    
    int pos[8], neg[8], M[4][2];
    int a, b, i, x, y;
    
    printf("Informe os dados:\n");
    
    for(x=0; x<4; x++){
        
        printf("Informe a %d° linha\n", x+1);
        
        for(y=0; y<2; y++){
            printf("Digite um número: ");
            scanf("%d", &M[x][y]);
            
            if(M[x][y] >= 0){
                pos[a] = M[x][y];
                a++;
            }else if(M[x][y] < 0){
                neg[b] = M[x][y];
                b++;
            }
        }
    }
    
    // variáveis usadas para auxiliar na formatação do texto para o usuário
    int aux1, aux2;
    
    aux1 = a - 1;
    aux2 = b - 1;
    
    printf("\nVetor positivo: ");
    for(i=0; i<a; i++){
        if(i<aux1){
            printf("%d, ", pos[i]);
        } else printf("%d.", pos[i]); 
    }
    // "if" usado para adicionar o ponto final, no último número inserido.
    
    printf("\nVetor negativo: ");
    for(i=0; i<b; i++){
        if(i<aux2){
            printf("%d, ", neg[i]);
        } else printf("%d.", neg[i]);
    }
    
}
