#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
   int vp, vm, vt;
   printf("Indique o peso. ");
   scanf("%d", &vp);
   printf("O limite estabelecido é de 50kg, caso ultrapasse será cobrado R$4,00 por kg.");
   vm = vp - 50;
   vt = vm*4;
   if(vp<=50){
       printf("\nVocê está dentro dos limites estabelecidos.");
   }else{
       printf("\nPassou %dkg do limite estabelecido, sua multa é de R$%d.", vm, vt);
   }
}
