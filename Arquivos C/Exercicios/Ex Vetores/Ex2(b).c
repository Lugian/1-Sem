#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int v[10], i, s=0, s1=0, q, q1, m=0, m1=0;
	printf("Valor do primeiro vetor.\n");
	for (i = 0 ; i<10; i++){
		printf("Digite o valor da posi��o %d: ", i);
		scanf("%d", &v[i]);
	}
	for(i=0;i<10; i++){
		if (v[i] % 2 == 0){
			s = s+v[i];
			q++;
		}else{
			s1= s1+v[i];
			q1++;
		}
	}
	m1 = s1/q1; //impar
	m= s/q; //par
	printf("\nTem %d n�meros pares.", q);
	printf("\nA soma dos n�meros pares � de %d.", s);
	printf("\nA m�dia dos n�meros pares � de %d", m);
	printf("\nTem %d n�meros impares.", q1);
	printf("\nA soma dos n�meros impares � de %d", s1);
	printf("\nA m�dia dos n�meros impares � de %d", m1);	
}
