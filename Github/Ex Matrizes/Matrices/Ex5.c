#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	float d[10], v[10], vf[10]; 
	int i, j;
	char n[10][20];
	printf("Informe o nome dos produtos\n");
	for(i=0; i<10; i++){
  		printf("Produto %d: ", i+1);
  		scanf("%s", &n[i]);
	}
	printf("Informe os preços.\n");
	for(i=0; i<10; i++){ 
		printf("Preço de [%s]: ", n[i]);
		scanf("%f", &v[i]);
	}
	printf("Informe os descontos obtidos.\n");
	for(i=0; i<10; i++){ 
		printf("Desconto em [%s]: ", n[i]);
		scanf("%f", &d[i]);
	}
	for(i=0;i<10;i++){
		vf[i] = v[i]-(v[i]/100)*d[i];
		printf("Valor inicial do produto [%s] = R$%.2f, valor final R$%.2f\n", n[i], v[i],vf[i]);
	}
}
