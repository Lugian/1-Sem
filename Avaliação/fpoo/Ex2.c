#include<stdio.h>
#include<locale.h>

//Crie um algoritmo que gere um relatório de acordo com a idade
//idade < 12 criança
//idade entre 12 e 17 jovem
//idade entre 18 e 30 adulto
//idade entre 31 e 65 meia idade
//idade > 65 idoso

int main(){
	setlocale(LC_ALL,"");
	int idd[7], i;
	char n[7][20];
	for(i=0;i<7;i++){
		printf("Informe a nome [%d]: ", i+1);
		scanf("%s", &n[i]);
	}
	for(i=0;i<7;i++){
		printf("Indique a idade [%s]: ", n[i]);
		scanf("%d", &idd[i]);
	}
	for(i=0;i<7;i++){
	
	}
	for(i=0;i<7;i++){
		if(idd[i] < 12){
			printf("%s = [Criança]\n", n[i]);	
		}else if(idd[i] >= 12 && idd[i] <= 17){
			printf("%s = [Jovem]\n", n[i]);
		}else if(idd[i] >= 18 && idd[i] <= 30){
			printf("%s = [Adulto]\n", n[i]);
		}else if (idd[i] >= 31 && idd[i] <= 65){
			printf("%s = [Meia idade]\n", n[i]);
		}else{
			printf("%s = [Idoso]\n", n[i]);	
		}
	}	
}
