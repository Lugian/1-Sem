#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int v[5], i, v2[5], v3[5], vi[5], n=5, s=0, ii;
	
	printf("Valor do primeiro vetor.\n");
	for (i = 0 ; i<5; i++){
		printf("Digite o valor da posição %d: ", i);
		scanf("%d", &v[i]);
	}
      
    printf("\nValor do segundo vetor.\n");  //podemos fazer ele invertido direto
    for (i = 0 ; i<5; i++){				//usando -- economiza vatiavél
		printf("Digite o valor da posição %d: ", i);
		scanf("%d", &v2[i]);
	}
     
   for(i=0;i<5;i++){ //outra forma de fazer invertido o Vetor2
    	vi[i]=v2[n-1];
        n--;
    }
	
	for(i=0 ; i<5; i++ ){
		v3[i] = vi[i] + v2[i];		
	}
	
//	printf("\nVetor 2 invertido: "); mostra o vetor invertido
//	for (i = 0 ; i<5; i++){
//		printf("\nVetor[%d] : %d", i, v[i]);
//	}
	
	printf("\n\nSoma do vetor 1 com o inverso do vetor 2.");
	for (i = 0 ; i<5; i++){
		printf("\nVetor[%d] : %d", i, v3[i]);
	}
	
}
