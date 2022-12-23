#include <stdio.h>
#include <locale.h>

int main (){
	float i, p;
	for (i >1; i<=50; i++){
		printf("Produto [%1.f] = R$%.2f\n", i, i*1.99);
	}
}
