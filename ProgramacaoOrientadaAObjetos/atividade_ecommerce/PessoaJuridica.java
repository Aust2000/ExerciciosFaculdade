package atividade_ecommerce;

public class PessoaJuridica extends Cliente {
    private String cnpj;



    public PessoaJuridica(String nome, double saldoInicial, String cnpj) {
        super(nome, saldoInicial);
        this.cnpj = cnpj;
    }


    
    public String getCnpj() {
        return cnpj;
    }

    public void setCnpj(String cnpj) {
        this.cnpj = cnpj;
    }
}