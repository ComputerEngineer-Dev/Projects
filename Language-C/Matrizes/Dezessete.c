/******************************************************************************
Ler uma matriz A de ordem 5x5 e construir uma matriz B de mesma dimensão, onde
cada elemento de B deve ser o dobro de cada elemento correspondente da matriz A,
com exceção para os valores situados na diagonal principal os quais devem ser o
triplo de cada elemento correspondente a A. Apresentar a matriz B.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, j, a[5][5], b[5][5];
    
    printf("Informe os elementos da matriz A\n\n");
     
    for (i=0; i<5; i++)
		for (j=0; j<5; j++){
    		printf("A[%d][%d]: ",i, j);
    		scanf("%d", &a[i][j]);
    }
    
    printf("\n\nMatriz B\n\n");
    
    for (i=0; i<5; i++){
    	for (j=0; j<5; j++){
    		if (i==j)
    			b[i][j] = a[i][j]*3;
    		else b[i][j] = a[i][j] * 2;
    		printf("%d\t", b[i][j]);
		}
		printf("\n");
	}
    	  	   		
    return 0;
}



