#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"");
	char n[a][20];
	int vitorias[5],empates[5], pontos[5];
	int i, j, a;
	
	printf("Indique a quantia de alunos");
	scanf("%d", &a);
	for(i = 0; i < a; i++){
		printf("Aluno [%d]", i+1);
		scanf("%s", n[i]);
	}

	
/*	for(i = 0; i < 5; i++){
		for(j = i + 1; j < 5; j++){
			if(pontos[i] < pontos[j]){
				aux = pontos[i];
				pontos[i] = pontos[j];
				pontos[j] = aux;
				strcpy(auxt, times[i]);
				strcpy(times[i], times[j]);
				strcpy(times[j], auxt);
			}
		}
	}
	
*/
}
