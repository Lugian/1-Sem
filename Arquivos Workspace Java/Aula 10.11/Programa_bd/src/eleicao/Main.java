package eleicao;


import java.util.Scanner;

public class Main {
	
	static Scanner scan = new Scanner(System.in); 
	static String candidatos[] = {"13- Lula","22- Jair Bolsonabo"};
	
	public static void listacandidatos(String[] listacandidatos) {
		for (String i : listacandidatos) {
			System.out.println(i);
		}		
	}
	
	public static void main(String[] args) {		
		String escolha;
		int escolhanum;
		int voto;
		listacandidatos(candidatos);
		System.out.println("Informe o número do candidato.");
		voto = scan.nextInt();
		
		if(voto == 12) {
			System.out.println("Escolha confirmar ou cancelar");
			escolha = scan.next();
			if(escolha.equals("confirmar")) { 
				System.out.println(candidatos[0]);
				escolhanum = 1;
			}else if(escolha.equals("cancelar")) 
				escolhanum = 0;
		}else if(voto == 22) {
			System.out.println("Escolha confirmar ou cancelar");
			escolha = scan.next();
			if(escolha.equals("confirmar")) {
				System.out.println(candidatos[1]);
				escolhanum = 1;
			}else
				escolhanum = 0;
		}else if(voto == 0) 
			System.out.println("Voto em branco");
		else
			System.out.println("Voto nulo");
	}
}
