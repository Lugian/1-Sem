#include <stdio.h>
#include <locale.h>

int main (){
	int vt, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10;
	printf("Informe o valor que deseja uma tabuada. ");
	scanf("%d", &vt);
	v1= vt*1;
	v2= vt*2;
	v3= vt*3;
	v4= vt*4;
	v5= vt*5;
	v6= vt*6;
	v7= vt*7;
	v8= vt*8;
	v9= vt*9;
	v10= vt*10;
	printf("\nTabuada %d", vt);
	printf("\n1 X %d = %d", vt, v1);
	printf("\n2 X %d = %d", vt, v2);
	printf("\n3 X %d = %d", vt, v3);
	printf("\n4 X %d = %d", vt, v4);
	printf("\n5 X %d = %d", vt, v5);
	printf("\n6 X %d = %d", vt, v6);
	printf("\n7 X %d = %d", vt, v7);
	printf("\n8 X %d = %d", vt, v8);
	printf("\n9 X %d = %d", vt, v9);
	printf("\n10 X %d = %d", vt, v10);
}



