#include <stdio.h>
#include <locale.h>

int * idade(int d, int m, int an);

int main (){
	setlocale(LC_ALL,"");
	int d, m, an;
	printf("Por favor indique seu dia de nascimento. ");
	scanf("%d", &d);
	printf("Por favor indique seu mês de nascimento. ");
	scanf("%d", &m);
	printf("Por favor indique seu ano de nascimento. ");
	scanf("%d", &an);
	int * v = idade(d, m, an);
	printf("Usando como base a data 22/09/2022");
	printf("\nIdade: %d anos, %d messes e %d dias.", *(v), *(v+1), *(v+2));
}

int * idade(int d, int m, int an){
	int ano, mes, dia;
	ano = 2022-an;
	if(m>9){
		ano = ano-1;
		mes = 12-(m-9);
	}else{
		mes = 9-m;
	}
	dia = 22-d;
	int v[3] = {ano, mes, dia};
	return v;
}
