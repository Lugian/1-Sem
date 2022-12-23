package podrao;

import java.util.ArrayList;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
    	ArrayList<Pessoa> inf = new ArrayList<>();
		Scanner scan = new Scanner(System.in);

		int quantidade;
		do {
			System.out.println("Por favor informe a quantidade de alunos. ");
			quantidade = scan.nextInt();
			if(quantidade>10 || quantidade<0){
				System.out.println("Informe um valor válido.");
			}
		}while(quantidade>10 || quantidade<0);
		
		for(int i=0; i<quantidade; i++) {
			System.out.printf("Nome, sobrenome, idade: \n", i+1);
			inf.add(new Pessoa(scan.next(), scan.next(), scan.nextInt()));
		}
		System.out.println("[Nome]\t[Sobrenome]\t[Idade]\t[FaseVida]");
		int it=0, im=0;
		int qtd[] = {0,0,0,0};
		int ict=0, icm=0, ijt=0, ijm=0, iat=0, iam=0, iit=0, iim=0;
		for(int i=0;i<quantidade;i++) {
			System.out.printf("[%s]\t[%s]\t[%d]\t%s\n", inf.get(i).nome, inf.get(i).sobrenome, inf.get(i).idade, inf.get(i).classificacao());
			it+=inf.get(i).idade;
			im=it/quantidade;
			if(inf.get(i).classificacao().equals("[Crianca]")) {
				qtd[0]++;
				ict+=inf.get(i).idade;
				icm=ict/qtd[0];
			}
			if(inf.get(i).classificacao().equals("[Jovem]")) {
				qtd[1]++;
				ijt+=inf.get(i).idade;
				ijm=ijt/qtd[1];
			}
			if(inf.get(i).classificacao().equals("[Adulto]")) {
				qtd[2]++;
				iat+=inf.get(i).idade;
				iam=iat/qtd[2];
			}
			if(inf.get(i).classificacao().equals("[Idoso]")) {
				qtd[3]++;
				iit+=inf.get(i).idade;
				iim=iit/qtd[3];
			}
		}
		System.out.println("\n[Media idade]");
		System.out.println(im);
		System.out.println("\n[Fase]\t\t[Qtd]\t[Media]");
		System.out.printf("[Crianca]\t[%d]\t[%d]", qtd[0], icm);
		System.out.printf("\n[Jovem]\t\t[%d]\t[%d]", qtd[1], ijm);
		System.out.printf("\n[Adulto]\t[%d]\t[%d]", qtd[2], iam);
		System.out.printf("\n[Idoso]\t\t[%d]\t[%d]", qtd[3], iim);		
	}

}
