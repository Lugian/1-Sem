package fgts;

import java.io.BufferedWriter;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		System.out.println("Informe o nome e salário. ");
		String nome = scan.next();
		float salario = scan.nextInt();
		String saida = String.format("%s\tR$%.2f\tR$%.2f\r\n", nome, salario, salario*0.08f);
		try {
			BufferedWriter bw = new BufferedWriter(new FileWriter("fgts.txt", true));
			bw.write(saida);
			bw.close();
			System.out.println("Informações salva");
		} catch (IOException e) {
			e.printStackTrace();
		}
	}

}
