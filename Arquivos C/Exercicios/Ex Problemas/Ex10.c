#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "");
	float v = 0, i, vf, d, t, n;
	int p;
	printf("Por favor indique quantos produtos voc� comprou. ");
	scanf("%d", &p);
	for (i = 0 ; i<p; i++){
		printf("Valor do produto [%1.f]: ", i);
		scanf("%f", &v);
		vf = vf+v;
	}
	printf("O valor final ficou de R$%.2f.", vf);
	printf("\nInforme a quantia que ir� pagar. ");
	scanf("%f", &d);
	t = d - vf;
	n = vf - d;
	if(d < vf){
		printf("Voc� n�o tem a quantida necess�ria. Ainda � necess�rio R$%.2f", n);
	}else{
		printf("Seu troco � de R$%.2f", t);
	}
}
