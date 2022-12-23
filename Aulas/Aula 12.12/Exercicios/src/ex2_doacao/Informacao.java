package ex2_doacao;

public class Informacao {
	private String nome, sexo;
	private int idade;
	private float peso;
	
	public Informacao(String nome, String idade, String sexo, String peso) {
		this.nome = nome;
		this.sexo = sexo;
		try {
			this.idade = Integer.parseInt(idade);
			this.peso = Float.parseFloat(peso);
		}catch(Exception e) {
			this.peso = 0;
			this.idade = 0;
		}
	}
	
	String diagnostico() {
		if(idade >= 18 && idade<69 && peso>50) 
			return "Apto";
		else
			return "Inapto";
	}
	
	public String[] toTable() {
		return new String[] {nome, String.format("%d", idade), String.format("%s", sexo), String.format("%.1f", peso),
				diagnostico(), "\n\r"};
	}

}
