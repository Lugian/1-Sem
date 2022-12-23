package aula7;

public class Main {

	public static void main(String[] args) {
		Materias inf[] = new Materias[5];
		
		inf[0] = new Materias();
		inf[0].nome = "Ana Clara";
		inf[0].cien = 3f;
		inf[0].mat = 5f;
		inf[0].pt = 4f;
		inf[0].frequenciacien = 78f;
		inf[0].frequenciamat = 70f;
		inf[0].frequenciapt = 86f;
		
		inf[1] = new Materias();
		inf[1].nome = "Pedro";
		inf[1].cien = 8f;
		inf[1].mat = 7.5f;
		inf[1].pt = 3f;
		inf[1].frequenciacien = 98f;
		inf[1].frequenciamat = 83f;
		inf[1].frequenciapt = 49f;
		
		inf[2] = new Materias();
		inf[2].nome = "Micaela";
		inf[2].cien = 2.55f;
		inf[2].mat = 9.1f;
		inf[2].pt = 8.2f;
		inf[2].frequenciacien = 57f;
		inf[2].frequenciamat = 90f;
		inf[2].frequenciapt = 23f;
		
		inf[3] = new Materias();
		inf[3].nome = "Ortencio";
		inf[3].cien = 3.2f;
		inf[3].mat = 5f;
		inf[3].pt = 4.8f;
		inf[3].frequenciacien = 41f;
		inf[3].frequenciamat = 84f;
		inf[3].frequenciapt = 12f;
		
		inf[4] = new Materias();
		inf[4].nome = "Wilson";
		inf[4].cien = 5.5f;
		inf[4].mat = 10f;
		inf[4].pt = 10f;
		inf[4].frequenciacien = 100f;
		inf[4].frequenciamat = 100f;
		inf[4].frequenciapt = 90f;
		
		System.out.println("[Alunos]\t[Cien.]\t[Mat.]\t[Port.]\t[Média]\t[Situação]\t[Méd. neces.]");
		for(int i=0; i<5; i++) {
			if(inf[i].med()>=5) {
				System.out.printf("[ %s ]\t[%.1f]\t[%.1f]\t[%.1f]\t[%.1f]\t[Aprovado]\t[0]\n", inf[i].nome, inf[i].cien, inf[i].mat, inf[i].pt, inf[i].med());
			}else{
				System.out.printf("[ %s ]\t[%.1f]\t[%.1f]\t[%.1f]\t[%.1f]\t[Reprovado]\t[%.1f]\n", inf[i].nome, inf[i].cien, inf[i].mat, inf[i].pt, inf[i].med(), 5-inf[i].med());
			}
		}
		System.out.println("\n[Alunos]\t[Cien.]\t[Mat.]\t[Port.]\t[Freq.]\t[Situação]\t[Freq. neces.]");
		for(int i=0; i<5; i++) {
			if(inf[i].freq()<75) {
				System.out.printf("[ %s ]\t[%.0f]\t[%.0f]\t[%.0f]\t[%.1f%%]\t[Reprovado]\t[%.0f]\n", inf[i].nome, inf[i].frequenciacien, inf[i].frequenciamat, inf[i].frequenciapt, inf[i].freq(), 75-inf[i].freq());
			}else {
				System.out.printf("[ %s ]\t[%.0f]\t[%.0f]\t[%.0f]\t[%.1f%%]\t[Aprovado]\t[0]\n", inf[i].nome, inf[i].frequenciacien, inf[i].frequenciamat, inf[i].frequenciapt, inf[i].freq());
			}

		}
	}
	

}
