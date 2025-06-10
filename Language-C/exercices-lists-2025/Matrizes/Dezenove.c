/******************************************************************************
Faça um algoritmo que leia uma matriz A 8x6. Depois, construir um vetor b que
seja formado pela soma de cada Linha da matriz A. Ao final apresentar o somatório
dos elementos do vetor.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, j, soma, a[8][6], b[8];
    
    printf("Informe os elementos da matriz A\n\n");
     
    for (i=0; i<8; i++){
    	soma = 0;
    	for (j=0; j<6; j++){
    		printf("A[%d][%d]: ",i, j);
    		scanf("%d", &a[i][j]);
    		soma += a[i][j];
		}
		b[i] = soma;
    }
    
    printf("\nVetor\n");
    
    soma = 0;
    for (i=0; i<7; i++){
		printf("%d\n", b[i]);
		soma += b[i];
	}
	
	printf("\nSomatorio: %d", soma);
    	  	   		
    return 0;
}



