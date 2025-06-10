/*Fazer um programa em C para ler um nome e mostrar as 4 primeiras letras deste nome.*/

#include<stdio.h>

int main() {
	char nome[11];
	printf("Digite o nome: ");
	gets(nome);
	
	printf("Quatro primeiras letras do nome %s\n", nome);
	
	for (int i=0; i < 4; i++)
		printf("%c", nome[i]);
	return 0;
}