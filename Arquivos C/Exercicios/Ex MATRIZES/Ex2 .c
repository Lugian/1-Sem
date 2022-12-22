#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int v[5], e[5], p[5]; 
	int i;
	char n[5][20];
	printf("Por favor indique os nomes dos times.\n");
	for(i=0;i<5;i++){
  		printf("Time %d: ", i+1);
  		scanf("%s", &n[i]);
	}
	printf("Por favor indique a quantidade de vitórias.\n");
	for(i=0;i<5;i++){ 
		printf("Quantidade de vitórias do time %s: ", n[i]);
		scanf("%d", &v[i]);
	}
	printf("Por favor indique a quantidade de empates.\n");
	for(i=0;i<5;i++){ 
		printf("Quantidade de empates do time %s: ", n[i]);
		scanf("%d", &e[i]);
	}
	printf("A quantidade final de pontos dos times foram de\n");
	for(i=0;i<5;i++){
		p[i]=v[i]*3+e[i]*1;
		printf("Total de pontos de %s = %d\n", n[i], p[i]);
	}
}
