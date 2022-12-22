#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	int v1, v2, vp;
	printf("\nInfome o primeiro número. ");
	scanf("%d", &v1);
	printf("\nInforme o segundo número. ");
	scanf("%d", &v2);
	printf("\nOs números par entre %d e %d são:", v1, v2);
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
