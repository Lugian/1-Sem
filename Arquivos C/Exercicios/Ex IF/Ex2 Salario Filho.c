#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"");
	int s, f, rf, sf;
	printf("\nInforme seu salário. ");
	scanf("%d", &s);
	printf("\nInforme quantos filhos tem. ");
	scanf("%d", &f);
	rf = 45*f;
	sf = rf+s;
	if (s <2000){
		printf("\nVocê recebera R$45.00 por filho, ficando com o salário de R$%d.", sf);
	}else{
		printf("\nSeu salário é igual ou ultrapassa R$2000.00, você não tem direito ao salário familia.");
	}
}

