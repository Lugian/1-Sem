#include <stdio.h>
#include <locale.h>

int idade(int i);

int main (){
	setlocale(LC_ALL,"");
	int ano; 
	printf("Por favor indique o ano de nascimento do usu�rio. ");
	scanf("%d", &ano);
	printf("O usu�rio tem/vai fazer: %d anos", idade(ano));
}

int idade(int i){
	return 2022-i;
}
