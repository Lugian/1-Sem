package programa;

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
		System.out.println("[Paciênte]\t[Diagnostico]\t[IMC]");
		for(int i=0; i<quantidade; i++) {
			System.out.println(inf[i].diagnostico());
		}
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
		System.out.printf("%.1f\t\t%.1f\t\t%.2f\n", mimc, mpeso, maltu);
		float maior=0, menor=0;
		for(int i=0; i<quantidade; i++) {
			if(inf[i].peso>maior) {
				maior = inf[i].peso;
			}else{
				menor = inf[i].peso;
			}
		}
		System.out.printf("%.2f\t\t%.2f", maior, menor);
		
		
	}
}
