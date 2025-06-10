/******************************************************************************
Escrever um programa que lê uma matriz A(5, 5) e cria 2 vetores SL(5) e SC(5)
que contenham, respectivamente, as somas das linhas e das colunas de A.
Escrever a matriz e os vetores criados.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int matriz[5][5], sl[5], sc[5], i, j;
    
    printf("Informe os elementos da matriz\n");
    
    for (i=0; i < 5; i++) 
        for (j=0; j < 5; j++) {
	        printf("Elemento[%d][%d]: ", i, j);
	        scanf("%d", &matriz[i][j]);
    	}
    
    for (i=0; i < 5; i++)
        sc[i]=0;
    
    printf("\nMatriz A\n");
    
    for (i=0; i < 5; i++){
        for (j=0, sl[i]=0; j < 5; j++){
            printf("%d\t", matriz[i][j]);
            sl[i] += matriz[i][j];
            sc[j] += matriz[i][j];
        }
        printf("\n");
    }
    
    printf("\nSoma das linhas\n");
    
    for (i=0; i < 5; i++)
        printf("%d\n", sl[i]);
    
    
    printf("\nSoma das colunas\n");
    
    for (i=0; i < 5; i++)
        printf("%d\t", sc[i]);
    
    return 0;
}

