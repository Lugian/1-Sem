#include <stdio.h>
#include <locale.h>

//Desenvolva um programa que leia cada lado de 8 triangulos
//e informe se é equilátero, escaleno o isóceles

int main () {
	setlocale(LC_ALL, "");
	int i;
	float a[8], b[8], c[8];
	for(i=0;i<8;i++){
		printf("\nColoque o valor do primeiro lado do triângulo. [%d] ", i+1);
		scanf("%f", &a[i]);
		printf("\nColoque o valor do segundo lado do triângulo. [%d] ", i+1);
		scanf("%f", &b[i]);
		printf("\nColoque o valor do terceiro lado do triângulo. [%d] ", i+1);
		scanf("%f", &c[i]);
	}
	for(i=0;i<8;i++){
		if (a[i] == b[i] && b[i] == c[i] && a[i] == c[i]){ //todos tem o valor igual
			printf("\nO triângulo [%d] é Equilátero ", i+1);
		}else if (a[i] != b[i] && b[i] != c[i] && a[i] != c[i]){ //todos tem o valor diferente 
			printf("\nO triângulo [%d] é Escaleno ", i+1);
		}else if (c[i] != a[i] && c[i] != b[i] && a[i] == b[i]){ //A e B tem o mesmo valor, C tem valor diferente
			printf("\nO triângulo [%d] é Isóceles ", i+1);
		}else if (a[i] != b[i] && a[i] != c[i] && b[i] == c[i]){ //B e C tem o mesmo valor, A tem valor diferente
			printf("\nO triângulo [%d] é Isóceles ", i+1);
		}else if (b[i] != a[i] && b[i] != c[i] && a[i] == c[i]){ //A e C tem o mesmo valor, B tem valor diferente
			printf("\nO triângulo [%d] é Isóceles ", i+1);
		}
	}
	
}
