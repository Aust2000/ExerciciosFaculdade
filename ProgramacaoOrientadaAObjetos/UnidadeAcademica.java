package ProgramacaoOrientadaAObjetos;

public class UnidadeAcademica {
    private String nome;
    private String sigla;

    public UnidadeAcademica(String nome, String sigla) {
        this.nome = nome;
        this.sigla = sigla.toUpperCase();
    }

    public String nomeComSigla() {
        return sigla + " - " + nome;
    }
}