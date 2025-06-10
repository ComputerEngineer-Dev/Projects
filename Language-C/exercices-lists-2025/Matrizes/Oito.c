/******************************************************************************
Criar um programa que possa armazenar as alturas de dez atletas de 5 delegações
que participarão das olimpíadas e imprima a maior altura de cada delegação.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, j;
	float alturas[5][10], maior;
    
    printf("Informe as alturas dos atletas\n");
    
    for (i=0; i < 5; i++){
    	printf("\nDelegacao %d\n", i+1);
        for (j=0; j < 10; j++) {
	        printf("Atleta %d - Altura: ", j+1);
	        scanf("%f", &alturas[i][j]);
    	}
    }
    
    printf("\nMaiores Alturas\n");
    
    for (i=0; i < 5; i++){
    	maior = alturas[i][0];
        for (j=1; j < 10; j++){
        	if (alturas[i][j] > maior) 
				maior = alturas[i][j];
			}
		printf("Maior altura da delegacao %d: %.2f\n", i+1, maior);
    }
       
    return 0;
}



