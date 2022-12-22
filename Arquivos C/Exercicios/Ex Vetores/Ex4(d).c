#include <stdio.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL,"");
	int v[10], i, a, b, p;
	printf("Valor do primeiro vetor.\n");
	for (i = 0 ; i<10; i++){
		printf("Digite o valor da posição %d: ", i);
		scanf("%d", &v[i]);
	}
	printf("Digite o número que deseja procurar. ");
	scanf("%d", &b);
	for(i=0; i<10; i++){
		if (v[i] == b){
			a == 1;
			p = i;
		}
	}
	if (a == 0){
		printf("Número não encontrado. ");
	}else{
		printf("Número encontrado na posição %d", p);
	}
}
