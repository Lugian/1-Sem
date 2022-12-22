//Crie um programa que calcule o IMC (Índice de Massa Corpórea) de 5 pessoas Entradas: Nome, peso e altura, Saída Nome, Peso, Altura e IMC.
#include<stdio.h>
#include<locale.h>
#include<string.h>

int main(){
	setlocale(LC_ALL,"");
	int i;
	float p[5], a[5], imc[5]; 
	char nm[5][20];
	for(i=0;i<5;i++){
		printf("Informe o nome [%d]: ", i+1);
		scanf("%s", &nm[i]);
	}
	for(i=0;i<5;i++){
		printf("Informe o peso de %s: ", nm[i]);
		scanf("%f", &p[i]);
	}
	for(i=0;i<5;i++){
		printf("Informe a altura de %s: ", nm[i]);
		scanf("%f", &a[i]);
	}
	//IMC = Peso ÷ (Altura × Altura) 
	for(i=0;i<5;i++){
		imc[i]= p[i]/(a[i]*a[i]);
	}
	for(i=0;i<5;i++){
		printf("imc de %s baseado no peso [%.2f] e altura [%.2f]  = [%.1f]", nm[i], p[i], a[i], imc[i]);
		if(imc[i] < 18.5){
			printf("[Magreza]\n");	
		}else if(imc[i] == 18.5 || imc[i] <= 24.9){
			printf("[Normal]\n");
		}else if(imc[i] == 25 || imc[i] <= 29.9){
			printf("[Sobrepeso]\n");
		}else if (imc[i] == 30 || imc[i] <= 39.9){
			printf("[Obesidade]\n");
		}else{
			printf("[Obesidade Grave]\n");	
		}
	}
	//MENOR QUE 18,5	MAGREZA	0
	//ENTRE 18,5 E 24,9	NORMAL	0
	//ENTRE 25,0 E 29,9	SOBREPESO	I
	//ENTRE 30,0 E 39,9	OBESIDADE	II
	//MAIOR QUE 40,0	OBESIDADE GRAVE	III
}
