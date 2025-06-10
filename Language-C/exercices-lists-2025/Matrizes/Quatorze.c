/******************************************************************************
Faça um programa para ler dois vetores A e B de 7 elementos cada. Depois construa
uma matriz C de com 7 linhas e 3 colunas, em que a primeira coluna deve ser formada
pelos elementos do vetor A e a segunda coluna formada pelos elementos do vetor B e
a terceira coluna pelo produto entre os elementos da primeira coluna pela segunda.
Apresentar a matriz C.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, j, a[7], b[7], c[7][3];
    
    printf("Informe os elementos do vetor A\n\n");
     
    for (i=0; i < 7; i++){
    	printf("A[%d]: ", i);
        scanf("%d", &a[i]);
    }
    
    printf("\nInforme os elementos do vetor B\n\n");
     
    for (i=0; i < 7; i++){
    	printf("B[%d]: ", i);
        scanf("%d", &b[i]);
    }
	
	printf("\nMatriz C\n\n");
    for (i=0; i < 7; i++){
    	for (j=0; j < 3; j++){
    		if (j == 0)
    			c[i][j]=a[i];
    		else if (j == 1)
    				c[i][j]=b[i];
    			 else c[i][j]=a[i] * b[i];	
    		printf("%d\t", c[i][j]);
		}
    		
    	printf("\n");
	}
    		
    return 0;
}



