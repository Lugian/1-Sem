//Desenvolva um programa que leia tr�s
//vari�veis (a, b, c) e resolva a
//express�o: ( a + b ) / c.


#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int A, B, C, X, a, b, c, x;
	A= 8;
	B= 12;
	C= 2;
	X= (A+B)/C;
	printf("O Valor da express�o (%d + %d)/%d resultou em %d", A, B, C, X);
	
	printf("Monte sua express�o informando os seguintes valores");
	printf("\nIndique o valor do primeiro n�mero da soma ");
	scanf("%d", &a);
	printf("\nIndique o valor do segundo n�mero da soma ");
	scanf("%d", &b);
	printf("\nPor ultimo indique o valor que ir� realizar a divis�o ");
	scanf("%d", &c);
	x= (a+b)/c;
	printf("\nBaseado em suas escolhas, o resultado foi: (%d+%d)/%d = %d", a, b, c, x);
	
}
