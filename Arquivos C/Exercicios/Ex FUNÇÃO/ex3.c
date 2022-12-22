#include<locale.h>
#include<stdio.h>
#include<stdbool.h>

float co(float t1);

int main(){
	setlocale(LC_ALL,"");
	float t1;
	printf("Informe em Fahrenheit o valor que deseja em Celsius. ");
	scanf("%f", &t1);
	printf("%.1f F é equivalente a %.1f C", t1, co(t1));
}

float co(float t1){
	float f = (t1 - 32)*5/9;
	return;
}
