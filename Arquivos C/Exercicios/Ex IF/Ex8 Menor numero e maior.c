#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"");
	int a, b;
	printf("\nDigite o primeiro n�mero. ");
	scanf("%d", &a);
	printf("\nDigite o segundo n�mero. ");
	scanf("%d", &b);
	if (a>b){
		printf("\nEste n�mero � o maior %d", a);
	}else{
		printf("\nEste n�mero � o menor %d", a);
	}
	if (b>a){
		printf("\nEste n�mero � o maior %d", b);
	}else if (b<a){
		printf("\nEste n�mero � o menor %d", b);
	}
}

