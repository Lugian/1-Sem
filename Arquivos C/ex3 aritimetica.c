/*
Desenvolva um programa que leia a velocidade de um carro (km/h)
e a distância a ser percorrida (km) por ele.
Calcule e apresente na tela, quanto tempo (horas) será necessário
para o carro percorrer a distância informada.
*/
#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"");
	int v, d, h;
	printf("Qual a velocidade? ");
	scanf("%d", &v);
	printf("Qual a distância à ser percorrida? ");
	scanf("%d", &d);
	h = d/v;
	printf("À %dkm/h em uma distância de %dkm, você chegará em %dh.", v, d,h);
}
