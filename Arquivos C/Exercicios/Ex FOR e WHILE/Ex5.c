#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	int v1, v2, vp;
	printf("\nInfome o primeiro n�mero. ");
	scanf("%d", &v1);
	printf("\nInforme o segundo n�mero. ");
	scanf("%d", &v2);
	printf("\nOs n�meros par entre %d e %d s�o:", v1, v2);
	for(vp=v1; vp<v2; vp++){
		if((vp%2)==0){
			printf("\n%d", vp);
		}
	}
	for(vp=v2; vp<v1; vp++){
		if((vp%2)==0){
			printf("\n%d", vp);
		}
	}
}
