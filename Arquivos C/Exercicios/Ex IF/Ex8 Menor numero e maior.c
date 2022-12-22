#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"");
	int a, b;
	printf("\nDigite o primeiro número. ");
	scanf("%d", &a);
	printf("\nDigite o segundo número. ");
	scanf("%d", &b);
	if (a>b){
		printf("\nEste número é o maior %d", a);
	}else{
		printf("\nEste número é o menor %d", a);
	}
	if (b>a){
		printf("\nEste número é o maior %d", b);
	}else if (b<a){
		printf("\nEste número é o menor %d", b);
	}
}

