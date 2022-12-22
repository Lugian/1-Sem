#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int p, vd, d, pf;
	printf("Informe o valor do produto. ");
	scanf("%d", &p);
	vd= 8;
	d= (p/100)*vd;
	pf= p-d;
	if (p > 1000){
		printf("O desconto dada foi de 8%%, ficando: R$%d.", pf);
	}else{
		printf("Seu produto não tem desconto.");
	}
}
