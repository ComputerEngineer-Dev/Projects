/******************************************************************************
Faça um algoritmo que receba os valores para uma matriz 2x3,
gere e imprima uma matriz transposta. A matriz transposta é gerada trocando
a linha pela coluna. Exemplo: 
	Matriz				Transposta
	1	 9	 48			 1	  2
	2	49	658			 9	 49
						48	658
*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, j, matriz[2][3], transposta[3][2];
    
    printf("Informe os elementos da matriz\n");
    
    for (i=0; i < 2; i++) 
        for (j=0; j < 3; j++) {
        printf("A[%d][%d]: ", i, j);
        scanf("%d", &matriz[i][j]);
    }
    
    printf("\nMatriz Transposta\n");
    
    for (i=0; i < 3; i++){
        for (j=0; j < 2; j++){
        	transposta[i][j] = matriz[j][i];
            printf("%d\t", transposta[i][j]);
        }
        printf("\n");
    }
       
    return 0;
}



