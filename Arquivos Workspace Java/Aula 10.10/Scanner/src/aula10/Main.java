package aula10;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		String nome;
		int idade;
		float altura;
		Scanner  scan = new Scanner(System.in);
		
		System.out.println("Informe seu nome ");
		nome = scan.next();
		System.out.println("Informe sua idade ");
		idade = scan.nextInt();
		System.out.println("Informe sua altua ");
		altura = scan.nextFloat();
		
		System.out.printf("Nome: %s \nIdade: %d \nAltura: %.1f\n", nome, idade, altura);

	}

}
