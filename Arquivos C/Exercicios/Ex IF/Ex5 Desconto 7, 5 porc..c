#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"");
	char p[30];
	int pp, a1, a2;
	printf("Informe o nome do produto. ");
	scanf("%s", &p);
	printf("Informe o valor do produto. ");
	scanf("%d", &pp);
	a1 = pp+(pp/100)*5;
	a2 = pp+(pp/100)*7;
	if (pp < 1000){
		printf("O valor atual do produto %s é de R$%d, foi acrescentado 5%% do valor original.", p, a1);
	}else{
		printf("O valor atual do produto %s é de R$%d, foi acrescentado 7%% do valor original.", p, a2);
	}	
}

