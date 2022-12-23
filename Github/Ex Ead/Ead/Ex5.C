#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	float a, b, c, d, x1, x2;
	printf("Informe o valor de A da sua equação de segundo grau.");
	scanf("%f", &a);
	printf("Informe o valor de B da sua equação de segundo grau.");
	scanf("%f", &b);
	printf("Informe o valor de C da sua equação de segundo grau.");
	scanf("%f", &c);
	d= (b*b)-4*a*c;
	x1 = (-b + sqrt(d))/ (2*a);
	x2 = (-b - sqrt(d)) / (2*a);
	if (d<0){
		printf("Delta é negativo, portanto a equação não pode continuar. Numero irreal.");
	}else if (a==0){
		printf("O valor de A é igual a zero, portanto a equação não é do segundo grau.");
	}else if (d==0 && x1>0){
		printf("Delta é igual a zero, portanto existe apenas uma raiz real.\nA raiz real é %.1f.", x1);
	}else if (d==0 && x1<0){
		printf("Delta é igual a zero, portanto existe apenas uma raiz real.\nA raiz real é %.1f.", x2);
	}else if (d>0){
		printf("Temos 2 raizes reais.\nO resultado da equação é:\nPrimeira linha: %.1f\nSegunda linha: %.1f", x1, x2);
	}
}


