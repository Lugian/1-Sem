#include<stdio.h>
#include<locale.h>

//Crie um programa que receba como entrada a idade, 
//o sexo 'M' ou 'F' e o número de dias desde a última doação de sangue e 
//responda se o doador está apto ou inapto a doar sangue novamente

int main (){
	setlocale(LC_ALL,"");
	int i, d, a;
	char s[3];
	printf("Por favor informe sua idade. ");
	scanf("%d", &i);
	printf("Indique seu sexo.\n M (masculino)\n F (feminino) ");
	scanf("%s", &s);
	printf("Informe o quantidade de dias depois da sua última doação. ");
	scanf("%d", &d);
	if(i>=16){
		printf("Considerando o tempo mínimo entre doações: homens 60 dias, mulheres 90 dias");
		if(strcmp(s,"m") == 0 && d>60){
			printf("\nVocê está apto para doar novamente.");
		}else if(strcmp(s,"m") == 0 && d<60){
			a = 60-d;
			printf("\nVocê ainda não está apto. Será necessário aguardar %d dias.", a);
		}
		if(strcmp(s,"f") == 0 && d>90){
			printf("\nVocê está apta para doar novamente.");
		}else if(strcmp(s,"f") == 0 && d<90){
			a = 90-d;
			printf("\nVocê ainda não está apta. Será necessário aguardar %d dias.", a);
		}
	}else{
		printf("Sua idade não é valida!\nIdade mínima: 16.");
	}
}
