/******************************************************************************
Criar uma matriz 7x8 de inteiros onde cada elemento é a soma dos índices da
sua posição dentro da matriz. Apresentar a matriz gerada. Considere que não
existem valores repetidos na matriz A.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, j, k, l;
	float a[5][5], b[5][5];
	int c[5][5], encontrou;
    
    printf("Informe os elementos da matriz A\n\n");
     
    for (i=0; i < 5; i++)
	   	for (j=0; j < 5; j++) {
	        printf("A[%d][%d]: ", i, j);
	        scanf("%f", &a[i][j]);
    	}
    	
    printf("\nInforme os elementos da matriz B\n\n");
     
    for (i=0; i < 5; i++)
	   	for (j=0; j < 5; j++) {
	        printf("B[%d][%d]: ", i, j);
	        scanf("%f", &b[i][j]);
    	}
    	
    printf("Elementos da matriz C\n\n");
     
    for (i=0; i < 5; i++){
    	for (j=0; j < 5; j++) {
	   		encontrou = 0;
	   		for (k=0; k < 5; k++){
	   			for (l=0; l < 5; l++) 	
		   			if (a[i][j] == b[k][l])
		   				encontrou = 1;
		   		if (encontrou)
		   			c[i][j] = 1;
		   		else c[i][j] = 0;
			   }
			printf("C[%d][%d]: %d\t", i, j, c[i][j]);
		}
		printf("\n");
	}		
    return 0;
}



