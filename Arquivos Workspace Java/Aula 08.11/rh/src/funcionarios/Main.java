package funcionarios;

import java.text.ParseException;
import java.util.ArrayList;
import java.util.Scanner;

public class Main {
	
	static Scanner scan = new Scanner(System.in);
	static ArrayList<Funcionario> info = new ArrayList<>();
	static int menuescolha=0;
	static String menu[] = {"1- Cadastro", "2- Listar todos", "3- Alterar", "4- Excluir", "5- Buscar por matricula",
							"6- Buscar por nome", "7- Buscar por nascimento", "8- Encerrar"};
	
	public static void listagemmenu(String[] listagemmenu) {
		for (String i : listagemmenu) {
			System.out.println(i);
		}		
	}
	
	public static void cadastrar() throws ParseException{
		System.out.println("Informe a quantidade para o cadastro:");
		int qtdca = scan.nextInt();
		System.out.println("Num matricula\tNome\tNascimento");
		for (int i = 0; i < qtdca; i++)
			info.add(new Funcionario(scan.nextInt(), scan.next(), scan.next()));
	}

	public static void listartodos() {
		System.out.println("Num matricula\tNome\tNascimento");
		for (int i = 0; i < info.size(); i++) {
			System.out.println(i + "\t" + info.get(i));
		}
	}
	
	public static void alterar() throws ParseException {
		System.out.print("Informe o num da matricula. ");
		int numatricula = scan.nextInt();
		System.out.println("Num matricula\tNome\tNascimento");
		System.out.println(numatricula + "\t" + info.get(numatricula));
		info.set(numatricula, new Funcionario(scan.nextInt(), scan.next(), scan.next()));
		System.out.println("Alteração realizada.");
	}

	public static void excluir() {
		System.out.print("Informe o num da matricula. ");
		int numatricula = scan.nextInt();
		info.remove(numatricula);
		System.out.println("Matricula excluida.");
	}
	
	public static void buscarmatricula() {
		System.out.print("Informe o num da matricula para a busca: ");
		int matriculabusca = scan.nextInt();
		System.out.println("Num matricula\tNome\tNascimento");
		for (int i = 0; i < info.size(); i++) {
			if(info.get(i).getMatricula() == matriculabusca)
				System.out.println(i + "\t" + info.get(i));
			else 
				System.out.println("Informe uma num de matricula válida");
		}
	}
	
	public static void buscarnome() {
		System.out.print("Informe o nome para a busca: ");
		String nomebusca = scan.next();
		System.out.println("Num matricula\tNome\tNascimento");
		for (int i = 0; i < info.size(); i++) {
			if(info.get(i).getNome().contains(nomebusca))
				System.out.println(i + "\t" + info.get(i));
			else 
				System.out.println("Informe uma nome válida");
		}
	}
	
	public static void buscarnascimento() {
		System.out.print("Informe a data de nascimento para a busca: ");
		String nascimentobusca = scan.next();
		System.out.println("Num matricula\tNome\tNascimento");
		for (int i = 0; i < info.size(); i++) {
			if(info.get(i).getNascimento().contains(nascimentobusca))
				System.out.println(i + "\t" + info.get(i));
			else
				System.out.println("Informe uma data de nascimento válida");
		}
	}
	
	public static void main(String [] agrs) throws ParseException{
		System.out.println("Informe qual opção deseja ir.");
		while(menuescolha!=8) {
			listagemmenu(menu);
			menuescolha = scan.nextInt();
			switch (menuescolha) {
			case 1:
				cadastrar();
				break;
			case 2:
				listartodos();
				break;
			case 3:
				alterar();
				break;
			case 4:
				excluir();
				break;
			case 5:
				buscarmatricula();
				break;
			case 6:
				buscarnome();
				break;
			case 7:
				buscarnascimento();
				break;
			case 8:
				System.out.println("Obrigado por usar o nosso programa. Até!");
				break;
			default:
				System.out.println("Opção inválida, informe números entre 1 e 8");			

			}
		}
	}
	
}
