/******************************************************************************
Fazer um programa que leia os elementos de uma matriz inteira de ordem 10 (10x10)
e escreva os elementos da matriz, que estão acima da diagonal secundária. Apresente
a soma destes elementos.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, j, matriz[10][10], soma=0;
    
    printf("Informe os elementos da matriz\n");
    
    for (i=0; i < 10; i++)
	    for (j=0; j < 10; j++) {
	        printf("Matriz[%d][%d]: ", i, j);
	        scanf("%d", &matriz[i][j]);
    	}
    
    printf("\nElementos do triangulo superior\n");
    
    for (i=0; i < 9; i++){
        for (j=0; j < 9-i; j++){
        	soma += matriz[i][j];
        	printf("%d\t", matriz[i][j]);
		}
		printf("\n");
    }
    
    printf("\nSomatorio destes elementos: %d\n", soma);
       
    return 0;
}



