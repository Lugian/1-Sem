package padrao1;

public class Venda {
	String produto;
	int qtdcomprada, qtdvendida;
	float precocompra, precovenda;
	
	Venda(){}
	Venda(String pr, int qtdc, int qtdv, float pc, float pv){
		produto= pr ;
		qtdcomprada= qtdc;
		qtdvendida= qtdv;
		precocompra=pc;
		precovenda=pv;
	}
	float investimento() {
		return precocompra*qtdcomprada;
	}
	float faturamento() {
		return precovenda*qtdvendida;
	}
	float lucro() {
		return faturamento()-investimento();
	}
	
	float porcentagem() {
		return (lucro()/investimento())*100;
	}
	public String tabela() {
		if(porcentagem()<=49.9) {
			return String.format("[%s]\t[%d]\t\t[%d]\t\t[ %.2f ]\t[ %.2f ]\t[ %.2f ]\t[ %.2f ]\t[ %.2f ]\t[ %.2f%% ]\t[Prejuizo]", produto , qtdcomprada, qtdvendida, precocompra, precovenda, investimento(), faturamento(), lucro(), porcentagem());	
		}else {
			return String.format("[%s]\t[%d]\t\t[%d]\t\t[ %.2f ]\t[ %.2f ]\t[ %.2f ]\t[ %.2f ]\t[ %.2f ]\t[ %.2f%% ]\t[Lucro]", produto , qtdcomprada, qtdvendida, precocompra, precovenda, investimento(), faturamento(), lucro(), porcentagem());	

		}
	}

}
