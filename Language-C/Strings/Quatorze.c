/* Crie um programa que leia duas strings (A e B) e mostre uma terceira string
(C) formada pelos caracteres contidos em A e B de forma intercalada.
Exemplo: Se A = “quarta” e B = “segunda”, a resposta obtida deverá ser
“qsueagrutnada”. */

#include<stdio.h>

int main() {
	char a[31], b[31], c[63];
	int i, tam_a, tam_b, tam, k=0;
	
	printf("Digite a primeira palavra: ");
	gets(a);
	
	printf("Digite a segunda palavra: ");
	gets(b);
	
	for(tam_a=0;a[tam_a];tam_a++);
	
	for(tam_b=0;b[tam_b];tam_b++);
	
	if (tam_a < tam_b)
		tam = tam_b;
	else tam = tam_a;
	
	for (i=0; i < tam; i++){
		if (i < tam_a){
			c[k] = a[i];
			k++;
		}
			
		if (i < tam_b){
			c[k] = b[i];
			k++;
		}
	}
	
	c[k] = '\0';
	
	printf("Nova string: %s", c);
		
	return 0;
}