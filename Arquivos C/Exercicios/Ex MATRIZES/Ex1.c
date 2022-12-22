#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int s[5], r[5]; 
	int i, j;
	char n[5][20];
	printf("Por favor indique os nomes.\n");
	for(i = 0; i <5; i++){
  		printf("Nome %d: ", i);
  		scanf("%s", &n[i]);
	}
	printf("Por favor indique os valores do salário.\n");
	for(i=0; i<5; i++){ 
		printf("Indique o salário de %s: ", n[i]);
		scanf("%d", &s[i]);
	}
	printf("Por favor indique os reajustes do salário.\n");
	for(i=0; i<5; i++){ 
		printf("Indique o reajuste do salário (R$%d) de %s: ", s[i], n[i]);
		scanf("%d", &r[i]);
	}
	for(i=0;i<5;i++){
		s[i] = (s[i]/100)*r[i] + s[i];
		printf("O salário atual de %s, é de R$%d.\n", n[i], s[i]);
	}
}
