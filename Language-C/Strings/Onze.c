/* Fazer um programa para ler uma string e contar quantas vezes um
determinado caractere aparece na string. O caractere deverá ser informado
pelo usuário. */

#include<stdio.h>

int main() {
	char palavra[31], letra;
	int i, cont=0;
	
	printf("Digite a palavra: ");
	gets(palavra);
	
	printf("Informe o caractere: ");
	scanf(" %c", &letra);
	
	
	for (i=0; palavra[i]; i++)
		if (palavra[i] == letra)
			 cont++;
		
	printf("O caractere %c aparece %d vezes na palavra %s\n", letra, cont, palavra);	
		
	return 0;
}