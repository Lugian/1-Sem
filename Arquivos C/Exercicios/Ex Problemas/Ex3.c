#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	float a, L1, L18, L36, vt, vt2;
	char l[2];
	printf("Por favor indique o tamanho da aréa que deseja pintar. ");
	scanf("%f", &a);
	printf("Cada litro de tinta pode pintar até 6m².");
	L1 = a/6.0;
	printf("\nVocê vai precisar de %.2fL de tinta.\nTemos duas opções, latas de 18L ou 3.6L", L1);
	L18= L1/18;
	L36= L1/3.6;
	printf("\nPrecisando de %.2fL de tinta,\nvocê pode pegar ou %2.f latas de 18L ou %2.f latas de 3.6L. ", L1, L18, L36);
	printf("Escolha entre as duas opções.");
	printf("\na) Latas de 18L\nb) Latas de 3.6L\n");
	scanf("%s", &l);
	vt= L18*80.0;
	vt2= L36*25.0;
	if (strcmp(l,"a")==0){
		printf("Considerando o valor de R$80,00 por lata, %2.f latas de 18L, fica com o valor final de R$%.2f",L18, vt);
	}else if (strcmp(l,"b")==0){
		printf("Considerando o valor de R$25,00 por lata, %2.f latas de 18L, fica com o valor final de R$%.2f", L36, vt2);
	}	
}
