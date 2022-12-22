#include<stdio.h>
#include<locale.h>
void decBin(int n);
int main(){
	setlocale(LC_ALL,"");
	int num;
	printf("Informe o número para a inversão. ");
	scanf("%d",&num);
	printf("O número %d em binário ",num);
	decBin(num);
}
void decBin(int n){
	int v[50];
	int i=0, j;
	if(n=0) printf("0");
	while(n>0){
		v[i]=n%2;
		i++;
		n=n/2;
	}
	for(j=i-1;j>=0;j--)
		printf("%d",v[j]);
}

//int decBin(int n){
//	if(n == 0)
//		return 0;
//	else
//		return n % 2 + 10 * decBin(n / 2); //recursividade
//}
