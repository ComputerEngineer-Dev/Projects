/* Sem usar as funções de string, crie um programa para contar quantos
caracteres são diferentes do caractere espaço em uma frase. */

#include<stdio.h>

int main() {
	char frase[31];
	int i, cont=0;
	
	printf("Digite uma frase: ");
	gets(frase);
	
	for (i=0; frase[i]; i++)
		if (frase[i] == ' ')
			 cont++;
		
	printf("A frase: %s possui %d caracteres diferentes de espacos em branco\n", frase, i-cont);	
		
	return 0;
}