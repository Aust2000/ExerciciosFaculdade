public class PessoaFisica extends Pessoa {
    private String cpf;


    public PessoaFisica(String nome, int idade, double saldoInicial, String cpf) {
        super(nome, idade, saldoInicial);
        this.cpf = cpf;
        validarCpf();
    }


    private void validarCpf() {
        if (cpf.charAt(3) != '.') {
            cpf = inserirCaractereNoCpf(cpf, '.', 3);
        }
        if (cpf.charAt(7) != '.') {
            cpf = inserirCaractereNoCpf(cpf, '.', 7);
        }
        if (cpf.charAt(11) != '-') {
            cpf = inserirCaractereNoCpf(cpf, '-', 11);
        }
    }

    
    public String inserirCaractereNoCpf(String string, char caractere, int index) { //not working
        if (Character.isDigit(string.charAt(index))) {
            return string.substring(0, index) + caractere + string.substring(index, string.length());
        }
        return string.substring(0, index) + caractere + string.substring(index + 1, string.length());
    }

    public void setCpf(String cpf) {
        this.cpf = cpf;
        validarCpf();
    }

    public String getCpf() {
        return cpf;
    }
}