#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	float n1, n2, n3, t;
	printf("Digite sua primeira nota: ");
	scanf("%f", &n1);
	printf("Digite sua segunda nota: ");
	scanf("%f", &n2);
	printf("Digite sua terceira nota: ");
	scanf("%f", &n3);
	t = (n1+n2+n3)/3;
	if (t >= 6){
		printf("Voc� est� aprovado, com a m�dia de %2.f", t);
	}else if (t<6 && t>=4){
		printf("Voc� est� de recupera��o, com a m�dia de %2.f", t);
	}else if (t<4){
		printf("Voc� est� reprovado, com a m�dia de %2.f", t);
	}
	
}
