#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "");
	float a, b, c;
	printf("\nColoque o valor do primeiro lado do tri�ngulo. ");
	scanf("%f", &a);
	printf("\nColoque o valor do segundo lado do tri�ngulo. ");
	scanf("%f", &b);
	printf("\nColoque o valor do terceiro lado do tri�ngulo. ");
	scanf("%f", &c);
	if (a == b && b == c && a == c){ //todos tem o valor igual
		printf("O tri�ngulo � Equil�tero ");
	}else if (a != b && b != c && a != c){ //todos tem o valor diferente 
		printf("O tri�ngulo � Escaleno ");
	}else if (c != a && c != b && a == b){ //A e B tem o mesmo valor, C tem valor diferente
		printf("O tri�ngulo � Is�celes ");
	}else if (a != b && a != c && b == c){ //B e C tem o mesmo valor, A tem valor diferente
		printf("O tri�ngulo � Is�celes ");
	}else if (b != a && b != c && a == c){ //A e C tem o mesmo valor, B tem valor diferente
		printf("O tri�ngulo � Is�celes ");
	}
}
