/* Faça um programa que receba do usuário uma string.
O programa imprime a string sem suas vogais.*/

#include<stdio.h>

int main() {
	char palavra[31];
	int i;
	
	printf("Digite a palavra: ");
	gets(palavra);
	
	printf("\nPalavra %s - sem as vogais\n", palavra);
	for (i=0; palavra[i]; i++)
			 if (palavra[i] != 'a' && palavra[i] != 'A' &&
			 	 palavra[i] != 'e' && palavra[i] != 'E' &&
				 palavra[i] != 'i' && palavra[i] != 'I' &&
				 palavra[i] != 'o' && palavra[i] != 'O' &&
				 palavra[i] != 'u' && palavra[i] != 'U')
					printf("%c", palavra[i]);
		
	return 0;
}