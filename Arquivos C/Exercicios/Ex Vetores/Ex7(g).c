#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  	int i, j;
 	char n[5][20], a[20];
	printf("Informa a baixo cinco nomes.\n");
  	for(i = 0; i <5; i++){
  		printf("Nome %d: ", i);
  		scanf("%s", &n[i]);
	}
	for (i=0;i<5;i++){ 
 	  for(j=i+1;j<5;j++){
 	  		if (strcmp( n[i], n[j])>0){
    			strcpy(a, n[i]); //mesma coisa de a = n[i], porém para char precisamos usar strcpy
        		strcpy(n[i], n[j]); //mesma coisa de n[i] = n[j]
        		strcpy(n[j], a);  //mesma coisa de n[j] = a
    		}
		}
	}
    printf("Os nomes informados, em ordem crescente:\n");
	for (i=0; i<5; i++){
    	printf("%s\n", n[i]);
	}
}

