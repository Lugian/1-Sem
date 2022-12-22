#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int va;
	for(va=10; va<200; va++){
	printf("%d\n", va);
	}
}
