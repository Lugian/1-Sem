//Preencha uma matriz 5x5 com valores aleat�rios entre 0 e 50.
//Depois exiba os numeros pares e impares existentes na matriz, e suas quantidades.
#include<stdio.h>
#include<locale.h>
#include<time.h>

int main(){
	setlocale(LC_ALL,"");
	srand(time(NULL));
	int i, j, q, q1;
	int m[5][5]; 
	for(i=0; i<5; i++){ 
		for(j=0; j<5; j++){ 
			m[i][j]=rand()%51;
		}
	}
	for(i=0;i<5;i++){
		for(j=0;j<5;j++)
			printf("[%d]\t",m[i][j]);
		printf("\n");
	}
	printf("Os n�meros pares da matriz s�o: ");
	for(i=0;i<5; i++){
		for(j=0; j<5; j++){
			if (m[i][j] % 2 == 0){
				printf("%d ", m[i][j]);
				q++;
			} 
		}
	}
	printf("\nA quantidade de n�meros par na matriz �: %d. \n", q, m[i][j]);
	printf("Os n�meros impares da matriz s�o: ");
	for(i=0;i<5; i++){
		for(j=0; j<5; j++){
			if (m[i][j] % 2 != 0){
				printf("%d ", m[i][j]);
				q1++; 
			}
		}
	}
	printf("\nA quantidade de n�meros impares na matriz �: %d.", q1, m[i][j]);
	
}
