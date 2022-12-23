package irrf;

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
		String saida = String.format("%s\tR$%.2f\tDeconto IRRF = R$%.2f\r\n", nome, salario, insscalculo(salario));
		try {
			BufferedWriter bw = new BufferedWriter(new FileWriter("iffr.txt", true));
			bw.write(saida);
			bw.close();
			System.out.println("Informações salva");
		} catch (IOException e) {
			e.printStackTrace();
		}
		
	}
	public static float insscalculo(float salario) {
		if(salario<=1903.98) { 
			return 0*7.5f;
		}else if(salario<=2826.65){
			return (salario/100)*7.5f;
		}else if(salario<=3751.05) {
			return (salario/100)*15f;
		}else if(salario<=4664.68){
			return (salario/100)*22.5f;
		}else {
			return (salario/100)*27.5f;
		}
	}

}