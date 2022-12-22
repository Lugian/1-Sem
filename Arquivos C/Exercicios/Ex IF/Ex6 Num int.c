#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	int n1, n2, n3, n4, n5, n6;
	printf("Digite o primeiro número. ");
	scanf("%d", &n1);
	printf("Digite o segundo número. ");
	scanf("%d", &n2);
	printf("Digite o terceiro número. ");
	scanf("%d", &n3);
	printf("Digite o quarto número. ");
	scanf("%d", &n4);
	printf("Digite o quinto número. ");
	scanf("%d", &n5);
	printf("Digite o sexto número. ");
	scanf("%d", &n6);
	if (n1>n2 && n1>n3 &&n1>n4 && n1>n5 && n1>n6){
		printf("O maior número é o %d", n1);
	}else if (n2>n1 && n2>n3 &&n2>n4 && n2>n5 && n2>n6){
		printf("O maior número é o %d", n2);
	}else if (n3>n1 && n3>n2 &&n3>n4 && n3>n5 && n3>n6){
		printf("O maior número é o %d", n3);
	}else if (n4>n1 && n4>n2 &&n4>n3 && n4>n5 && n4>n6){
		printf("O maior número é o %d", n4);
	}else if (n5>n1 && n5>n2 &&n5>n3 && n5>n4 && n5>n6){
		printf("O maior número é o %d", n5);
	}else if (n6>n1 && n6>n2 &&n6>n3 && n6>n4 && n6>n5){
		printf("O maior número é o %d", n6);
	}	
}
