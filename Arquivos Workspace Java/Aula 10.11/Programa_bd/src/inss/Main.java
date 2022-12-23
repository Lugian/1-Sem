package inss;

import java.io.BufferedWriter;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;

public class Main {
	
	static float salario;

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		System.out.println("Informe o nome e salário. ");
		String nome = scan.next();
		float salario = scan.nextInt();
		String saida = String.format("%s\tR$%.2f\tDeconto INSS = R$%.2f\r\n", nome, salario, insscalculo(salario));
		try {
			BufferedWriter bw = new BufferedWriter(new FileWriter("inss.txt", true));
			bw.write(saida);
			bw.close();
			System.out.println("Informações salva");
		} catch (IOException e) {
			e.printStackTrace();
		}  
		
	}
	public static float insscalculo(float salario) {
		if(salario<=1212) { 
			return (salario/100)*7.5f;
		}else if(salario<=2427.35){
			return (salario/100)*9f;
		}else if(salario<=3614.03) {
			return (salario/100)*12f;
		}else {
			return (salario/100)*14f;
		}
	}

}
