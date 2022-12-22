#include<stdio.h>
#include<locale.h>
#include<time.h>

int main(){
	setlocale(LC_ALL,"");
	srand(time(NULL));
	int i, j;
	int m[3][3], ma, pi, pj; 
	for(i=0; i<3; i++){ 
		for(j=0; j<3; j++){ 
			m[i][j]=rand()%10;
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
			printf("[%d]\t",m[i][j]);
		printf("\n");
	}
	for(i=0;i<3;i++){
        for(j=0;j<3;j++){
           if(m[i][j]>ma){
            ma=m[i][j];
               pi = i;
               pj = j;
           }
        }
	}
	printf("Maior número da matriz: %d, posição [%d, %d]", ma, pi, pj);
}
