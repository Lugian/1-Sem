#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	int v1, v2, va;
	printf("Digite o primeiro valor. ");
	scanf("%d", &v1);
	printf("\nDigite o segundo valor. ");
	scanf("%d", &v2);
	printf("\nOs valores entre %d e %d são:", v1, v2);
	for(va=v1; va<v2; va++){
		printf("%d\n", va);
	}
	for(va=v2; va<v1; va++){
		printf("%d\n", va);
	}
}
