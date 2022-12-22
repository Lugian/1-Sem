#include<stdio.h>
#include<locale.h>
#include<time.h>

int main(){
	setlocale(LC_ALL,"");
	srand(time(NULL));
	int v[60], v1[6];
	int i, j, al = 10, igu, aux;
	for(i=1; i<= 60; i++){
		if(i<10){
			 printf("[0%d]",i);
		}else{
			printf("[%d]",i);
		}
		if(i==al){
			printf("\n");
			al+=10;
		}
	}
	for(i=0; i<6; i++){
		v1[6] = rand()%61;
		printf("[%d]", v1[6]);	
	}      
	for(i=0; i<60; i++){
		for(j=0; j<6; j++){
			
			
		}
	}
	
}
