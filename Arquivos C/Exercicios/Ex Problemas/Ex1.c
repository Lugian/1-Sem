#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
   int vp, vm, vt;
   printf("Indique o peso. ");
   scanf("%d", &vp);
   printf("O limite estabelecido � de 50kg, caso ultrapasse ser� cobrado R$4,00 por kg.");
   vm = vp - 50;
   vt = vm*4;
   if(vp<=50){
       printf("\nVoc� est� dentro dos limites estabelecidos.");
   }else{
       printf("\nPassou %dkg do limite estabelecido, sua multa � de R$%d.", vm, vt);
   }
}
