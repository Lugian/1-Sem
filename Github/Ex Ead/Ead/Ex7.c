#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    char p1[3], p2[3], p3[3], p4[3], p5[3];
    printf("Você telefonou para a vítima? ");
    scanf("%s", &p1);
    printf("\nEsteve no local do crime? ");
    scanf("%s", &p2);
    printf("\nMora perto da vítima? ");
    scanf("%s", &p3);
    printf("\nVocê devia algo à vítima? ");
    scanf("%s", &p4);
    printf("\nJá trabalhou com a vítima? ");
    scanf("%s", &p5);
    
    if(strcmp(p1, "sim")==0 && strcmp(p2, "sim")==0 && strcmp(p3, "sim")==0&& strcmp(p4, "sim")==0 && strcmp(p5, "sim")==0){
    	printf("Assasino.");
	}else  if(strcmp(p1, "nao")==0 && strcmp(p2, "sim")==0 && strcmp(p3, "sim")==0&& strcmp(p4, "sim")==0 && strcmp(p5, "sim")==0){
		printf("Cumplíce.");
	}else  if(strcmp(p1, "sim")==0 && strcmp(p2, "nao")==0 && strcmp(p3, "sim")==0&& strcmp(p4, "sim")==0 && strcmp(p5, "sim")==0){
		printf("Cumplíce.");
	}else  if(strcmp(p1, "sim")==0 && strcmp(p2, "sim")==0 && strcmp(p3, "nao")==0&& strcmp(p4, "sim")==0 && strcmp(p5, "sim")==0){
		printf("Cumplíce.");
	}else  if(strcmp(p1, "sim")==0 && strcmp(p2, "sim")==0 && strcmp(p3, "sim")==0&& strcmp(p4, "nao")==0 && strcmp(p5, "sim")==0){
		printf("Cumplíce.");
	}else  if(strcmp(p1, "sim")==0 && strcmp(p2, "sim")==0 && strcmp(p3, "sim")==0&& strcmp(p4, "sim")==0 && strcmp(p5, "nao")==0){
		printf("Cumplíce.");
		
	}else  if(strcmp(p1, "nao")==0 && strcmp(p2, "nao")==0 && strcmp(p3, "sim")==0&& strcmp(p4, "sim")==0 && strcmp(p5, "sim")==0){
		printf("Cumplíce.");
	}else  if(strcmp(p1, "nao")==0 && strcmp(p2, "sim")==0 && strcmp(p3, "nao")==0&& strcmp(p4, "sim")==0 && strcmp(p5, "sim")==0){
		printf("Cumplíce.");
	}else  if(strcmp(p1, "nao")==0 && strcmp(p2, "sim")==0 && strcmp(p3, "sim")==0&& strcmp(p4, "nao")==0 && strcmp(p5, "sim")==0){
		printf("Cumplíce.");
	}else  if(strcmp(p1, "nao")==0 && strcmp(p2, "sim")==0 && strcmp(p3, "sim")==0&& strcmp(p4, "sim")==0 && strcmp(p5, "nao")==0){
		printf("Cumplíce.");
		
	}else  if(strcmp(p1, "sim")==0 && strcmp(p2, "nao")==0 && strcmp(p3, "nao")==0&& strcmp(p4, "sim")==0 && strcmp(p5, "sim")==0){
		printf("Cumplíce.");
	}else  if(strcmp(p1, "sim")==0 && strcmp(p2, "nao")==0 && strcmp(p3, "sim")==0&& strcmp(p4, "nao")==0 && strcmp(p5, "sim")==0){
		printf("Cumplíce.");
	}else  if(strcmp(p1, "sim")==0 && strcmp(p2, "nao")==0 && strcmp(p3, "sim")==0&& strcmp(p4, "sim")==0 && strcmp(p5, "nao")==0){
		printf("Cumplíce.");
		
	}else  if(strcmp(p1, "sim")==0 && strcmp(p2, "sim")==0 && strcmp(p3, "nao")==0&& strcmp(p4, "nao")==0 && strcmp(p5, "sim")==0){
		printf("Cumplíce.");
	}else  if(strcmp(p1, "sim")==0 && strcmp(p2, "sim")==0 && strcmp(p3, "nao")==0&& strcmp(p4, "sim")==0 && strcmp(p5, "nao")==0){
		printf("Cumplíce.");
		
	}else  if(strcmp(p1, "sim")==0 && strcmp(p2, "sim")==0 && strcmp(p3, "sim")==0&& strcmp(p4, "nao")==0 && strcmp(p5, "nao")==0){
		printf("Cumplíce.");
	}
	
	
	if(strcmp(p1, "sim")==0 && strcmp(p2, "sim")==0 && strcmp(p3, "nao")==0&& strcmp(p4, "nao")==0 && strcmp(p5, "nao")==0){
    	printf("Suspeito.");
	}else  if(strcmp(p1, "sim")==0 && strcmp(p2, "nao")==0 && strcmp(p3, "sim")==0&& strcmp(p4, "nao")==0 && strcmp(p5, "nao")==0){
		printf("Suspeito.");
	}else  if(strcmp(p1, "sim")==0 && strcmp(p2, "nao")==0 && strcmp(p3, "nao")==0&& strcmp(p4, "sim")==0 && strcmp(p5, "nao")==0){
		printf("Suspeito.");
	}else  if(strcmp(p1, "sim")==0 && strcmp(p2, "nao")==0 && strcmp(p3, "nao")==0&& strcmp(p4, "nao")==0 && strcmp(p5, "sim")==0){
		printf("Suspeito.");
		
	}else  if(strcmp(p1, "nao")==0 && strcmp(p2, "sim")==0 && strcmp(p3, "sim")==0&& strcmp(p4, "nao")==0 && strcmp(p5, "nao")==0){
		printf("Suspeito.");
	}else  if(strcmp(p1, "nao")==0 && strcmp(p2, "sim")==0 && strcmp(p3, "nao")==0&& strcmp(p4, "sim")==0 && strcmp(p5, "nao")==0){
		printf("Suspeito.");
	}else  if(strcmp(p1, "nao")==0 && strcmp(p2, "sim")==0 && strcmp(p3, "nao")==0&& strcmp(p4, "nao")==0 && strcmp(p5, "sim")==0){
		printf("Suspeito.");
		
	}else  if(strcmp(p1, "nao")==0 && strcmp(p2, "nao")==0 && strcmp(p3, "sim")==0&& strcmp(p4, "sim")==0 && strcmp(p5, "nao")==0){
		printf("Suspeito.");
	}else  if(strcmp(p1, "nao")==0 && strcmp(p2, "nao")==0 && strcmp(p3, "sim")==0&& strcmp(p4, "nao")==0 && strcmp(p5, "sim")==0){
		printf("Suspeito.");
		
	}else  if(strcmp(p1, "nao")==0 && strcmp(p2, "nao")==0 && strcmp(p3, "nao")==0&& strcmp(p4, "sim")==0 && strcmp(p5, "sim")==0){
		printf("Suspeito.");
	}
	 
	
	 if(strcmp(p1, "nao")==0 && strcmp(p2, "nao")==0 && strcmp(p3, "nao")==0&& strcmp(p4, "nao")==0 && strcmp(p5, "nao")==0){
    	printf("Inocente.");
	}else  if(strcmp(p1, "sim")==0 && strcmp(p2, "nao")==0 && strcmp(p3, "nao")==0&& strcmp(p4, "nao")==0 && strcmp(p5, "nao")==0){
		printf("Inocente.");
	}else  if(strcmp(p1, "nao")==0 && strcmp(p2, "sim")==0 && strcmp(p3, "nao")==0&& strcmp(p4, "nao")==0 && strcmp(p5, "nao")==0){
		printf("Inocente.");
	}else  if(strcmp(p1, "nao")==0 && strcmp(p2, "nao")==0 && strcmp(p3, "sim")==0&& strcmp(p4, "nao")==0 && strcmp(p5, "nao")==0){
		printf("Inocente.");
	}else  if(strcmp(p1, "nao")==0 && strcmp(p2, "nao")==0 && strcmp(p3, "nao")==0&& strcmp(p4, "sim")==0 && strcmp(p5, "nao")==0){
		printf("Inocente.");
	}else  if(strcmp(p1, "nao")==0 && strcmp(p2, "nao")==0 && strcmp(p3, "nao")==0&& strcmp(p4, "nao")==0 && strcmp(p5, "sim")==0){
		printf("Inocente.");
	}
	
}
