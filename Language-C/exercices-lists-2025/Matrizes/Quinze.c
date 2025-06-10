/******************************************************************************
A empresa Pregotex Inc. possui uma tabela para representar as vendas dos seus produtos (em barris) durante o ano. Cada linha representa um produto e as colunas são os meses do ano. Considere que a quantidade máxima de produtos é cinquenta. Faça um algoritmo que leia uma tabela deste tipo e depois escreva:
o total de venda anual de cada produto;
o total de vendas da empresa em cada mês. 
Produto		Jan		Fev		Mar		…	Dez
Prego		1200	1250	1000	…	1280
Porca		3100	3150	3500	…	2354
Parafuso	3000	2500	2845	…	1584
*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, j;
    char produtos[50][21], descricao[21];
    float vendas[50][12], soma_mes[12], soma_produto;
    
    printf("Informe os dados dos produtos\n");
     
    for (i=0; i<3; i++){
    	printf("\nProduto: ");
        gets(produtos[i]);
		
        printf("\nInforme o total de vendas para o produto %s nos meses do ano\n", produtos[i]);
    	for (j=0; j<12; j++){
    		soma_mes[j] = 0;
			if (j+1==1)
				printf("\nJaneiro: ");
			else if (j+1==2)
					printf("Fevereiro: ");
				 else if (j+1==3)
						  printf("Marco: ");
						else if (j+1==4)
								printf("Abril: ");
							 else if (j+1==5)
							 		 printf("Maio: ");
								  else if (j+1==6)
								  		   printf("Junho: ");
									   else if (j+1==7)
												printf("Julho: ");
											else if (j+1==8)
													printf("Agosto: ");
												 else if (j+1==9)
												 		 printf("Setembro: ");
											          else if (j+1==10)
													  		  printf("Outubro: ");
														   else if (j+1==11)
														   			printf("Novembro: ");
																else printf("Dezembro: ");
			scanf("%f", &vendas[i][j]);
			}
        fflush(stdin);	
    }
	
	printf("\nResultado das vendas\n\n");
	
	printf("Produto\t\t");
	printf("Jan\t");
	printf("Fev\t");
	printf("Mar\t");
	printf("Abr\t");
	printf("Mai\t");
	printf("Jun\t");
	printf("Jul\t");
	printf("Ago\t");
	printf("Set\t");
	printf("Out\t");
	printf("Nov\t");
	printf("Dez\t");
	printf("Total\n")	;
		
    for (i=0; i < 3; i++){
    	printf("%s", produtos[i]);
    	soma_produto = 0;
    	for (j=0; j < 12; j++){
    		if (j==0 && strlen(produtos[i]) < 8)
    			printf("\t\t%.2f", vendas[i][j]);
    		else printf("\t%.2f", vendas[i][j]);
    		soma_produto += vendas[i][j];
    		soma_mes[j] += vendas[i][j];
		}
		printf("\t%.2f", soma_produto);
		printf("\n");
	}
	
	printf("Total");
	for (j=0; j < 12; j++){
		if (j==0)
    		printf("\t\t%.2f", soma_mes[j]);
    	else printf("\t%.2f", soma_mes[j]);
	}
		
    		
    return 0;
}



