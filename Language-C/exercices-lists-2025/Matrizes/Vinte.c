/******************************************************************************
Desenvolva um algoritmo que leia uma matriz A 10x7. Ao final apresentar o total
de elementos pares e ímpares. Mostrar também o percentual de elementos pares
e ímpares em relação ao total de elementos da matriz. Exemplo: Supondo a
existência de 20 números pares e 70 ímpares, ter-se-ia 28,6% de pares e 71,4%
de ímpares.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, j, pares=0, impares=0, a[10][7];
    
    printf("Informe os elementos da matriz A\n\n");
     
    for (i=0; i<10; i++)
    	for (j=0; j<7; j++){
    		printf("A[%d][%d]: ",i, j);
    		scanf("%d", &a[i][j]);
    		if (a[i][j]%2 == 0)
    			pares++;
			else
    			impares++;
		}
    
	printf("\nTotal de elementos pares: %d\n", pares);
	printf("\nTotal de elementos impares: %d\n", impares);
    printf("\nPercentual de elementos pares: %.2f %%\n", (float)pares*100/70);
	printf("\nPercentual de elementos impares: %.2f %%\n", (float)impares*100/70);
		  	   		
    return 0;
}
