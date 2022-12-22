#include <stdio.h>
#include<locale.h>

int main() {   
    setlocale(LC_ALL,"");
    int n1 = 0, n2 = 100, r = 0;
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

