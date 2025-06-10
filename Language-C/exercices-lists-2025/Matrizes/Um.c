/******************************************************************************
Faça um programa que armazene valores inteiros em uma matriz de ordem 4x4.
O programa deve percorrer a matriz e encontrar o maior valor armazenado.
Apresentar como resultado o maior valor.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int matriz[4][4], i, j, maior;
    
    printf("Informe os elementos da matriz\n");
    for (i=0; i < 4; i++) 
        for (j=0; j < 4; j++) {
	        printf("Elemento[%d][%d]: ", i, j);
	        scanf("%d", &matriz[i][j]);
    }
    
    maior = matriz[0][0];
    
    for (i=0; i < 4; i++) 
        for (j=0; j < 4; j++) 
            if (matriz[i][j] > maior)
                maior = matriz[i][j];
        
    printf("Maior elemento da matriz: %d", maior);

    return 0;
}

