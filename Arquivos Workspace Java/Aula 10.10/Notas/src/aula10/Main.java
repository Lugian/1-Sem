package aula10;

public class Main {

	public static void main(String[] args) {
		Materias inf[] = new Materias[5];
		
		inf[0] = new Materias("Ana Clara", 3f, 5f, 4f, 78f, 70f, 49f);
		inf[1] = new Materias("Pedro", 8f, 7.5f, 3f, 98f, 83f, 49f);
		inf[2] = new Materias("Micaela", 2.55f, 9.1f, 8.2f, 57f, 90f, 23f);
		inf[3] = new Materias("Ortencio", 3.2f, 5f, 4.8f, 41f, 84f, 12f);
		inf[4] = new Materias("Wilson", 5.5f, 10f, 10f, 100f, 100f, 90f);
		
		System.out.println("[Alunos]\t[Cien.]\t[Mat.]\t[Port.]\t[Média]\t[Situação]\t[Méd. neces.]");
		for(int i=0; i<5; i++) {
			System.out.println(inf[i].tomedia());
		}
		System.out.println("\n[Alunos]\t[Cien.]\t[Mat.]\t[Port.]\t[Freq.]\t[Situação]\t[Freq. neces.]");
		for(int i=0; i<5; i++) {
			System.out.println(inf[i].tofrequencia());
		}
	}
	

}
