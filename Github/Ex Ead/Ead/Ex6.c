#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	int d, s, s1, s2, s3, n100, n50,  n10, n5, n1;
	printf("Informe o valor do deposito. ");
	scanf("%d", &d);
	n100= d/100;
	s= (d%100);
	n50= s/50;
	s1= (s%50);
	n10= s1/10;
	s2= (s1%10);
	n5= s2/5;
	s3= (s2%5);
	n1= s3/1;
	printf("Temos disponíveis %d notas de R$100,00.", n100);
	printf("\nTemos disponíveis %d notas de R$50,00.", n50);
	printf("\nTemos disponíveis %d notas de R$10,00.", n10);
	printf("\nTemos disponíveis %d notas de R$5,00.", n5);
	printf("\nTemos disponíveis %d moedas de R$1,00.", n1);
}
