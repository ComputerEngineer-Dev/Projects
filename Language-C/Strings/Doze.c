/* Crie um algoritmo para contar quantos espaços em branco existem em uma
frase (sem usar as funções). */

#include<stdio.h>

int main() {
	char frase[31];
	int i, cont=0;
	
	printf("Digite uma frase: ");
	gets(frase);
	
	for (i=0; frase[i]; i++)
		if (frase[i] == ' ')
			 cont++;
		
	printf("A frase: %s possui %d espacos em branco\n", frase, cont);	
		
	return 0;
}