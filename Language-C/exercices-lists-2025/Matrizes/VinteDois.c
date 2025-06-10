/******************************************************************************
Ler duas matrizes A e B com dimensões 4x5. A matriz A deve ser formada por valores
que sejam divisíveis por 3 e 4, enquanto a matriz B deve ser formada por valores
que sejam divisíveis por 5 e 6. As entradas dos valores nas matrizes devem ser
validadas pelo programa e não pelo usuário. Construir e apresentar uma matriz C
de mesma dimensão que contenha a subtração dos elementos da matriz A e B.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, j, a[4][5], b[4][5], c[4][5];
    
    printf("Informe os elementos da matriz A\n\n");
     
    for (i=0; i<4; i++)
    	for (j=0; j<5; j++)
    		do {
    			printf("A[%d][%d]: ",i, j);
    			scanf("%d", &a[i][j]);
	    		if (!(a[i][j]%3 == 0 && a[i][j]%4 == 0))
	    			printf("Atencao! Os elementos devem ser divisiveis por 3 e por 4\n");
			} while (!(a[i][j]%3==0 && a[i][j]%4==0));
    		
    printf("\nInforme os elementos da matriz B\n\n");
     
    for (i=0; i<4; i++)
    	for (j=0; j<5; j++)
    		do {
    			printf("B[%d][%d]: ",i, j);
    			scanf("%d", &b[i][j]);
	    		if (!(b[i][j]%5 == 0 && b[i][j]%6 == 0))
	    			printf("Atencao! Os elementos devem ser divisiveis por 5 e por 6\n");
			} while (!(b[i][j]%5==0 && b[i][j]%6==0));
			
	printf("\nMatriz A\n\n");
     
    for (i=0; i<4; i++){
    	for (j=0; j<5; j++)
    		printf("%d\t", a[i][j]);
	    printf("\n");
	}
    	
		
	printf("\nMatriz B\n\n");
     
    for (i=0; i<4; i++){
    	for (j=0; j<5; j++)
    		printf("%d\t", b[i][j]);
	    printf("\n");	
	}
    	
	printf("\nMatriz C\n\n");
     
    for (i=0; i<4; i++){
    	for (j=0; j<5; j++){
    		c[i][j] = a[i][j] - b[i][j];
    		printf("%d\t", c[i][j]);
		}
	    printf("\n");	
	}
    					
		  	   		
    return 0;
}
