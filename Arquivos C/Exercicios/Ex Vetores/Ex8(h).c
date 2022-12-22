#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  	int i, j;
 	char n[5][20], a[20];
	printf("Informa a baixo cinco nomes.\n");
  	for(i=0;i<5;i++){
  	printf("Nome %d: ", i);
  	scanf("%s", &n[i]);
	}
	for (i=0;i<5;i++){ 
 	  for(j= i + 1;j<5;j++){
 	  		if (strcmp( n[i], n[j] )>0){
    			strcpy(a, n[i]);
        		strcpy(n[i], n[j]);
        		strcpy(n[j], a);
    		}
		}
	}
        
	printf("Os nomes informados, em ordem decrescente:\n");
	for (i=4;i>=0;i--){
    	printf("%s\n", n[i]);
	}
}

