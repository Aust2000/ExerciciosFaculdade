package ProgramacaoOrientadaAObjetos;

public class Estudante {
    private String nome;
    private int idade;
    private Curso curso;
    private double mediaDoPeriodo;
    private double[] notasDoPeriodo;

    public Estudante(String nome, int idade, Curso curso, double[] notasDoPeriodo) {
        this.nome = nome;
        this.idade = idade;
        this.curso = curso;
        this.notasDoPeriodo = notasDoPeriodo;

        double mediaDoPeriodo = 0;
        for (int i = 0; i < notasDoPeriodo.length; i++) {
            mediaDoPeriodo += notasDoPeriodo[i];
        }
        mediaDoPeriodo /= notasDoPeriodo.length;

        this.mediaDoPeriodo = mediaDoPeriodo;
    }

    public double mediaDoPeriodo() {
        return mediaDoPeriodo;
    }

    public String nome() {
        return nome;
    }

    public Curso curso() {
        return curso;
    }
}