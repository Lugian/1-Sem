package podrao1;

public class Pessoa {
	String nometurma, periodo, diasemana;
	int alunos, horasemanais;
	float mensalidade;
	
	Pessoa(){}
	Pessoa(String nt, String p, String ds, int a, int hs, float m){
		nometurma=nt;
		periodo=p;
		diasemana=ds;
		alunos=a;
		horasemanais=hs;
		mensalidade=m;
	}  
	
	float faturamentomensal() {
		return alunos*mensalidade;
	}
	float faturamentoporhora() {
		return (float) (faturamentomensal()/(horasemanais*4.5));
	}
	
	
	public String tabela() {
		return String.format("[%s]\t[%s]\t  [%s]\t[%d]\t [%d]\t[R$%.2f]\t[R$%.2f]\t[R$%.2f]", 
				nometurma, periodo, diasemana, alunos, horasemanais, mensalidade, faturamentomensal(), 
				faturamentoporhora());	
	}
}