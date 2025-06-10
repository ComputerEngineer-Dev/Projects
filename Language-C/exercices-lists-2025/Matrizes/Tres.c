/******************************************************************************
Escrever um programa que lê uma matriz quadrada de ordem mxn e a escreve.
A ordem da matriz é escolhida pelo usuário. A seguir:
a)	Calcular e escrever a soma dos elementos da diagonal principal.
b)	Trocar os elementos da primeira linha com os elementos da última linha.
c)	Apresentar na tela os elementos posicionados no formato de uma matriz.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, j, linha, coluna, aux;
    int matriz[10][10];
    
    do {
        printf("Informe numero de linhas da matriz: ");
        scanf("%d", &linha);
        
        if (linha <= 0)
            printf("A dimensão deve ser maior que zero\n");
    } while (linha <= 0);
    
    do {
        printf("Informe o numero de colunas da matriz: ");
        scanf("%d", &coluna);
        
        if (coluna <= 0)
            printf("A dimensão deve ser maior que zero\n");
    } while (coluna <= 0);
    
    printf("Informe os elementos da matriz\n");
    
    for (i=0; i < linha; i++) 
        for (j=0; j < coluna; j++) {
            printf("Elemento[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
        
    printf("\nMatriz\n");
    
    for (i=0; i < linha; i++){
        for (j=0; j < coluna; j++)
            printf("%d\t", matriz[i][j]);
        printf("\n");
    }
    
    if (linha == coluna) {
        int diagonal=0;
        for (i=0; i < linha; i++)
            diagonal += matriz[i][i];
        printf("\nSoma dos elementos da diagonal principal: %d\n", diagonal);
    }
        
    for (i=0; i < linha; i++) {
        aux = matriz[0][i];
        matriz[0][i] = matriz[linha-1][i];
        matriz[linha-1][i] = aux;
    }
    
    printf("\nMatriz Alterada\n");
    
    for (i=0; i < linha; i++){
        for (j=0; j < coluna; j++)
            printf("%d\t", matriz[i][j]);
        printf("\n");
    }
    
    return 0;
}



