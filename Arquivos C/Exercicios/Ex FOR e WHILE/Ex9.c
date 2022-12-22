#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	int v1,v2,v3,v4,v5,v6,v7,v8,v9,v10,v11,v12,v13,v14,v15,s;
	printf("Informe todos os valores que deseja para a soma. (separe os números com espaço) ");
	scanf("%d", &v1);
	scanf("%d", &v2);
	scanf("%d", &v3);
	scanf("%d", &v4);
	scanf("%d", &v5);
	scanf("%d", &v6);
	scanf("%d", &v7);
	scanf("%d", &v8);
	scanf("%d", &v9);
	scanf("%d", &v10);
	scanf("%d", &v11);
	scanf("%d", &v12);
	scanf("%d", &v13);
	scanf("%d", &v14);
	scanf("%d", &v15);
	s= v1+v2+v3+v4+v5+v6+v7+v8+v9+v10+v11+v12+v13+v14+v15;
	printf("O valor da soma de todos os números é de: %d", s);


}
