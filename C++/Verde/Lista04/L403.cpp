#include <iostream>
#include <string>
#include <iomanip>
#include <limits>

class Funcionario {
protected:
    std::string nome;
    float salario;

public:
    // Construtor
    Funcionario(const std::string& nome = "", float salario = 0.0f) 
        : nome(nome), salario(salario) {}

    // Métodos get e set para nome
    std::string getNome() const {
        return nome;
    }

    void setNome(const std::string& nome) {
        this->nome = nome;
    }

    // Métodos get e set para salario
    float getSalario() const {
        return salario;
    }

    void setSalario(float salario) {
        this->salario = salario;
    }

    // Método imprime
    virtual void imprime() const {
        std::cout << "Dados do Funcionario:" << std::endl;
        std::cout << "Nome: " << nome << std::endl;
        std::cout << "Salario: " << std::fixed << std::setprecision(2) << salario << std::endl;
    }
};

class Gerente : public Funcionario {
private:
    float bonus;

public:
    // Construtor
    Gerente(const std::string& nome = "", float salario = 0.0f, float bonus = 0.0f) 
        : Funcionario(nome, salario), bonus(bonus) {}

    // Métodos get e set para bonus
    float getBonus() const {
        return bonus;
    }

    void setBonus(float bonus) {
        this->bonus = bonus;
    }

    // Método imprime
    void imprime() const override {
        Funcionario::imprime();
        std::cout << "Bonus Gerente: " << std::fixed << std::setprecision(2) << bonus << std::endl;
    }
};

int main() {
    std::string nome;
    float salario, bonus;

    // Criação e entrada de dados para Funcionario
    std::getline(std::cin, nome);
    std::cin >> salario;
    Funcionario funcionario(nome, salario);

    // Limpar o buffer do cin
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // Criação e entrada de dados para Gerente
    std::getline(std::cin, nome);
    std::cin >> salario;
    std::cin >> bonus;
    Gerente gerente(nome, salario, bonus);

    // Exibição dos dados
    std::cout << std::endl;
    funcionario.imprime();
    std::cout << std::endl;
    gerente.imprime();

    return 0;
}