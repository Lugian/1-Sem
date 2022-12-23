package padrao;

public class Venda{
	String produto;
	int quantidade;
	float preco;
	
	Venda(){}
	Venda(String pr, int q, float p){
		produto= pr ;
		quantidade = q;
		preco = p;
	}
	float subtotal() {
		return quantidade*preco;
	}
	
	public String tabela() {
		return String.format("[%s]\t[%d]\t\t[%.1f]\t[%.2f]", produto , quantidade, preco, subtotal());	
	}
	
}	
	
