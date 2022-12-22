#include<stdio.h>
#include<locale.h>
#include<time.h>

int main(){
	setlocale(LC_ALL,"");
	srand(time(NULL));
	int i, j;
	int m[5][5], ma4, me4=26, ma3, me3=26, pima, pjma, pime, pjme, pima3, pjma3, pime3, pjme3; 
	for(i=0; i<5; i++){ 
		for(j=0; j<5; j++){ 
			m[i][j]=rand()%26;
		}
	}
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("[%d]\t",m[i][j]);
		}
		printf("\n");
	}
	for(i=4;i<5;i++){
        for(j=0;j<5;j++){
           if(m[i][j]<me4){
            me4=m[i][j];
            pime = i;
            pjme = j;
           }
           if(m[i][j]>ma4){
            ma4=m[i][j];
            pima = i;
            pjma = j;
           }
        }
	}	 
    for(i=0;i<5;i++){
        for(j=3;j<4;j++){
           if(m[i][j]<me3){
            me3=m[i][j];
            pime3 = i;
            pjme3 = j;
           }
           if(m[i][j]>ma3){
            ma3=m[i][j];
            pima3 = i;
            pjma3 = j;
           }
        }
	}
	printf("Maior número da linha 4: %d, posição [%d, %d]\n", ma4, pima, pjma);
	printf("Menor número da linha 4: %d, posição [%d, %d]\n", me4, pime, pjme);
	printf("Maior número da coluna 3: %d, posição [%d, %d]\n", ma3, pima3, pjma3);
	printf("Menor número da coluna 3: %d, posição [%d, %d]\n", me3, pime3, pjme3);
}
