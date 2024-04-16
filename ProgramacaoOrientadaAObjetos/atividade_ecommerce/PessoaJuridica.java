public class PessoaJuridica extends Pessoa {
    private String cnpj;


    public PessoaJuridica(String nome, int idade, double saldoInicial, String cnpj) {
        super(nome, idade, saldoInicial);
        this.cnpj = cnpj;
        validaCnpj();
    }

    
    public String getCnpj() {
        return cnpj;
    }

    public void setCnpj(String cnpj) {
        this.cnpj = cnpj;
        validaCnpj();
    }

    private void validaCnpj() {
        if (cnpj.charAt(2) != '.') {
            cnpj = inserirCaractereNoCnpj(cnpj, '.', 2);
        }
        if (cnpj.charAt(6) != '.') {
            cnpj = inserirCaractereNoCnpj(cnpj, '.', 6);
        }
        if (cnpj.charAt(10) != '/') {
            cnpj = inserirCaractereNoCnpj(cnpj, '/', 10);
        }
        if (cnpj.charAt(15) != '-') {
            cnpj = inserirCaractereNoCnpj(cnpj, '-', 15);
        }
    }

    private String inserirCaractereNoCnpj(String string, char caractere, int index) { //not working
        if (Character.isDigit(string.charAt(index))) {
            return string.substring(0, index) + caractere + string.substring(index, string.length());
        }
        return string.substring(0, index) + caractere + string.substring(index + 1, string.length());
    }
}