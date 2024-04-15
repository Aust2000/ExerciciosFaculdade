public class PessoaJuridica extends Pessoa {
    private String cnpj;


    public PessoaJuridica(String nome, int idade, double saldoInicial, String cnpj) {
        super(nome, idade, saldoInicial);
        this.cnpj = cnpj;
    }

    
    public String getCnpj() {
        return cnpj;
    }

    public void setCnpj(String cnpj) {
        this.cnpj = cnpj;
    }
}