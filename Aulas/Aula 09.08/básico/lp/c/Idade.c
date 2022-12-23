#include<stdio.h>
#include<locale.h>
int main(){
	//Configura??es iniciais do programa, caracteres e vari?veis
	setlocale(LC_ALL,"");
	char nome[10];
	int idade;
	
	//Entradas
	printf("Digite o seu apelido da quebrada:");
	scanf("%s",&nome);
	printf("Digite a sua idade:");
	scanf("%d",&idade);
	
	//Processamento
	if(idade < 10){
		printf("Olá %s, tudo bem? Aparentemente você é criaça \n",nome);
	}else if(idade < 19){ 
		printf("Olá %s Aborecente! Pelo jeito você é bem revoltado. \n",nome);
	}else if(idade < 24){
		printf("Olá %s você é um pequeno jovem adulto, fumar vape vai estragar contigo uma hora! Cuidado hahah.\n",nome);
	}else if(idade < 45){
		printf("Olá %s, não seja o cara chato que diz que o papai noel não existe.\n",nome);
	}else if(idade < 60){
		printf("Olá %s, casada? rsrs\n",nome);
	}else{
		printf("Olá %s senhor! Me de bença. \n",nome);
	}
	printf("Segundo a VMC (Vozes da Minha Cabeça).");
}

