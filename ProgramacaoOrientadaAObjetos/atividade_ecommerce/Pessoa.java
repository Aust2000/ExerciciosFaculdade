public class Pessoa {
    private String nome;
    private int idade;
    private Conta<Pessoa> cadastroConta;


    public Pessoa (String nome, int idade, double saldoInicial) {
        this.nome = nome;
        this.idade = idade;
        cadastroConta = new Conta<Pessoa>(saldoInicial);
    }


    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public int getIdade() {
        return idade;
    }

    public void setIdade(int idade) {
        this.idade = idade;
    }

    public Conta<Pessoa> getConta() {
        return cadastroConta;
    }

    public void refazerConta(int saldoInicial) {
        cadastroConta = new Conta<Pessoa>(saldoInicial);
    }
}