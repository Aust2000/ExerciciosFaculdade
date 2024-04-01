public class PessoaFisica extends Cliente {
    private String cpf;



    public PessoaFisica(String nome, double saldoInicial, String cpf) {
        super(nome, saldoInicial);
        this.cpf = cpf;
        cpf = validarCpf(cpf);
    }


    private String validarCpf(String cpf) {
        if (cpf.charAt(3) != '.') {
            cpf = inserirCaractere(cpf, '.', 3);
        }
        if (cpf.charAt(7) != '.') {
            cpf = inserirCaractere(cpf, '.', 7);
        }
        if (cpf.charAt(11) != '-') {
            cpf = inserirCaractere(cpf, '.', 11);
        }
        return cpf;
    }

    private String inserirCaractere(String string, char caractere, int index) { //not working
        return string.substring(0, index - 1) + caractere + string.substring(index + 1, string.length() - 1);
    }

    public void setCpf(String cpf) {
        this.cpf = cpf;
    }

    public String getCpf() {
        return cpf;
    }
}