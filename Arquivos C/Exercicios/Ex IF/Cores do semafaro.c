#include <stdio.h>
#include <locale.h>

int main(){
	//configuração e variáveis
	setlocale(LC_ALL,""); //para conseguir acento
	int cor;
	
	//entrada
	printf("Write one color \n1.green\n2.red,\n3.yellow");
	scanf("%d", &cor);
	
	//processamento e saida
	switch(cor){
		case 1:
			printf("Your choise is Green, you can go.\n");
			break;
		case 2:
			printf("Your choise is Yellow, be careful.\n");
			break;
		case 3:
			printf("Your choise is Red, you need stop.\n");
		default:
			printf("Invalid\n");
	}
}

