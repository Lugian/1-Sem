#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"");
	int s, f, rf, sf;
	printf("\nInforme seu sal�rio. ");
	scanf("%d", &s);
	printf("\nInforme quantos filhos tem. ");
	scanf("%d", &f);
	rf = 45*f;
	sf = rf+s;
	if (s <2000){
		printf("\nVoc� recebera R$45.00 por filho, ficando com o sal�rio de R$%d.", sf);
	}else{
		printf("\nSeu sal�rio � igual ou ultrapassa R$2000.00, voc� n�o tem direito ao sal�rio familia.");
	}
}

