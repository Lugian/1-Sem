package podrao;

public class Pessoa {
	String nome, sobrenome;
	int idade;
	
	Pessoa(){}
	Pessoa(String n, String s, int i){
		nome=n;
		sobrenome=s;
		idade=i;
	}
	
	public String classificacao() {
		if(idade<=14) {
			return String.format("[Crianca]", nome, sobrenome, idade);	
		}else if(idade>14 && idade<18) {
			return String.format("[Jovem]", nome, sobrenome, idade);	
		}else if(idade>=18 && idade<=40) {
			return String.format("[Adulto]", nome, sobrenome, idade);	
		}else{
			return String.format("[Idoso]", nome, sobrenome, idade);	
		}
	}
}