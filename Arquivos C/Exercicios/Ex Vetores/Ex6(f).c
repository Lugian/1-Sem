#include<stdio.h>
#include<locale.h>
#include<time.h>

int main(){
	setlocale(LC_ALL,"");
	srand(time(NULL)); //tempo para gerar uma "aleatoridade"
	int i, j, a, n[100];
	for (i = 0; i < 100; i++){
		n[i] = rand()%1000; //vai gerar 100 números pseudoaleatórios entre 0 a 1000
	}
	for (i = 0; i < 100; i++){
		for (j = i + 1; j < 100; j++){
        	if (n[i] > n[j]){
            	a =  n[i];
            	n[i] = n[j];
            	n[j] = a;
            }
    	}
	}
	printf("Números aleatórios informados, em ordem crescente:\n");
	for (i = 0; i < 100; i++)
    printf("%d\n", n[i]);
}
