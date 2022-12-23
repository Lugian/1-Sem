package aula10;

public class Materias {
	String nome;
	float portugues;
	float matematica;
	float ciencias;
	float frequenciapt;
	float frequenciamat;
	float frequenciacien;
	
	Materias(){}
	Materias(String alu, float cien, float mat, float pt, float frpt, float frmat, float frcien){
		nome = alu;
		ciencias = cien;
		matematica = mat;
		portugues = pt;
		frequenciapt = frpt;
		frequenciamat = frmat;
		frequenciacien = frcien;
	}
	
	float med() {
		return (portugues+matematica+ciencias)/3;
	}
	public String tomedia() {
		if(med()>=5) {
			return String.format("[ %s ]\t[%.1f]\t[%.1f]\t[%.1f]\t[%.1f]\t[Aprovado]\t[0]", nome, ciencias, matematica, portugues, med());
		}else {
			return String.format("[ %s ]\t[%.1f]\t[%.1f]\t[%.1f]\t[%.1f]\t[Reprovado]\t[%.1f]", nome, ciencias, matematica, portugues, med(), 5-med());
		}
	}
	
	float freq(){
		return ((frequenciapt+frequenciamat+frequenciacien)/300)*100;
	}
	public String tofrequencia() {
		if(freq()<75) {
			return String.format("[ %s ]\t[%.0f]\t[%.0f]\t[%.0f]\t[%.1f%%]\t[Reprovado]\t[%.0f]", nome, frequenciacien, frequenciamat, frequenciapt, freq(), 75-freq());
		}else {
			return String.format("[ %s ]\t[%.0f]\t[%.0f]\t[%.0f]\t[%.1f%%]\t[Aprovado]\t[0]", nome, frequenciacien, frequenciamat, frequenciapt, freq());
		}
	}
}