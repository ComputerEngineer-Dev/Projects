/* O código de Cesar é uma das mais simples e conhecidas técnicas de criptografia.
É um tipo de substituição na qual cada letra do texto é substituída por outra,
que se apresenta no alfabeto abaixo dela um número fixo de vezes.
Por exemplo, com uma troca de 3 posições, A seria substituída por D, B se tornaria E,
e assim por diante. Implemente um programa que faça uso desse Código de Cesar (3 posições),
entre com uma string e retorne a string codificada.
String: A LIGEIRA RAPOSA MARROM SALTOU SOBRE O CACHORRO CANSADO
Nova string: D OLJHLUD UDSRVD PDUURP VDOWRX VREUH R FDFKRUUR FDQVDGR */

#include<stdio.h>

int main() {
	char frase[71], nova_frase[71];
	int i, tam, j=0;
	
	printf("Digite a frase inicial: ");
	gets(frase);
	
	for (tam=0;frase[tam];tam++, j++)
		if (frase[tam] != ' ')
			nova_frase[j] = frase[tam]+3;
		else nova_frase[j] = frase[tam];
	
	nova_frase[j] = '\0';
	
	printf("%s", nova_frase);
	
	return 0;
}