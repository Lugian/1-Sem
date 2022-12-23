#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,""); 
	int i;
	float v[5], a1[5], a2[5];
	char n[5][20];
	printf("Por favor indique os nomes das Mercadorias.\n");
	for(i=0;i<5;i++){
  		printf("Produto %d: ", i+1);
  		scanf("%s", &n[i]);
	}
	printf("Por favor indique os valores.\n");
	for(i=0;i<5;i++){ 
		printf("Valor do produto [%s]: ", n[i]);
		scanf("%f", &v[i]);
	}
	for(i=0;i<5;i++){
		if(v[i]<1000){
			a1[i]= (v[i]/100)*5+v[i];
			printf("Novo preço [%s]= R$%.2f (reajuste de 5%%)\n", n[i], a1[i]);
		}else{
			a2[i]= (v[i]/100)*7+v[i];
			printf("Novo preço [%s]= R$%.2f (reajuste de 7%%)\n", n[i], a2[i]);
		}
	}
}

