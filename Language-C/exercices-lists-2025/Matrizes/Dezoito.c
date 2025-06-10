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
    int i, j, k, soma, a[7][7], b[7][7];
    
    printf("Informe os elementos da matriz A\n\n");
     
    for (i=0; i<7; i++)
		for (j=0; j<7; j++){
    		printf("A[%d][%d]: ",i, j);
    		scanf("%d", &a[i][j]);
    }
    
    printf("\n\nMatriz B\n\n");
    
    for (i=0; i<7; i++){
    	for (j=0; j<7; j++){
    		if (i+j == 6)
    			b[i][j] = 0;
    		else {
    			soma = 0;
	    		for (k=1; k <= a[i][j]; k++)
	    			soma += k;
	    		
	    		b[i][j] = soma;
			}
			printf("%d\t", b[i][j]);
		}
		printf("\n");
	}
    	  	   		
    return 0;
}



