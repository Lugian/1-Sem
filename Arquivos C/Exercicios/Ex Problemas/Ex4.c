#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	float sl, a1, pa1, a2, pa2, a3, pa3, a4, pa4;
	printf("Por favor indique seu salário. ");
	scanf("%f", &sl);
	a1= (sl/100)*20;
	pa1= a1+sl;
	a2= (sl/100)*15;
	pa2= a2+sl;
	a3= (sl/100)*10;
	pa3= a3+sl;
	a4= (sl/100)*5;
	pa4= a4+sl;
	if (sl <= 280.00){
		printf("Seu salário anterior era de R$%.2f .O acrescimo do seu salário foi de 20%%, o valor atual é de R$%.2f. O aumento foi de R$%.2f.", sl, pa1, a1);
	}else if (sl > 280.00 && sl <= 700){
		printf("Seu salário anterior era de R$%.2f .O acrescimo do seu salário foi de 15%%, o valor atual é de R$%.2f. O aumento foi de R$%.2f.", sl, pa2, a2);
	}else if (sl > 700 && sl <= 1500){
		printf("Seu salário anterior era de R$%.2f .O acrescimo do seu salário foi de 10%%, o valor atual é de R$%.2f. O aumento foi de R$%.2f.", sl, pa3, a3);
	}else if (sl > 1500 ){
		printf("Seu salário anterior era de R$%.2f .O acrescimo do seu salário foi de 5%%, o valor atual é de R$%.2f. O aumento foi de R$%.2f.", sl, pa4, a4);
	}
}
