package vendas01;

public class Main {
	// Venda (classe)
	static Venda v1, v2, v3, v4; //instâncias da classe venda
	
	public static void main(String[] args) {
		v1 = new Venda(); // objetos
		v2 = new Venda(); // objetos
		v3 = new Venda(); // objetos
		v4 = new Venda(); // objetos
		
		v1.produto = "Camiseta";
		v1.preco = 21.9f;
		v1.quantidade = 3;
		
		v2.produto = "Bermuda";
		v2.preco = 35.4f;
		v2.quantidade = 2;
		
		v3.produto = "Meia";
		v3.preco = 4.8f;
		v3.quantidade = 6;
		
		v4.produto = "Boné";
		v4.preco = 15;
		v4.quantidade = 1;
		
		System.out.println("Vendas");
		System.out.println("[Produto][Preço][Qtd.][Subtotal]");
		System.out.printf("[%s][%.2f][%d][%.2f]\n", v1.produto, v1.preco, v1.quantidade, v1.subtotal());
		System.out.printf("[%s][%.2f][%d][%.2f]\n", v2.produto, v2.preco, v2.quantidade, v2.subtotal());
		System.out.printf("[%s][%.2f][%d][%.2f]\n", v3.produto, v3.preco, v3.quantidade, v3.subtotal());
		System.out.printf("[%s][%.2f][%d][%.2f]\n", v4.produto, v4.preco, v4.quantidade, v4.subtotal());
		int qtd = v1.quantidade+v2.quantidade+v3.quantidade+v4.quantidade;
		System.out.printf("Quantidade de produtos: %d\n", qtd);
		float total = v1.subtotal()+v2.subtotal()+v3.subtotal()+v4.subtotal();
		System.out.printf("Total: R$%.2f\n", total);
	}

}
