/******************************************************************************
Desenvolva um programa para ler um vetor A de 10 elementos e construir uma
matriz C 10x3, em que a primeira coluna de C é formada pelos elementos de A
somados com mais 5, a segunda coluna é formada pelo valor do cálculo fatorial
de cada elemento de A e a terceira e última coluna deve ser formada pelos
quadrados dos elementos correspondentes da matriz A. apresentar a matriz C.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, j, k, fat, a[10], c[10][3];
    
    printf("Informe os elementos do vetor\n\n");
     
    for (i=0; i<10; i++){
    	printf("A[%d]: ",i);
    	scanf("%d", &a[i]);
    }
    
    for (i=0; i<10; i++)
    	for (j=0; j<3; j++){
    		if (j==0)
    			c[i][j] = a[i]+5;
    		else if (j==1){
    				fat = 1;
    				for (k=1; k <= a[i]; k++)
    					fat *= k;
    				c[i][1] = fat;
			} else c[i][j] = a[i] * a[i];
		}
	
	printf("\nMatriz C\n\n");
	
    for (i=0; i < 10; i++){
    	for (j=0; j < 3; j++)
    		printf("%d\t", c[i][j]);
    	printf("\n");
	}
    	
    		
    return 0;
}



