/*Desenvolva um programa 
que leia o nome de uma cidade, o número total de eleitores e
o número total de votos apurados na última eleição. O programa deverá calcular e 
exibir a porcentagem de participação dos eleitores desta cidade na última eleição.*/

#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"");
	char c [20];
	int e, v;
	float p;
	
	printf("Qual o nome da cidade? ");
	scanf("%s", &c);
	printf("\nQual a quantidade de eleitores na cidade %s?", c);
	scanf("%d", &e);
	printf("\nQual a quantidade de votos? ");
	scanf("%d", &v);
	
	p = v*100/e;
	
	printf("\nDe acordo, na cidade %s, com %d eleitores e %d votos a porcentagem obtida é de %2.f %%", c, e, v, p);
}

