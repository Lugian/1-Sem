package exemplos;

import java.io.BufferedWriter;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Random;

public class Main1 {
	
	public static void main(String[] args) {
		Random r = new Random();
		String aluno[]={"Julio", "Bianca", "João", "Isadora"};
		float prova= r.nextFloat() * 10, 
			trabalho= r.nextFloat() * 10, 
			atividades= r.nextFloat() * 10, 
			media=(prova+trabalho+atividades)/3;
		String saida = String.format("%s;%.2f;%.2f;%.2f;%.2f\r\n", aluno, prova, trabalho, atividades, media);
		
		try {
			BufferedWriter bw = new BufferedWriter(new FileWriter("notas.csv")); //(new FileWriter("./testenota/notas.txt") vai criar o arquivo dentro da pasta "testenota bd"
			bw.write(saida);
			bw.close();
			System.out.println("Tudo certo");
		} catch (IOException e) {
			e.printStackTrace();
		}
	}
	
	// /r é para quebrar linha em arquivos
	// new FileWriter("notas.txt", true); vai ficar repetindo a infomação conforme voce compila
	// new FileWriter("notas.txt", false); salva a mesma infomação conforme voce compila


}
