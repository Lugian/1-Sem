#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	float i, p;
	printf("Por favor indique o valor por pão. ");
	scanf("%f", &p);
	for (i >1; i<=50; i++){
		printf("Quantidade de pão [%1.f] = R$%.2f\n", i, i*p);
	}
}
