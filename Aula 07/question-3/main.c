#include <stdio.h>

void main(void)
{
    int X[10], Y[10], M[2][10];
    int num1, num2, x, y;
    
    printf("Informe os dados:\n");
    
    for(x=0; x<2; x++){
        
        for(y=0; y<10; y++){
            printf("Informe um número: ");
            scanf("%d", &num1);
            Y[y] = num1;
            M[x][y] = Y[y];
        }
        x++;
        for(y=0; y<10; y++){
            printf("Informe um número: ");
            scanf("%d", &num2);
            X[y] = num2;
            M[x][y] = X[y];
        }
        
    }
    
    for(x=0; x<2; x++){
        
        for(y=0; y<10; y++){
            printf("M[%d][%d]: %d \n", x, y, M[x][y]);
        }
        
    }
}
