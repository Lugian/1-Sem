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
		printf("Ol� %s, tudo bem? Aparentemente voc� � cria�a \n",nome);
	}else if(idade < 19){ 
		printf("Ol� %s Aborecente! Pelo jeito voc� � bem revoltado. \n",nome);
	}else if(idade < 24){
		printf("Ol� %s voc� � um pequeno jovem adulto, fumar vape vai estragar contigo uma hora! Cuidado hahah.\n",nome);
	}else if(idade < 45){
		printf("Ol� %s, n�o seja o cara chato que diz que o papai noel n�o existe.\n",nome);
	}else if(idade < 60){
		printf("Ol� %s, casada? rsrs\n",nome);
	}else{
		printf("Ol� %s senhor! Me de ben�a. \n",nome);
	}
	printf("Segundo a VMC (Vozes da Minha Cabe�a).");
}

