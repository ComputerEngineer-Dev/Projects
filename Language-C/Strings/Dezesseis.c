/* Construa um programa em C que leia duas strings fornecidas pelo usuário.
O programa deve verificar se a segunda string lida está contida no final da
primeira, retornando o resultado da verificação.*/

#include<stdio.h>

int main() {
	char palavra1[31], palavra2[31];
	int i, j, tam_a, tam_b, contida=1;
	
	printf("Digite a primeira palavra: ");
	gets(palavra1);
	
	printf("Digite a segunda palavra: ");
	gets(palavra2);
	
	for(tam_a=0;palavra1[tam_a];tam_a++);
	
	for(tam_b=0;palavra2[tam_b];tam_b++);
	
	if (tam_a < tam_b)
		contida=0;	
	else for (i=tam_a-1, j=tam_b-1; j >=0 && contida; i--, j--)
			 if (palavra1[i] != palavra2[j])
				contida=0;
				
	if (contida)
		printf("A palavra %s esta contida na palavra %s", palavra2, palavra1);
	else printf("A palavra %s nao esta contida na palavra %s", palavra2, palavra1);
		
	return 0;
}