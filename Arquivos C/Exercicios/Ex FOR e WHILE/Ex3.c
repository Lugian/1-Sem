#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int va, vae;
	printf("Escolha um n�mero. ");
	scanf("%d", &vae);
	printf("Os intervalos entre o valor escolhido s�o: \n");
	for(va=0; va<vae; va++){
		printf("%d\n", va);
	}
}
