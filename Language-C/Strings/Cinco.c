#include<stdio.h>

int main(){
	char palavra[21];
	int i, j, fim, palindromo=1;
	printf("Digite a palavra: ");
	gets(palavra);
	for (j=0; palavra[j]; j++);
	
	for (i=0, fim = j, j--; i < fim/2 && palindromo==1; i++, j--)
		if (palavra[i] != palavra[j])
			palindromo=0;
	
	if (palindromo == 0)
		printf("A palavra %s nao eh palindromo", palavra);
	else printf("A palavra %s eh palindromo", palavra);
			
	return 0;
}