#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "");
	float v = 0, i, vf, d, t, n;
	int p;
	printf("Por favor indique quantos produtos você comprou. ");
	scanf("%d", &p);
	for (i = 0 ; i<p; i++){
		printf("Valor do produto [%1.f]: ", i);
		scanf("%f", &v);
		vf = vf+v;
	}
	printf("O valor final ficou de R$%.2f.", vf);
	printf("\nInforme a quantia que irá pagar. ");
	scanf("%f", &d);
	t = d - vf;
	n = vf - d;
	if(d < vf){
		printf("Você não tem a quantida necessária. Ainda é necessário R$%.2f", n);
	}else{
		printf("Seu troco é de R$%.2f", t);
	}
}
