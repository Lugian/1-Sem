#include <stdio.h>
#include <locale.h>

int main (){
		setlocale(LC_ALL,"");
	int vp;

	for(vp=11; vp<=250; vp++){
		if((vp%2)==0){
			printf("\n%d", vp);
		}
	}
}
