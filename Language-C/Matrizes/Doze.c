/******************************************************************************
Faça um algoritmo para ler duas matrizes reais A e B de ordem 5x5, e criar uma
matriz C de modo que: cij = 1, se aij da matriz A existe em algum lugar na
matriz B; cij = 0, se aij da matriz A não existir em B. Considere que não
existem valores repetidos na matriz A.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, j, k, l, existe;
    float a[5][5], b[5][5];
	int c[5][5];
    
    printf("Informe os elementos da matriz A\n");
    
    for (i=0; i<5; i++) 
        for (j=0; j<5; j++) {
	        printf("A[%d][%d]: ", i, j);
	        scanf("%f", &a[i][j]);
    	}
    
    printf("Informe os elementos da matriz B\n");
    
    for (i=0; i<5; i++) 
        for (j=0; j<5; j++) {
	        printf("B[%d][%d]: ", i, j);
	        scanf("%f", &b[i][j]);
    	}
    
    printf("\nMatriz A\n");
    
    for (i=0; i<5; i++){
        for (j=0; j<5; j++)
            printf("%.2f\t", a[i][j]);
        printf("\n");
    }
    
    printf("\nMatriz B\n");
    
    for (i=0; i<5; i++){
        for (j=0; j<5; j++)
            printf("%.2f\t", b[i][j]);
        printf("\n");
    }
    
    printf("\nMatriz C\n");
    
    for (i=0; i<5; i++){
		for (j=0; j<5; j++){
			existe = 0;
			for (k=0; k<5 && !(existe); k++)
				for (l=0; l<5 && !(existe); l++)
					if (a[i][j] == b[k][l])
						existe = 1;
			c[i][j] = existe;
			printf("%d\t", c[i][j]);
		}
            
        printf("\n");
    }
    
    return 0;
}

