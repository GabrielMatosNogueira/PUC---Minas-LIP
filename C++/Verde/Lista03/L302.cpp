#include <iostream>
#include <string>

class ContaBancaria {
private:
    float saldo;
    std::string nomeCliente;

public:
    ContaBancaria(std::string nome) : nomeCliente(nome), saldo(0) {}

    void setSaldo(float novoSaldo) {
        if (novoSaldo >= 0) {
            saldo = novoSaldo;
        }
    }

    float getSaldo() const {
        return saldo;
    }

    void depositar(float valor) {
        if (valor > 0) {
            saldo += valor;
            std::cout << "Depositado: " << valor << std::endl;
        }
    }

    void sacar(float valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
            std::cout << "Sacado: " << valor << std::endl;
        } else {
            std::cout << "Valor de saque invalido ou saldo insuficiente!" << std::endl;
        }
    }

    void imprimirDados() const {
        std::cout << "Nome do Cliente: " << nomeCliente << std::endl;
        std::cout << "Saldo Atual: " << saldo << std::endl;
    }
};

int main() {
    std::string nome;
    std::getline(std::cin, nome);

    ContaBancaria conta(nome);

    int numMovimentacoes;
    std::cin >> numMovimentacoes;

    for (int i = 0; i < numMovimentacoes; ++i) {
        int opcao;
        std::cin >> opcao;

        if (opcao == 1) {
            float valor;
            std::cin >> valor;
            conta.depositar(valor);
        } else if (opcao == 2) {
            float valor;
            std::cin >> valor;
            conta.sacar(valor);
        } else {
            std::cout << "Opcao invalida!" << std::endl;
        }
    }

    std::cout << "Dados da conta apos as movimentacoes:" << std::endl;
    conta.imprimirDados();

    return 0;
}
