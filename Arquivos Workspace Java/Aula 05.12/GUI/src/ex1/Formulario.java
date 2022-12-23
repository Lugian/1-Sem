package ex1;

//programação orientada a evento e estrutural

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.BufferedWriter;
import java.io.FileWriter;
import java.io.IOException;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JTextArea;
import javax.swing.JTextField;

public class Formulario extends JFrame implements ActionListener{
	private static final long serialVersionUID = 1L;
	JPanel kibepainel;
	JLabel kibenome, kibeidade, kiberesultado; 
	JTextField nome, idade;
	JTextArea resultado;
	JButton botao, limpar, salvar;
	String result = " ", fase;
	int idad;
	
	Formulario(){
		setTitle("Vou me matar meia noite");
		setBounds(1300,100,500,500);
		setDefaultCloseOperation(EXIT_ON_CLOSE);
		kibepainel = new JPanel();
		setContentPane(kibepainel);
		setLayout(null);  
		
		kibenome = new JLabel("nome gostosa: ");
		kibenome.setBounds(20, 20, 200, 20);
		kibepainel.add(kibenome);		
		kibeidade = new JLabel("idade gostosa: ");
		kibeidade.setBounds(20, 50, 200, 20);
		kibepainel.add(kibeidade);		
		kiberesultado = new JLabel("resultdo gostosa: ");
		kiberesultado.setBounds(20, 80, 200, 20);
		kibepainel.add(kiberesultado);
		
		nome = new JTextField();
		nome.setBounds(150, 20, 200, 20);
		kibepainel.add(nome);
		idade = new JTextField();
		idade.setBounds(150, 50, 200, 20);
		kibepainel.add(idade);
		resultado = new JTextArea();
		resultado.setBounds(150, 120, 250, 200);
		kibepainel.add(resultado);		
		
		botao = new JButton("Processar");
		botao.setBounds(150, 80, 100, 20);
		kibepainel.add(botao);	
		botao.addActionListener(this);
		limpar = new JButton("Clear");
		limpar.setBounds(270, 80, 80, 20);
		kibepainel.add(limpar);	
		limpar.addActionListener(this);
		
		salvar = new JButton("Save");
		salvar.setBounds(150, 340, 80, 20);
		kibepainel.add(salvar);	
		salvar.addActionListener(this);
	}
	@Override
	public void actionPerformed(ActionEvent e) {
		if (e.getSource() == botao) {
			result += nome.getText()+"\t";
			result += idade.getText()+"\t";
			idad += Integer.parseInt(idade.getText());
			if(idad<10)
				fase = "criança";
			else if(idad<22)
				fase= "jovem";
			else if(idad<60)
				fase="adulto";
			else
				fase="idoso";			
			result += fase+"\n\r";
			resultado.setText(result);			
		}else if (e.getSource() == limpar) {
			result = " ";
			resultado.setText(result);	
		}else if(e.getSource() == salvar) {
				BufferedWriter bw;
				try {
					bw = new BufferedWriter(new FileWriter("teste.txt", true));
					bw.write(result);
					bw.close();
					System.out.println("Informações salvas");
				} catch (IOException e1) {
					e1.printStackTrace();
				}
		}
		
	}
	public static void main(String[] args) {
		new Formulario().setVisible(true);
	}
	

}
