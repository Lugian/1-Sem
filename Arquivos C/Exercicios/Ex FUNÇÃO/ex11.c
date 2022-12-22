#include <stdio.h>
#include <locale.h>

int idade(int i);

int main (){
	setlocale(LC_ALL,"");
	int ano; 
	printf("Por favor indique o ano de nascimento do usuário. ");
	scanf("%d", &ano);
	printf("O usuário tem/vai fazer: %d anos", idade(ano));
}

int idade(int i){
	return 2022-i;
}
