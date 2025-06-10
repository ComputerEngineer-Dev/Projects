/* Desenvolver um programa que obtenha as seguintes informações de uma pessoa:
nome e sobrenome. Após, realizar a seguintes tarefas:
A. Copiar o nome do seu colega para uma variável denominada
nome_compl;
B. Concatenar o sobrenome à variável nome_completo;
C. Obter o tamanho da variável nome_completo;
D. Imprimir na tela o nome completo e seu tamanho*/

#include<stdio.h>

int main() {
	char nome[26], sobrenome[26], nome_completo[53];
	int i, j;
	
	printf("Digite o nome da pessoa: ");
	gets(nome);
	
	printf("Digite o sobrenome da pessoa: ");
	gets(sobrenome);
	
	for (i=0, j=0; nome[i]; i++, j++)
		nome_completo[j] = nome[i];
		
	nome_completo[j] = ' ';
	j++;
		
	for (i=0; sobrenome[i]; i++, j++)
		nome_completo[j] = sobrenome[i];
		
	nome_completo[j] = '\0';
			
	printf("Nome completo: %s\n", nome_completo);	
	printf("Numero de caracteres: %d\n", j);	
		
	return 0;
}