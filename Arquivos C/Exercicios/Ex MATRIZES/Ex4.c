#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int i, j;
	float r[5], h[5], v[5];
	char n[5][20];
	printf("Por favor indique os nomes de cinco cidades.\n");
	for(i=0; i<5; i++){
  		printf("Cidade %d: ", i+1);
  		scanf("%s", &n[i]);
	}
	printf("Por favor indique a quantidade de habitantes.\n");
	for(i=0; i<5; i++){ 
		printf("Habitantes da cidade %s: ", n[i]);
		scanf("%d", &h[i]);
	}
	printf("Por favor indique a quantidade de votos apurados.\n");
	for(i=0; i<5; i++){ 
		printf("Votos apurados em %s: ", n[i]);
		scanf("%d", &v[i]);
	}
	for(i=0;i<5;i++){
		r[i] = (v[i]/h[i])*100;
		printf("Cidade %s = percentual de votos (%.1f%%)\n", n[i], r[i]);
	}
}
