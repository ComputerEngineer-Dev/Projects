/******************************************************************************

Faça um programa que armazene valores inteiros em uma matriz de ordem 4x4.
Após a leitura o programa deve percorrer a matriz e escrever os elementos da
linha em que está situado o maior valor. Considere que todos os elementos
sejam diferentes.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int matriz[4][4], i, j, maior, linha;
    
    printf("Informe os elementos da matriz\n");
    for (i=0; i < 4; i++) 
        for (j=0; j < 4; j++) {
	        printf("Elemento[%d][%d]: ", i, j);
	        scanf("%d", &matriz[i][j]);
    }
    
    maior = matriz[0][0];
    linha = 0;
    
    for (i=0; i < 4; i++) 
        for (j=0; j < 4; j++) 
            if (matriz[i][j] > maior){
                maior = matriz[i][j];
                linha = i;
            }
        
    printf("Elementos da linha em que está situado o maior elemeto da matriz\n");
    
    for (i=0; i < 4; i++)
        printf("%d\t", matriz[linha][i]);

    return 0;
}

