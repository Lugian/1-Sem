#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	float sl, d1, d2, d3, d4;
	printf("Por favor informe o valor do seu salário. ");
	scanf("%f", &sl);
	d1= sl - (sl/100)*7.5;
	d2= sl - (sl/100)*9.0;
	d3= sl - (sl/100)*12.0;
	d4= sl - (sl/100)*14.0;
	if(sl <= 1212.00){
		printf("O desconto do INSS foi de 7.5%%, seu salário atual é R$%2.f", d1);
	}else if(sl >= 1212.01 && sl <= 2427.35){
		printf("O desconto do INSS foi de 9%%, seu salário atual é R$%2.f", d2);
	}else if(sl >= 2427.36 && sl <= 3641.03){
		printf("O desconto do INSS foi de 12%%, seu salário atual é R$%2.f", d3);
	}else if(sl >= 3641.04 && sl <= 7087.22){
		printf("O desconto do INSS foi de 14%%, seu salário atual é R$%2.f", d4);
	}else if(sl > 7087.22){
		printf("O desconto do INSS foi de 14%%, seu salário atual é R$%2.f", d4);
	}	
}
