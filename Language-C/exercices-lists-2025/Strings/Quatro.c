/*Construir um programa que lê uma string e depois retira todos os espaços em branco existentes nesta string. Mostrar a string original e a string modificada.*/

#include<stdio.h>

int main() {
	char palavra[21], aux[21];
	int j=0;
	
	printf("Digite a palavra: ");
	gets(palavra);
	
	for (int i=0; palavra[i]; i++)
		if (palavra[i] != ' '){
			aux[j] = palavra[i];
			j++;
		}
		
	aux[j] = '\0';
			
	printf("String original: %s - String modificada: %s\n", palavra, aux);
		
	return 0;
}