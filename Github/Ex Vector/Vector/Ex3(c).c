#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int v[6], i, a;
	
	 printf("\nValor do vetor\n");  
    for (i = 0 ; i<6; i++){
		printf("Digite o valor da posição %d: ", i);
		scanf("%d", &v[i]);
	}
	for (i=0; i<6; i+=2){
		a = v[i];
		v[i] = v[5-i];
		v[5-i] = a;
	}
	printf("Vetor invetido:");
	for (i=0; i<6; i++){
		printf("\n%d", v[i]);
	}

//   printf("\nVetor invertido: "); 
//	for (i = 5 ; i>= 0; i--){	outra forma de inverter o vetor
//		printf("\nVetor[%d] : %d", i, v[i]);
//	}
}

