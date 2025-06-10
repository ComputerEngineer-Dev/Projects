/******************************************************************************
Faça um programa para ler dois preços de 15 produtos de uma cesta básica
(anotados no início e fim de uma semana). Calcular, armazenar e mostrar o
preço médio de cada produto. 
*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, j;
	float a[15][3];
    
    printf("Informe os precos de cada produto\n\n");
     
    for (i=0; i < 15; i++){
    	printf("\nProduto %d\n", i);
    	for (j=0; j < 2; j++) {
	        printf("Preco %d: ", j+1);
	        scanf("%f", &a[i][j]);
    	}
    	a[i][2] = (a[i][0] + a[i][1])/2;
	}
	
	printf("\nDados dos produtos\n");
	
	printf("\nPreco inicial\tPreco final\tPreco Medio\n");
    
    for (i=0; i < 15; i++){
    	for (j=0; j < 3; j++)
    		printf("%.2f\t", a[i][j]);
    	printf("\n");
	}
    		
    return 0;
}



