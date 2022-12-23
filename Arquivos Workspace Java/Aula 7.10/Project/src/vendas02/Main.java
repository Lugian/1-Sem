package vendas02;

public class Main {

	public static void main(String[] args) {
		Venda vendas[] = new Venda[5];
		
		vendas[0] = new Venda();
		vendas[0].produto = "Banana";
		vendas[0].preco = 4.9f;
		vendas[0].quantidade = 7;
		vendas[0].estoque = 10;
		
		vendas[1] = new Venda();
		vendas[1].produto = "Faustão";
		vendas[1].preco = 23f;
		vendas[1].quantidade = 3;
		vendas[1].estoque = 7;
		
		vendas[2] = new Venda();
		vendas[2].produto = "Vacina";
		vendas[2].preco = 12.55f;
		vendas[2].quantidade = 4;
		vendas[2].estoque = 15;
		
		vendas[3] = new Venda();
		vendas[3].produto = "Grau";
		vendas[3].preco = 13.13f;
		vendas[3].quantidade = 4;
		vendas[3].estoque = 5;
		
		vendas[4] = new Venda();
		vendas[4].produto = "Caixão";
		vendas[4].preco = 67.45f;
		vendas[4].quantidade = 1;
		vendas[4].estoque = 11;
		
		System.out.println("[Produto]\t[Preço]\t[Qtd]\t[Total]\t[Qtd.Estoque]");
		for(int i=0; i<5; i++) {
			if(vendas[i].quantidade > vendas[i].estoque) {
				System.out.printf("[ %s ]\t\t\t\t   [estoque insuficiente]\n", vendas[i].produto);
			}else if(vendas[i].reserva() <= vendas[i].estoque/2) {
				System.out.printf("[ %s ]\t[%.2f]\t[%d]\t[%.2f]\t[%d][baixo estoque]\n", vendas[i].produto, vendas[i].preco, vendas[i].quantidade, vendas[i].subtotal(), vendas[i].reserva());
			}else {
				System.out.printf("[ %s ]\t[%.2f]\t[%d]\t[%.2f]\t[%d]\n", vendas[i].produto, vendas[i].preco, vendas[i].quantidade, vendas[i].subtotal(), vendas[i].reserva());
			}
		}
		float total = 0;
		int qtd = 0;
		for(int i=0; i<5; i++) {
			qtd = qtd+vendas[i].quantidade;
			total = total+vendas[i].subtotal();
		}
		System.out.printf("Quantidade de itens: %d\n", qtd);
		System.out.printf("Total: R$%.2f", total);
	}

}
