#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	char p[20];
	float  cmd, bd, cld, vl;
	printf("\nPor favor escreva qual deseja. \nCamisa \nBermuda \nCalça \n");
	scanf("%s", &p);
	printf("\nIndique o valor da %s. ", p);
	scanf("%f", &vl);
	cmd = vl - (vl/100)*20;
	bd = vl - (vl/100)*10;
	cld = vl -(vl/100)*15;
	if(strcmp(p,"camisa") == 0){
		printf("O valor inicial era R$%.f, com o desconto de 20%% aplicado, fica R$%.f", vl, cmd);
	}
	if(strcmp(p,"bermuda") == 0){
		printf("O valor inicial era R$%.f, com o desconto de 10%% aplicado, fica R$%.f", vl, bd);
	}
	if(strcmp(p,"calca") == 0){
		printf("O valor inicial era R$%.f, com o desconto de 15%% aplicado, fica R$%.f", vl, cld);
	}
}

