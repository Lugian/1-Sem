package funcionarios;

import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Calendar;

public class Funcionario {
	int matricula;
	String nome;
	Calendar nascimento;
	
	private SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy");
	
	public Funcionario(int matricula, String nome, String nascimento) throws ParseException {
		super();
		this.matricula = matricula;
		this.nome = nome;
		this.nascimento.setTime(sdf.parse(nascimento));
	}
	
	public int getMatricula() {
		return  matricula;
	}

	public void setMatricula(int matricula) {
		this.matricula = matricula;
	}

	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public String getNascimento() {
		return sdf.format(nascimento.getTime());
	}

	public void setNascimento(Calendar nascimento) {
		this.nascimento = nascimento;
	}

	@Override
	public String toString() {
		return String.format("%d\t%s\t%s", matricula, nome, sdf.format(nascimento.getTime()));
	}
	
}
