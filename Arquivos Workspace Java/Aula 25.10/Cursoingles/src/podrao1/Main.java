package podrao1;

import java.util.ArrayList;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
    	ArrayList<Pessoa> inf = new ArrayList<>();
		Scanner scan = new Scanner(System.in);

		int quantidade;
		System.out.println("Por favor informe a quantidade de turmas. ");
		quantidade = scan.nextInt();
		for(int i=0; i<quantidade; i++) {
			System.out.printf("Nome da turma, periodo, dia da semana, num de alunos, horas semanais, mensalidade: \n", i+1);
			inf.add(new Pessoa(scan.next(), scan.next(), scan.next(), scan.nextInt(), scan.nextInt(), scan.nextFloat()));
		}
		System.out.println("[NomeTur]\t[Periodo] [Dia]\t     [Aluno]\t[Hrs]\t[Mensalid]\t[Fatur.Men]\t[Fatur.Hrs]");
		float fmt=0;
		for(int i=0;i<quantidade;i++) {
			System.out.println(inf.get(i).tabela());
			fmt+=inf.get(i).faturamentomensal();
		}
		System.out.println("\n[Fatur.Mensal total]");
		System.out.printf("[R$%.2f]", fmt);
	} 
}