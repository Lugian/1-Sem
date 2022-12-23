package aula7;

public class Materias {
	String nome;
	float pt;
	float mat;
	float cien;
	float frequenciapt;
	float frequenciamat;
	float frequenciacien;
	
	float med() {
		return (pt+mat+cien)/3;
	}
	
	public String toString() {
		return String.format("%s\t%.1f\t%.1ft%.1ft%.1f\t[Aprovado]\t[0]\n", nome, pt, mat, cien, med());
	}
	
	float freq(){
		return ((frequenciapt+frequenciamat+frequenciacien)/300)*100;
	}
}
