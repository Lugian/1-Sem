/*
Desenvolva um programa que leia a velocidade de um carro (km/h)
e a dist�ncia a ser percorrida (km) por ele.
Calcule e apresente na tela, quanto tempo (horas) ser� necess�rio
para o carro percorrer a dist�ncia informada.
*/
#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"");
	int v, d, h;
	printf("Qual a velocidade? ");
	scanf("%d", &v);
	printf("Qual a dist�ncia � ser percorrida? ");
	scanf("%d", &d);
	h = d/v;
	printf("� %dkm/h em uma dist�ncia de %dkm, voc� chegar� em %dh.", v, d,h);
}
