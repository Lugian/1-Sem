package ex3_login;

import javax.swing.JOptionPane;

public class Informacao {
	private String nome;
	private int senha;

	public Informacao(String nome, String senha) {
		this.nome = nome;
		try {
			this.senha = Integer.parseInt(senha);
		} catch(Exception e) {
			this.senha = 0;
		}
	}
	
	boolean acesso() {
		if(nome == "admin" && senha == 1234) {
			return true;
		}else {
			return false;
		}
	}
	

}
