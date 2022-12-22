#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"");
	int i, j, a, n[10]; //contadores (i, j, a) a=auxiliar
	printf("Iforme os números.\n");
	for (i = 0; i < 10; i++)
	    scanf("%d", &n[i]);
	for (i = 0; i < 10; i++){
    	for (j = i + 1; j < 10; j++){ //j começa em 1, pois i+1 (1=0)
        	if (n[i] > n[j]){
            	a =  n[i]; //algoritimo de troca
            	n[i] = n[j];
            	n[j] = a;
        	}
    	}
	}
	printf("Os números informados, em ordem crescente:\n");
	for (i = 0; i < 10; i++)
    printf("%d\n", n[i]);
}
