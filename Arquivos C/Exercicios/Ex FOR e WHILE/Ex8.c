#include <stdio.h>
#include<locale.h>

int main() {   
    setlocale(LC_ALL,"");
    int n1, n2, r = 0, vn;
    printf("Informe o primeiro n�mero. ");
    scanf("%d", &n1);
    printf("Informe o segundo n�mero. ");
    scanf("%d", &n2);
    printf("Os n�meros pares entre %d e %d s�o:", n1, n2);
    for(vn=n1; vn<n2; vn++){
		if((vn%2)==0){
			r+=vn;
			printf("\n%d\n", vn);
		}
	}
	printf("\nO valor das somas dos n�meros pares � de: %d", r);
}
