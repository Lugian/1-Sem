#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	float a, b, c, d, x1, x2, yv, xv;
	printf("Informe o valor de A da sua equa??o de segundo grau.");
	scanf("%f", &a);
	printf("Informe o valor de B da sua equa??o de segundo grau.");
	scanf("%f", &b);
	printf("Informe o valor de C da sua equa??o de segundo grau.");
	scanf("%f", &c);
	d= (b*b)-4*a*c;
	x1 = (-b + sqrt(d))/ (2*a);
	x2 = (-b - sqrt(d)) / (2*a);
	printf("Valor de delta : %.1f. Raiz de delta: %.1f\n", d, sqrt(d));
	if (d<0){
		printf("Delta ? negativo, portanto a equa??o n?o pode continuar. Numero irreal.");
	}else if (a==0){
		printf("O valor de A ? igual a zero, portanto a equa??o n?o ? do segundo grau.");
	}else if (d==0 && x1>0){
		printf("Delta ? igual a zero, portanto existe apenas uma raiz real.\nA raiz real ? %.1f.", x1);
	}else if (d==0 && x1<0){
		printf("Delta ? igual a zero, portanto existe apenas uma raiz real.\nA raiz real ? %.1f.", x2);
	}else if (d>0){
		printf("Temos 2 raizes reais.\nO resultado da equa??o ?:\nPrimeira linha: %.1f\nSegunda linha: %.1f", x1, x2);
	}
	yv = -(sqrt(d))/(4*a);
	xv = -b/(2*a);
	printf("\nX do vertice: %.1f", xv);
	printf("\nY do v?rtice: %.1f", yv);
	
}



