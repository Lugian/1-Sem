#include<stdio.h>
#include<locale.h>

//Crie um programa que receba o nome de 6 candidatos e  quantidade de votos que cada um recebeu.
//Lista de candidatos com a porcentagem de votos
//Qual o primeiro colocado
//Haverá ou não segundo turno
//A lista deve estar ordenada do mais votado para o menos votado

int main (){
	setlocale(LC_ALL,"");
	float p[6];
	int v[6], s;
	int i;
	char c[6][20];
	for(i=0;i<6;i++){
		printf("Nome do candidato [%d]: ", i+1);
		scanf("%s", &c[i]);
		printf("Votos apurados de %s: ", c[i]);
		scanf("%d", &v[i]);
		s = s+v[i];
	}
	for(i=0;i<6;i++){
		p[i] = (v[i]/s )*100;
		printf("Candidato %s: [%.1f%%]\n", c[i], p[i]);
	}
	printf("%d", s);
		
	
	
}
