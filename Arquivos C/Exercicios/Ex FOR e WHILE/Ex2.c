#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	int va;
	for(va=200; va>=1; va--){
		printf("%d\n", va);
	}
}
