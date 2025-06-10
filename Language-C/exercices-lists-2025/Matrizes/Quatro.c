/******************************************************************************
Fazer um programa que leia duas matrizes de ordem mxn informada pelo usuário.
O programa deverá realizar a soma das duas matrizes. Apresentar na tela,
no formato de matriz, os elementos das matrizes e a matriz soma.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, j, linhas, colunas;
    int matrizA[10][10], matrizB[10][10];
    
    do {
        printf("Informe numero de linhas das matrizes: ");
        scanf("%d", &linhas);
        
        if (linhas <= 0)
            printf("A dimensão deve ser maior que zero\n");
    } while (linhas <= 0);
    
    do {
        printf("Informe o numero de colunas das matrizes: ");
        scanf("%d", &colunas);
        
        if (colunas <= 0)
            printf("A dimensão deve ser maior que zero\n");
    } while (colunas <= 0);
    
    printf("Informe os elementos da Matriz A\n");
    
    for (i=0; i < linhas; i++) 
        for (j=0; j < colunas; j++) {
	        printf("A[%d][%d]: ", i, j);
	        scanf("%d", &matrizA[i][j]);
    }
    
    printf("Informe os elementos da Matriz B\n");
    
    for (i=0; i < linhas; i++) 
        for (j=0; j < colunas; j++) {
	        printf("B[%d][%d]: ", i, j);
	        scanf("%d", &matrizB[i][j]);
    }
    
    printf("\nMatriz A\n");
    
    for (i=0; i < linhas; i++){
        for (j=0; j < colunas; j++)
            printf("%d\t", matrizA[i][j]);
        printf("\n");
    }
    
    printf("\nMatriz B\n");
    
    for (i=0; i < linhas; i++){
        for (j=0; j < colunas; j++)
            printf("%d\t", matrizB[i][j]);
        printf("\n");
    }

    printf("\nMatriz Soma\n");
    
    for (i=0; i < linhas; i++){
        for (j=0; j < colunas; j++)
            printf("%d\t", matrizA[i][j] + matrizB[i][j]);
        printf("\n");
    }
    
    return 0;
}





