/* Faça um programa que contenha um menu com as seguintes opções: 
(a) Ler uma string S1 (tamanho máximo 20 caracteres); 
(b) Imprimir o tamanho da string S1;
(c) Comparar a string S1 com uma nova string S2 fornecida pelo usuário e
imprimir o resultado da comparação; 
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
	int i, j, k, tam_a, tam_b, iguais=1, cont=0;
	
	printf("Digite a primeira palavra: ");
	gets(s1);
	
	for(tam_a=0; s1[tam_a]; tam_a++);
	
	printf("\nA palavra %s tem tamanho %d\n", s1, tam_a);
	
	printf("\nDigite a segunda palavra: ");
	gets(s2);
		
	for(tam_b=0; s2[tam_b]; tam_b++);
	
	if (tam_a != tam_b)
		iguais=0;	
	else for (i=0; s1[i] && iguais; i++)
			 if (s1[i] != s2[i])
				iguais=0;
				
	if (iguais)
		printf("\nAs palavras %s e %s sao iguais\n", s1, s2);
	else printf("\nAs palavras %s e %s sao diferentes\n", s1, s2);
	
	for(i=0; s1[i]; i++)
		s3[i] = s1[i];
		
	for(j=0; s2[j]; j++, i++)
		s3[i]=s2[j];
		
	s3[i] = '\0';
	
	printf("\nConcatenacao das palavras %s e %s: %s\n", s1, s2, s3);
	
	printf("\nPalavra %s na forma reversa: ", s1);
	
	for(i=tam_a-1; i>=0; i--)
		printf("%c", s1[i]);
		
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
	
	if (tam_a < j+k)
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
	
	for(tam_b=0; s2[tam_b]; tam_b++);
	
	if (tam_a < tam_b)
		printf("\nNao eh possivel fazer a verificacao. A string %s tem tamanho maior que a string %s\n", s2, s1);
	else {
			k = 0;
			do {
				for(i=k; s1[i] != s2[0] && s1[i]; i++);
				if (i < tam_a){
					iguais = 1;
					for (j=0; s2[j] && iguais; j++, i++){
						if (s1[i] != s2[j]){
							iguais = 0;
							k = i+1;
						}
					}	
					if (iguais)
						k = 0;
				} else {
					iguais = 0;
					k = 0;
				}
			} while (k > 0);
			
			if (iguais)
				printf("\nA string %s esta contida na string %s\n", s2, s1);
			else printf("\nA string %s nao esta contida na string %s\n", s2, s1);
	}
		
	return 0;
}