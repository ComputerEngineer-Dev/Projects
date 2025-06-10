/******************************************************************************
Faça um algoritmo que leia uma matriz de elementos inteiros. A seguir
armazene a i-ésima linha da matriz em um vetor. As dimensões da matriz e a
linha a ser armazenada são informadas pelo usuário. Mostre a matriz e o vetor,
este último, na ordem contrária.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, j, linhas, colunas, lin, matriz[10][10], vetor[10];;
    
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
    
    printf("Informe os elementos da matriz\n");
    
    for (i=0; i < linhas; i++) 
        for (j=0; j < colunas; j++) {
        printf("A[%d][%d]: ", i, j);
        scanf("%d", &matriz[i][j]);
    }
    
    do {
        printf("Informe o número da linha que será armazenada no vetor: ");
        scanf("%d", &lin);
        
        if (lin < 1 || lin > linhas)
            printf("Linha inválida!\n");
    } while (lin < 1 || lin > linhas);
    
    printf("\nMatriz\n");
    
    for (i=0; i < linhas; i++){
        for (j=0; j < colunas; j++){
            printf("%d\t", matriz[i][j]);
            if (i==lin-1)
                vetor[j] = matriz[i][j];
        }
        printf("\n");
    }
    
    printf("\nVetor na ordem contrária\n");
    
    for (i=colunas-1; i >= 0; i--)
        printf("%d\n", vetor[i]);
    
    return 0;
}



