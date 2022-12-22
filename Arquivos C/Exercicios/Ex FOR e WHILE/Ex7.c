#include <stdio.h>
#include<locale.h>

int main() {   
    setlocale(LC_ALL,"");
    int n1 = 0, n2 = 0, r = 0;
    printf("Digite o primeiro número. ");
    scanf("%d", &n1);
    printf("Digite o segundo número. ");
    scanf("%d", &n2);
    if (n1 < n2)
       r = somaNumeros(n1, n2);
    else
        r = somaNumeros(n1, n2);
     printf("\n\nResultado da soma do intervalo entre %d e %d é: %d", n1, n2, r);
}
	int somaNumeros(int n1, int n2) {
    if (n2== n1 + 1)
       return n1 + n2;
    else
        return  n1 + somaNumeros(n1 + 1, n2);
}

