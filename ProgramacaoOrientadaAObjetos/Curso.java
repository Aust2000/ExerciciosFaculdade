package ProgramacaoOrientadaAObjetos;

public class Curso {
    private String nome;
    private UnidadeAcademica unidadeAcademica;

    public Curso(String nome, UnidadeAcademica unidadeAcademica) {
        this.nome = nome;
        this.unidadeAcademica = unidadeAcademica;
    }

    public String nome() {
        return nome;
    }

    public UnidadeAcademica unidadeAcademica() {
        return unidadeAcademica;
    }
}