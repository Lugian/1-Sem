package ex1;

import java.io.BufferedWriter;
import java.io.FileWriter;
import java.io.IOException;

import javax.swing.JOptionPane;

public class Mensagens {

	public static void main(String[] args) {
		System.out.println("testeteste");
		String text= JOptionPane.showInputDialog("Digite o nome da sua mãe"),
				uau="o nome da sua mãe parece com o da minha sogra";
		String nomes[] = text.split(" ");
		text ="O nome da gostosa da sua mãe possui "+nomes[0].length()+" letras\n";
		text +="Seu último nome possui "+nomes[nomes.length-1].length()+" letras\n";
		if(nomes.length > 2)
			text += "Seu nome do meio possui "+nomes[1].length()+" letras\n";
		else
			text += "Você não possui nome do meio\n";
				
		JOptionPane.showMessageDialog(null, uau);
		JOptionPane.showMessageDialog(null, text);

	}

}