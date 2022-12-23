package padrao;

import java.util.Scanner;

public class Main {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		Paciente inf[] = new Paciente[10];
		Scanner scan = new Scanner(System.in);
		
		int quantidade;
		do {
			System.out.println("Por favor informe a quantidade de paciente. ");
			quantidade = scan.nextInt();
			if(quantidade>10 || quantidade<0){
				System.out.println("Informe um valor válido.");
			}
			
		}while(quantidade>10 || quantidade<0);
		
		for(int i=0; i<quantidade; i++) {
			do {
				System.out.printf("Nome paciente [%d], idade, peso e altura: \n", i+1);
				inf[i] = new Paciente(scan.next(), scan.nextInt(), scan.nextFloat(), scan.nextFloat());
				if(i<0) {
					System.out.println("Não informe valores negativos.");
				}
			}while(i<0);
		}
		String text1="Normal";
		int time1=0;
		System.out.println("[Paciênte]\t[Diagnostico]\t[IMC]");
		for(int i=0; i<quantidade; i++) {
			System.out.println(inf[i].diagnostico());
		}
		for(int i=0; i<quantidade; i++) {
			if (inf[i].diagnostico().substring(i).startsWith(text1)) {
                time1++;
            }
		}
		System.out.println("\n[Diagnóstico]\t[Pacientes]");
		System.out.printf("[Subpeso Sev.]\t[%d]\n", time1);
		System.out.printf("[Subpeso]\t[%d]\n", time1);
		System.out.printf("[Normal]\t[%d]\n", time1);
		System.out.printf("[Sobrepeso]\t[%d]\n", time1);
		System.out.printf("[Obeso]  \t[%d]\n", time1);
		System.out.printf("[Obeso Mórb.]\t[%d]\n", time1);

		System.out.println("\n[Média IMC]\t[Média peso]\t[Média altura]");
		float timc = 0, mimc = 0, tpeso = 0, mpeso = 0, taltu = 0, maltu = 0;
		for(int i=0; i<quantidade; i++) {
			timc += inf[i].imc();
			mimc = timc/quantidade;
			tpeso += inf[i].peso;
			mpeso = tpeso/quantidade;
			taltu += inf[i].altura;
			maltu = taltu/quantidade;
		}
		System.out.printf("[%.1f]\t\t[%.1f]\t\t[%.2f]\n", mimc, mpeso, maltu);
		
		float maior=0, menor=0, maiora=0, menora=0;
		int pacigordo=-1, pacimagro=0, pacialto=0, pacibaixo=0;
		for(int i=0; i<quantidade; i++) {
			if(inf[i].peso>maior) {
				maior = inf[i].peso;
				pacigordo=i;
			}
			if(inf[i].peso<menor){
				menor = inf[i].peso;
				pacimagro=i;
			}
			if(inf[i].altura>maiora) {
				maiora = inf[i].altura;
				pacialto=i;
			}
			if(menora<inf[i].peso){
				menora = inf[i].altura;
				pacibaixo=i;
			}
		}
		System.out.println("\n\t [Maior]   [Menor]");
		System.out.println("[Pacie]  "+ inf[pacigordo].nome+"     "+inf[pacimagro].nome);
		System.out.printf("[Peso]   [%.2f]   [%.2f]\n", maior, menor);
		System.out.println("[Pacie]  "+ inf[pacialto].nome+"     "+inf[pacibaixo].nome);
		System.out.printf("[Altura] [%.2f]    [%.2f]", maiora, menora);
		
	}
}
