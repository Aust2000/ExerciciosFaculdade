public class Cliente {
    private String nome;
    private double saldo;


    public Cliente (String nome, double saldoInicial) {
        this.nome = nome;
        saldo = saldoInicial;
    }


    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public void comprarProduto(Produto produto) {
        this.saldo -= produto.getPreco();
    }
}