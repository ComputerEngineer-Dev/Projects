/*Fazer um programa em C para ler um nome e mostrar as 4 primeiras letras deste nome.*/

#include<stdio.h>

int main() {
	char palavra[11];
	int vogais=0;
	
	printf("Digite a palavra: ");
	gets(palavra);
		
	for (int i=0; palavra[i] != '\0'; i++)
		if (palavra[i] == 'A' || palavra[i] == 'E'	||
			palavra[i] == 'I' || palavra[i] == 'O'	||
			palavra[i] == 'U')
			vogais++;
		
	printf("A palavra %s possui %d vogais", palavra, vogais);
		
	return 0;
}