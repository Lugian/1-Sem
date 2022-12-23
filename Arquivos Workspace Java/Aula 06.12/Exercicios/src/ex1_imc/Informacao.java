package ex1_imc;

public class Informacao {
	private String nome;
	private float peso, altura;

	public Informacao(String nome, String peso, String altura) {
		this.nome = nome;
		try {
			this.peso = Float.parseFloat(peso);
			this.altura = Float.parseFloat(altura);
		}catch(Exception e) {
			this.peso = 0;
			this.altura = 0;
		}
	}
	
	float calculoimc(){
		return peso/(altura*altura);
	}
	
	String imc() {
		if(calculoimc() < 18.5) {
			return String.format("%s\tIMC:%.1f\tMagreza\n\r", nome, calculoimc());
		}else if(calculoimc()<25) {
			return String.format("%s\tIMC:%.1f\tNormal\n\r", nome, calculoimc());
		}else if(calculoimc()<30) {
			return String.format("%s\tIMC:%.1f\tSobrepeso\n\r", nome, calculoimc());
		}else if(calculoimc()<40) {
			return String.format("%s\tIMC:%.1f\tObesidade\n\r", nome, calculoimc());
		}else {
			return String.format("%s\tIMC:%.1f\tObesidade Grave\n\r", nome, calculoimc());
		}	
	}
}
