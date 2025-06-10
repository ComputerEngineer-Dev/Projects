/******************************************************************************
Ler uma matriz 4x3 com valores reais e mostrar qual é o elemento armazenado em
uma linha L e coluna C fornecidas pelo usuário. O programa deve fazer a validação
da posição do elemento, caso o usuário informe valores inválidos.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, j, linha, coluna;
	float matriz[4][3];
    
    printf("Informe os elementos da matriz\n");
    
    for (i=0; i < 4; i++)
	    for (j=0; j < 3; j++) {
	        printf("Matriz[%d][%d]: ", i, j);
	        scanf("%f", &matriz[i][j]);
    	}
    
    printf("\nInfome a posicao do elemento que sera mostrado\n");
    do {
    	printf("\nLinha: ");
    	scanf("%d", &linha);
    	if (linha < 0 || linha > 4)
    		printf("Valor invalido para a linha");
	} while(linha < 0 || linha > 4);
    
    do {
    	printf("\nColuna: ");
    	scanf("%d", &coluna);
    	if (coluna < 0 || coluna > 4)
    		printf("Valor invalido para a coluna");
	} while(coluna < 0 || coluna > 4);
	
    printf("\nElemento na posicao [%d][%d] = %.2f\n", linha, coluna, matriz[linha][coluna]);
       
    return 0;
}



