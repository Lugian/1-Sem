#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    float hm, vh, vth, ir, dir, i, di, s, ds, sl;
    printf("Por favor indique a quantidade de horas trabalhadas. ");
    scanf("%f", &hm);
    printf("\nIndique o valor recebido por hora. ");
    scanf("%f", &vh);
    vth= hm*vh;
    printf("\nSeu salário bruto é de R$%.2f. Considerando os descontos do INSS, IR e sindicato, calcularemos seu salário líquido.", vth);
    dir=11;
    ir= (vth/100)*dir;
    di=8;
    i= (vth/100)*di;
    ds=5;
    s= (vth/100)*ds;
    sl= vth-(ir+i+s);
    printf("\nSeu salário líquido é de R$%.2f", sl);
    printf("\nDesconto do Imposto de Renda (11%%): R$%.2f", ir);
    printf("\nDesconto do INSS (8%%): R$%.2f ", i);
    printf("\nDesconto do Sindicato (5%%): R$%.2f", s);
}
