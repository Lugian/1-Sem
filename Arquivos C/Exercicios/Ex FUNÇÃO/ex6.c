#include<locale.h>
#include<stdio.h>

int fat(int v1);

int main(){
	setlocale(LC_ALL,"");
	int v1;
	printf("Indique o valor que deseja o fatorial. ");
	scanf("%d", &v1);
	//printf("%d", fat(v1));
	int i, v[100], a, b;
	for(i=1;i<=v1;i++){
		b =v1*(v1-i);
		printf("%d\n", v1);
	}
}
  
int fat(int v1){
	int i, v[100];
	for(i=0;i=v1;i=i-1){
		printf("%d", i);
	}
	return v[i];
}
