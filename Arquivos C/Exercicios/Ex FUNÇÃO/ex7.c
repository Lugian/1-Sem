#include<locale.h>
#include<stdio.h>

int fat(int v1);

int main(){
	setlocale(LC_ALL,"");
	int v;
	printf("Indique o valor que deseja o fatorial. ");
	scanf("%d", &v);
	printf("Fatorial de %d: %d", v, fat(v));
}
  
int fat(int v1){
	if(v1 == 0 || v1 == 1){
		return 1;
	}else{
		return v1*fat(v1-1); //recursividade (usar a função dentro dela mesma/chamar pela função)
	}
}
