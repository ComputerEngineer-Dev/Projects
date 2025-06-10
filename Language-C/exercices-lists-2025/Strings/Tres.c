/*Fazer um programa em C para ler um nome e mostrar as 4 primeiras letras deste nome.*/

#include<stdio.h>

int main() {
	char palavra[11], letra;
	int posicao=-1;
	
	printf("Digite a palavra: ");
	gets(palavra);
	
	printf("Digite a letra: ");
	scanf("%c", &letra);
		
	for (int i=0; palavra[i] != '\0'; i++)
		if (palavra[i] == letra)
			posicao=i;
			
	if (posicao == -1)
		printf("A letra %c nao foi encontrada na palavra %s", letra, palavra);	
	else printf("A letra %c foi encontrada na palavra %s - posicao: %d", letra, palavra, posicao);
		
	return 0;
}