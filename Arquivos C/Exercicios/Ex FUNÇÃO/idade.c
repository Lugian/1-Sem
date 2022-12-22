#include <stdio.h>
#include <locale.h>

int idade(int an, int m, int d);

int main (){
	setlocale(LC_ALL,"");
	int an, m, d;
	printf("Por favor indique seu dia de nascimento. ");
	scanf("%d", &d);
	printf("Por favor indique seu mês de nascimento. ");
	scanf("%d", &m);
	printf("Por favor indique seu ano de nascimento. ");
	scanf("%d", &an);
	int ano, mes,  dia;
	ano = 2022-an;
	mes = (ano*12)+(9-m);
	dia = (ano*365)+((9-m)*31)+d;
	if(m>9){
		ano = ano-1;
	}else{
		ano = ano;
	}
	printf("Considerando que os messes tenham 30 dias:");
	printf("\nVocê tem %d anos, %d messes e %d dias.", ano, mes, dia);
}




