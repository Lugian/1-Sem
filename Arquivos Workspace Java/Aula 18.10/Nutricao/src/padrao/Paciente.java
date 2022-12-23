package padrao;

public class Paciente {
	String nome;
	int idade;
	float peso;
	float altura;
	
	Paciente(){}
	Paciente(String pacientes, int idad,float pesokg, float alturacm){
		idade = idad;
		nome = pacientes;
		peso = pesokg;
		altura = alturacm;
	}

	float imc() {
		return peso / (altura*altura);
	}
	public String diagnostico() {
		if(idade<5) {
			return 	String.format("\t\t\t\t\t[Idade insuficiente]");
		}else {
			if(imc()<16) {
				return String.format("[ %s ]\t[Subpeso Severo]\t[%.1f]", nome, imc());
			}else if(imc() >=16 && imc() <20) {
				return String.format("[ %s ]\t[Subpeso]\t[%.1f]", nome, imc());
			}else if(imc() >=20 && imc() <25) {
				return String.format("[ %s ]\t[ Normal ]\t[%.1f]", nome, imc());
			}else if(imc() >=25 && imc() <30) {
				return String.format("[ %s ]\t[Sobrepeso]\t[%.1f]", nome, imc());
			}else if(imc() >=30 && imc() <40) {
				return String.format("[ %s ]\t[ Obeso ]\t[%.1f]", nome, imc());
			}else{
				return String.format("[ %s ]\t[Obeso mórbido]\t[%.1f]", nome, imc());
			}
		}
		
	}
}	
	
