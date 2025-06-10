/* Fazer um programa para ler uma string e um caractere. Sempre que o caractere lido aparecer na frase, ele deverá ser substituído por asterisco */

#include<stdio.h>

int main() {
	char palavra[21], letra;
	
	printf("Digite a palavra: ");
	gets(palavra);
	
	printf("Digite a letra: ");
	scanf("%c", &letra);
		
	for (int i=0; palavra[i]; i++)
		if (palavra[i] == letra)
			palavra[i] = '*';
			
	printf("Frase modificada: %s\n", palavra);	
		
	return 0;
}