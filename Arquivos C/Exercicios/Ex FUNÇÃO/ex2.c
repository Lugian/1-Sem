#include<locale.h>
#include<stdio.h>
#include<stdbool.h>

float co(float t1);

int main(){
	setlocale(LC_ALL,"");
	float t1;
	printf("Informe em Celsius o valor que deseja em Fahrenheit. ");
	scanf("%f", &t1);
	printf("%.1f C é equivalente a %.1f F", t1, co(t1));
}

float co(float t1){
	float c = (t1 * 9/5)+32;
	return c;
}
