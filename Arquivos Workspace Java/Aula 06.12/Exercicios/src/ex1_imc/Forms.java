package ex1_imc;

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


public class Forms extends JFrame implements ActionListener{
	
	private static final long serialVersionUID = 1L;
	JPanel painel;
	JLabel nome, peso, altura;
	JTextField cnome, cpeso, caltura;
	JButton calcular, clear, salvar;
	JTextArea resultado;
	String saida="";

	Forms() {
		setTitle("Calculo de IMC");
		setBounds(1100, 150, 500, 500);
		setDefaultCloseOperation(EXIT_ON_CLOSE);
		painel = new JPanel();
		setContentPane(painel);
		setLayout(null);

		nome = new JLabel("Nome:");
		nome.setBounds(50, 20, 200, 30);
		painel.add(nome);
		peso = new JLabel("Peso:");
		peso.setBounds(50, 50, 200, 30);
		painel.add(peso);
		altura = new JLabel("Altura:");
		altura.setBounds(50, 80, 200, 30);
		painel.add(altura);
		cnome = new JTextField();
		cnome.setBounds(120, 25, 250, 22);
		painel.add(cnome);
		cpeso = new JTextField();
		cpeso.setBounds(120, 55, 250, 22);
		painel.add(cpeso);
		caltura = new JTextField();
		caltura.setBounds(120, 85, 250, 22);
		painel.add(caltura);
		
		calcular = new JButton("Calcular");
		calcular.setBounds(120, 120, 90, 25);
		painel.add(calcular);
		calcular.addActionListener(this);
		clear = new JButton("Clear");
		clear.setBounds(220, 120, 80, 25);
		painel.add(clear);
		clear.addActionListener(this);
		resultado = new JTextArea();
		resultado.setBounds(120, 170, 250, 250);
		painel.add(resultado);
		
		salvar = new JButton("Save");
		salvar.setBounds(120, 430, 80, 25);
		painel.add(salvar);	
		salvar.addActionListener(this);
	}

	@Override
	public void actionPerformed(ActionEvent e) {
		if (e.getSource() == calcular) {
			Informacao i = new Informacao(cnome.getText(), cpeso.getText(), caltura.getText());
			saida += i.imc();
			resultado.setText(saida);
		}else if (e.getSource() == clear) {
			resultado.setText(" ");	
		}else if (e.getSource() == salvar) {
			BufferedWriter bw;
			try {
				bw = new BufferedWriter(new FileWriter("IMC.txt", true));
				bw.write(saida);
				bw.close();
				System.out.println("Informações salvas");
			} catch (IOException e1) {
				e1.printStackTrace();
			}
		}
	}
	public static void main(String[] args) {
		new Forms().setVisible(true);
	}

}
