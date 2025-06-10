/******************************************************************************
Ler uma matriz A de ordem 7x7 e construir uma matriz B de mesma dimensão, sendo
que cada elemento de B deve ser o somatório de cada elemento correspondente em A,
com exceção dos valores situados na diagonal secundária, que devem ser iguais a
zero. O somatório corresponde a adição dos valores do 1 até o valor
correspondente do elemento, por exemplo, se o elemento do vetor é igual a 5 o
somatório será 1+2+3+4+5 = 15. Apresentar a matriz B.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, j, k, a[10][10], b[10][10], c[10][10], lin_a, col_a, lin_b, col_b;
    
    do {
    	printf("\nInforme o numero de linhas da matriz A: ");
    	scanf("%d", &lin_a);
    	if (!(lin_a > 0 && lin_a < 11))
    		printf("Atencao! O numero de linhas da matriz deve ser maior que zero e menor igual a dez\n");
	} while (!(lin_a > 0 && lin_a < 11));
	
	do {
    	printf("\nInforme o numero de colunas da matriz A: ");
    	scanf("%d", &col_a);
    	if (!(col_a > 0 && col_a < 11))
    		printf("Atencao! O numero de colunas da matriz deve ser maior que zero e menor igual a dez\n");
	} while (!(col_a > 0 && col_a < 11));
    
     do {
    	printf("\nInforme o numero de linhas da matriz B: ");
    	scanf("%d", &lin_b);
    	if (!(lin_b > 0 && lin_b < 11))
    		printf("Atencao! O numero de linhas da matriz deve ser maior que zero e menor igual a dez\n");
    	else if (lin_b != col_a)
    			printf("Erro! Na multiplicacao de matrizes o numero de linhas da matriz B deve ser igual ao numero de colunas da matriz A\n\n");
	} while (!(lin_b > 0 && lin_b < 11 && lin_b == col_a));
    
    do {
    	printf("\nInforme o numero de colunas da matriz B: ");
    	scanf("%d", &col_b);
    	if (!(col_b > 0 && col_b < 11))
    		printf("Atencao! O numero de colunas da matriz deve ser maior que zero e menor igual a dez\n");
	} while (!(col_b > 0 && col_b < 11));
	
	printf("\nMatriz A\n");
	
	for (i=0; i<lin_a; i++)
		for (j=0; j<col_a; j++){
			printf("A[%d][%d]: ", i, j);
			scanf("%d", &a[i][j]);
		}
		
	printf("\nMatriz B\n");
	
	for (i=0; i<lin_b; i++)
		for (j=0; j<col_b; j++){
			printf("B[%d][%d]: ", i, j);
			scanf("%d", &b[i][j]);
		}
		
	printf("\nMatriz A\n");
	for (i=0; i<lin_a; i++){
		for (j=0; j<col_a; j++)
			printf("%d\t", a[i][j]);
		printf("\n");
	}
	
	printf("\nMatriz B\n");
	for (i=0; i<lin_b; i++){
		for (j=0; j<col_b; j++)
			printf("%d\t", b[i][j]);
		printf("\n");
	}
		
	printf("\nMatriz C\n");
			
    for(i=0; i< lin_a; i++){
    	for(j=0; j< col_b; j++)	{
     		c[i][j] = 0;
	     	for(k=0; k< lin_b; k++)  
	       		c[i][j] += a[i][k]*b[k][j];
	       	printf("%d\t", c[i][j]);
  		}
  		printf("\n");
	}
  
    return 0;
}



