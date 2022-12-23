package ex3_login;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JTextField;

public class Forms extends JFrame implements ActionListener{
	
	private static final long serialVersionUID = 1L;
	JPanel painel;
	JLabel nome, senha;
	JTextField cnome, csenha;
	JButton login;
	
	Forms() {
		setTitle("Login do usuário");
		setBounds(1100, 150, 450, 170);
		setDefaultCloseOperation(EXIT_ON_CLOSE);
		painel = new JPanel();
		setContentPane(painel);
		setLayout(null);

		nome = new JLabel("Nome:");
		nome.setBounds(50, 20, 200, 30);
		painel.add(nome);
		senha = new JLabel("Senha:");
		senha.setBounds(50, 50, 200, 30);
		painel.add(senha);
		cnome = new JTextField();
		cnome.setBounds(120, 25, 250, 22);
		painel.add(cnome);
		csenha = new JTextField();
		csenha.setBounds(120, 55, 250, 22);
		painel.add(csenha);
		
		login = new JButton("Login");
		login.setBounds(290, 85, 80, 24);
		painel.add(login);
		login.addActionListener(this);
	}
	
	public static void main(String[] args) {
		new Forms().setVisible(true);
	}

	@Override
	public void actionPerformed(ActionEvent e) {		
	}


}
