//Crie um programa que leia o nome e duas notas de 5 alunos, em seguida mostre a lista com nomes notas e médias dos 5 alunos.
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"");
	int i;
	float n[5], n1[5], m[5]; 
	char nm[5][20];
	for(i=0;i<5;i++){
		printf("Informe o nome [%d]: ", i+1);
		scanf("%s", &nm[i]);
	}
	for(i=0;i<5;i++){
		printf("Informe a primeira nota [%s] ", nm[i]);
		scanf("%f", &n[i]);
	}
	for(i=0;i<5;i++){
		printf("Informe a segunda nota [%s] ", nm[i]);
		scanf("%f", &n1[i]);
	}
	for(i=0;i<5;i++){
		m[i]= (n[i]+n1[i])/2;
		printf("Média do aluno %s: %.1f\n", nm[i], m[i]);
	}	
}
