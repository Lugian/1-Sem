package padrao;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Venda inf[] = new Venda[10];
		Scanner scan = new Scanner(System.in);

		int quantidade;
		do {
			System.out.println("Por favor informe a quantidade de produtos. ");
			quantidade = scan.nextInt();
			if(quantidade>10 || quantidade<0){
				System.out.println("Informe um valor válido.");
			}
		}while(quantidade>10 || quantidade<0);
		
		for(int i=0; i<quantidade; i++) {
			System.out.printf("Nome produto [%d], quantidade, preco: \n", i+1);
			inf[i] = new Venda(scan.next(), scan.nextInt(), scan.nextFloat());
		}
		System.out.println("[Produto]\t[Quantidade]\t[Preco]\t[Subtotal]");
		float total = 0;
		int qtd = 0;
		for(int i=0; i<quantidade; i++) {
			qtd = qtd+inf[i].quantidade;
			total = total+inf[i].subtotal();
			System.out.println(inf[i].tabela());
		}
		System.out.printf("Quantidade de itens: %d\n", qtd);
		System.out.printf("Total: R$%.2f\n", total);
		
		System.out.println("\n[Media precos]");
		float tpreco = 0, mpreco = 0;
		for(int i=0; i<quantidade; i++) {
			tpreco += inf[i].preco;
			mpreco = tpreco/quantidade;
		}
		System.out.printf("R$%.2f\n", mpreco);
		
		float maxpreco=0, minpreco=1000000, maxvendas=0;
		int caro=-1, barato=-1, maisvendido=-1;
        for (int i=1 ; i < quantidade; i++){
                if ( inf[i].preco > maxpreco) {
                      maxpreco = inf[i].preco;
                      caro= i;
               }
          }
        for (int i=1; i <quantidade; i++) {  
            if(inf[i].preco < minpreco){  
                minpreco = inf[i].preco;  
                barato= i;
            }  
        }  
        for (int i=1;i<quantidade;i++) {
        	if(inf[i].quantidade>maxvendas) {
        		maxvendas=inf[i].quantidade;
        		maisvendido=i;
        	}
        }
        System.out.println("\nProduto mais caro: "+ inf[caro].produto +" R$"+ maxpreco);  
        System.out.println("Produto mais barato: "+ inf[barato].produto +" R$"+ minpreco);  
        System.out.println("\nProduto mais vendido: "+ inf[maisvendido].produto +" "+ String.format("%.0f",maxvendas));  
	}

}
