#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"");
	int i, j, a, n[5];
	printf("Iforme os n�meros.\n");
	for (i=0;i<5;i++)
	    scanf("%d", &n[i]);
	for (i=0;i<5;i++){
    	for (j=i+1;j<5;j++){ 
        	if (n[i] > n[j]){
            	a =  n[i]; 
            	n[i] = n[j];
            	n[j] = a;
        	}
    	}
	}
	printf("Os n�meros informados, em ordem crescente:\n");
	for (i=0;i<5;i++)
    printf("%d\n", n[i]);
}

