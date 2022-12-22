#include <stdio.h>
#include<locale.h>

int main() {   
    setlocale(LC_ALL,"");
    int n1, n2, r = 0, vn;
    printf("Informe o primeiro número. ");
    scanf("%d", &n1);
    printf("Informe o segundo número. ");
    scanf("%d", &n2);
    printf("Os números pares entre %d e %d são:", n1, n2);
    for(vn=n1; vn<n2; vn++){
		if((vn%2)==0){
			r+=vn;
			printf("\n%d\n", vn);
		}
	}
	printf("\nO valor das somas dos números pares é de: %d", r);
}
