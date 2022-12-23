package padrao1;

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
			System.out.printf("Nome produto [%d], qtd comprada, qtd vendida, preco compra, preco venda: \n", i+1);
			inf[i] = new Venda(scan.next(), scan.nextInt(), scan.nextInt(), scan.nextFloat(), scan.nextFloat());
		}
		System.out.println("[Produto]\t[Qtdcompra]\t[Qtdvend]\t[Precocompra]\t[Precovend]\t[Investimento]\t[Faturamento]\t[Lucro]\t\t[Porcentagem]\t[Situacao]");
		float it=0, ft=0, lt=0, pt=0;
		for(int i=0;i<quantidade;i++) {
			System.out.println(inf[i].tabela());
			it += inf[i].investimento();
			ft += inf[i].faturamento();
			lt = ft-it;
			pt = (lt/it)*100;
		}
		if(pt<50) {
			System.out.println("\n[Investimento tot]\t[Faturamento tot]\t[Lucro tot]\t[Porcen. tot]\t[Situacao]");
			System.out.printf("[R$ %.2f]\t\t[R$ %.2f]\t\t[R$ %.2f]\t[%.2f%%]\t[Prejuízo]", it, ft, lt, pt);
		}else {
			System.out.println("\n[Investimento tot]\t[Faturamento tot]\t[Lucro tot]\t[Porcen. tot]\t[Situacao]");
			System.out.printf("[R$ %.2f]\t\t[R$ %.2f]\t\t[R$ %.2f]\t[%.2f%%]\t[Lucro]", it, ft, lt, pt);
		}
		
	}

}
