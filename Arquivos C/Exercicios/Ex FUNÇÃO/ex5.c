#include<locale.h>
#include<stdio.h>
#include<stdbool.h>

bool comp(int v1, int v2);

int main(){
	setlocale(LC_ALL,"");
	int v1,v2;
	printf("Indique o primeiro valor. ");
	scanf("%d", &v1);
	printf("Indique o segundo valor. ");
	scanf("%d", &v2);
	if(comp(v1, v2)){
		printf("São iguais.");
	}else{
		printf("São diferentes");
	}
}

bool comp(int v1, int v2){
	return v1 == v2;
}
