package ProgramacaoOrientadaAObjetos;

public class Main {
    public static void main(String[] args) {
        UnidadeAcademica inf = new UnidadeAcademica("Instituto de Informática", "Inf");
        Curso cienciaDaComputacao = new Curso("Ciência da Computação", inf);
        
        double[] notasDoPeriodo = {7.0, 9.8, 9.4, 8.6, 10.0};
        Estudante felipe = new Estudante("Felipe Sucupira", 18, cienciaDaComputacao, notasDoPeriodo);

        System.out.println("A média do período de " + felipe.nome() + " é " + felipe.mediaDoPeriodo());
        System.out.println("O estudante " + felipe.nome() + " faz o curso " + felipe.curso().nome() + " no " + felipe.curso().unidadeAcademica().nomeComSigla());
    }
}