#include<stdio.h>
#include<locale.h>

//Crie um programa que receba como entrada a idade, 
//o sexo 'M' ou 'F' e o n�mero de dias desde a �ltima doa��o de sangue e 
//responda se o doador est� apto ou inapto a doar sangue novamente

int main (){
	setlocale(LC_ALL,"");
	int i, d, a;
	char s[3];
	printf("Por favor informe sua idade. ");
	scanf("%d", &i);
	printf("Indique seu sexo.\n M (masculino)\n F (feminino) ");
	scanf("%s", &s);
	printf("Informe o quantidade de dias depois da sua �ltima doa��o. ");
	scanf("%d", &d);
	if(i>=16){
		printf("Considerando o tempo m�nimo entre doa��es: homens 60 dias, mulheres 90 dias");
		if(strcmp(s,"m") == 0 && d>60){
			printf("\nVoc� est� apto para doar novamente.");
		}else if(strcmp(s,"m") == 0 && d<60){
			a = 60-d;
			printf("\nVoc� ainda n�o est� apto. Ser� necess�rio aguardar %d dias.", a);
		}
		if(strcmp(s,"f") == 0 && d>90){
			printf("\nVoc� est� apta para doar novamente.");
		}else if(strcmp(s,"f") == 0 && d<90){
			a = 90-d;
			printf("\nVoc� ainda n�o est� apta. Ser� necess�rio aguardar %d dias.", a);
		}
	}else{
		printf("Sua idade n�o � valida!\nIdade m�nima: 16.");
	}
}
