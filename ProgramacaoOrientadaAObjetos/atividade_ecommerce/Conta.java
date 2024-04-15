public class Conta <T> {
    private double saldo;


    public Conta (double saldoInicial) {
        saldo = saldoInicial;
    }


    public void adicionarSaldo(double valor) {
        saldo += valor;
    }

    public double resgatarSaldo(double valor) {
        double temporario;
        if (saldo - valor < 0) {
            temporario = saldo;
            saldo = 0;
            return temporario;
        }
        saldo -= valor;
        return valor;
    }
}