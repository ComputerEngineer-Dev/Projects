/* Faça um programa que contenha um menu com as seguintes opções: 
(a) Ler uma string S1 (tamanho máximo 20 caracteres); 
(b) Imprimir o tamanho da string S1;
(c) Comparar a string S1 com uma nova string S2 fornecida pelo usuário e
imprimir o resultado da comparação, se são iguais ou se são diferentes; 
(d) Concatenar a string S1 com uma nova string S2 e imprimir na tela o
resultado da concatenação; 
(e) Imprimir a string S1 de forma reversa;
(f) Contar quantas vezes um dado caractere aparece na string S1. Esse
caractere deve ser informado pelo usuário; 
(g) Substituir o caractere C1 da string s1 pelo caractere C2. Os caracteres C1 e C2 serão lidos pelo usuário; 
(h) Retornar uma substring da string s1. Para isso o usuário deve informar a partir de qual posição deve ser
criada a substring e qual é o tamanho da substring;
(i) Verificar se uma string s2 esta contida na substring de s1. A string s2 deve ser
informada pelo usuario; 
*/

#include<stdio.h>

int main() {
	char s1[21], s2[21], s3[41], letra, letra2;
	int i, j, k, cont=0;
	
	printf("Digite a primeira palavra: ");
	gets(s1);
	
	printf("\nA palavra %s tem tamanho %d\n", s1, strlen(s1));
	
	printf("\nDigite a segunda palavra: ");
	gets(s2);
	
	if (strcmp(s1, s2) == 0)
		printf("\nAs palavras %s e %s sao iguais\n", s1, s2);
	else printf("\nAs palavras %s e %s sao diferentes\n", s1, s2);
	strcpy(s3, s1);
	strcat(s3, s2);
	printf("\nConcatenacao das palavras %s e %s: %s\n", s1, s2, s3);
	
	strcpy(s3, s1);
	printf("\nPalavra %s na forma reversa: ", strrev(s3));
	
	printf("\n\nInforme o caractere que sera pesquisado na palavra %s: ", s1);
	scanf(" %c", &letra);
	
	for(i=0; s1[i]; i++)
		if (s1[i] == letra)
			cont++;
			
	printf("\nO caractere %c aparece %d vezes na palavra %s\n", letra, cont, s1);
		
	printf("\nInforme o primeiro caractere: ");
	scanf(" %c", &letra);
	
	printf("\nInforme o segundo caractere: ");
	scanf(" %c", &letra2);
	
	for (i=0; s1[i]; i++)
		if (s1[i] == letra)
			s1[i] = letra2;
			
	printf("\nPalavra modificada %s\n", s1);

	printf("\nInforme a posicao inicial da substring: ");
	scanf("%d", &j);
	
	printf("\nInforme a quantidade de caracteres para a geracao da nova string: ");
	scanf("%d", &k);
	
	if (strlen(s1) < j+k)
		printf("\nNao eh possivel gerar a substring, quantidade de caracteres maior que o tamanho da string %s\n", s1);
	else {
		for (i=j, cont=0; cont < k; i++, cont++)
			s3[cont] = s1[i];
		s3[cont] = '\0';
		printf("\nSubstring gerada: %s\n", s3);
	}
	
	fflush(stdin);
	
	printf("\nInforme a string que sera pesquisada na palavra %s: ", s1);
	gets(s2);
	
	if (strstr(s1, s2))
		printf("\nA string %s esta contida na string %s\n", s2, s1);
	else printf("\nA string %s nao esta contida na string %s\n", s2, s1);
		
	return 0;
}