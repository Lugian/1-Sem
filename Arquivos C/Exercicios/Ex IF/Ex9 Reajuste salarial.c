#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	float sl, a1, a2, a3, a4;
	printf("Por favor indique seu salário. ");
	scanf("%f", &sl);
	a1= ((sl/100)*15)+sl;
	a2= ((sl/100)*12)+sl;
	a3= ((sl/100)*9)+sl;
	a4= ((sl/100)*6)+sl;
	if (sl >= 1500.00 && sl <= 1750.00){
		printf("O acrescimo do seu salário foi de 15%%, o valor atual é de R$%2.f", a1);
	}else if (sl >= 1750.00 && sl <= 2000){
		printf("O acrescimo do seu salário foi de 12%%, o valor atual é de R$%2.f", a2);
	}else if (sl >= 2000 && sl <= 3000){
		printf("O acrescimo do seu salário foi de 9%%, o valor atual é de R$2.f", a3);
	}else if (sl >= 3000 ){
		printf("O acrescimo do seu salário foi de 6%%, o valor atual é de R$%2.f", a4);
	}
}
