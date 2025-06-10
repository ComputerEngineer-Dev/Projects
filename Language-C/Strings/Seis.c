/* Faça um algoritmo que leia uma palavra e substitua as letras minúsculas por
letras maiúsculas. Consultar a biblioteca de funções para strings. */
#include <stdio.h>
#include <string.h>

int main()
{
    char palavra[21];
    int i;
    
    printf("Digite a palavra: ");
    gets(palavra);
    
    for (i=0; palavra[i]; i++)
    	palavra[i] = toupper(palavra[i]);
    
    printf("Palavra em maisculo: %s", palavra);
    
    return 0;
}
