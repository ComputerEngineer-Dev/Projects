/* Desenvolver o algoritmo de um programa que receba uma palavra e o tipo
de conversão que o usuário deseja que ela sofra, que poderá ser letras
(m)aiúsculas ou mi(n)úsculas. Observe que o campo (variável) tipo de
conversão deverá ser validado. */

#include<stdio.h>
#include<ctype.h>

int main() {
	char palavra[31], tipo;
	int i;
	
	printf("Digite a palavra: ");
	gets(palavra);
	
	do {
		printf("Informe o tipo de conversao (m)aiuculas ou mi(n)usculas: ");
		scanf(" %c", &tipo);
		if (tipo != 'm' && tipo != 'n')
			printf("Opcao invalida! As opcoes validas sao: m ou n \n");
	} while (tipo != 'm' && tipo != 'n');
	
	
	for (i=0; palavra[i]; i++)
		if (tipo == 'm')
			palavra[i] = toupper(palavra[i]);
		else palavra[i] = tolower(palavra[i]);
		
	printf("Palavra modificada: %s\n", palavra);	
		
	return 0;
}