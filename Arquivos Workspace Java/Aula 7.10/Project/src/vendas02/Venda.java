package vendas02;

public class Venda {
	String produto;
	int estoque;
	float preco;
	int quantidade;

 	float subtotal() {
 		return preco * quantidade;
 	} 	
 	int reserva() {
 		return estoque - quantidade;
 	}
}
