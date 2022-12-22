#include <stdio.h>
#include <locale.h>
//o código fica muito grande, porém a ideia é a implantada
int main(){
	setlocale(LC_ALL,"");
	int a, b, c, d, e;
	printf("Indique o primeiro número. ");
	scanf("%d", &a);
	printf("Indique o segundo número. ");
	scanf("%d", &b);
	printf("Indique o terceiro número. ");
	scanf("%d", &c);
	printf("Indique o quarto número. ");
	scanf("%d", &d);
	printf("Indique o quinto número. ");
	scanf("%d", &e);
	if (a>b, b>c, c>d, d>e){
        printf("\n%d \n%d \n%d \n%d \n%d", a, b, c, d, e);
    }else if (b>a, a>c, c>d, d>e){
        printf("\n%d \n%d \n%d \n%d \n%d", b, a, c, d, e);
	}else if (b>c, c>a, a>d, d>e){
		printf("\n%d \n%d \n%d \n%d \n%d", b, c, a, d, e);
	}else if (b>c, c>d, d>a, a>e){
        printf("\n%d \n%d \n%d \n%d \n%d", b, c, d, a, e);
	}else if (b>c, c>d, d>e, e>a){
		printf("\n%d \n%d \n%d \n%d \n%d", b, c, d, e, a);
	}else if (a>c, c>b, b>de){
        printf("\n%d \n%d \n%d \n%d \n%d", );
	}else if (){
		printf("\n%d \n%d \n%d \n%d \n%d",);
	}
}
