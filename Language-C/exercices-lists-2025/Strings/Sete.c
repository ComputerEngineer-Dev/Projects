/* Faça um programa que receba uma cadeia de caracteres e um número de
repetições e então gere uma nova cadeia */
#include <stdio.h>

int main()
{
    char palavra[21], palavra_aux[300];
    int i, j, numero, cont;
    
    printf("Digite a palavra: ");
    gets(palavra);
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    
    for (i=0, cont=0; i < numero; i++)
    	for (j=0; palavra[j]; j++, cont++)
    		palavra_aux[cont] = palavra[j];
    	
    palavra_aux[cont] = '\0';
    
    printf("Palavra gerada: %s", palavra_aux);
    
    return 0;
}