#include <iostream>
#include <string>
#include <iomanip>

class Produto {
private:
    std::string nome;
    double preco;

public:
    // Construtor
    Produto(std::string n, double p) : nome(n), preco(p) {}

    // Métodos get e set para nome
    std::string getNome() {
        return nome;
    }

    void setNome(std::string n) {
        nome = n;
    }

    // Métodos get e set para preco
    double getPreco() {
        return preco;
    }

    void setPreco(double p) {
        preco = p;
    }

    // Método para exibir os detalhes do produto
    void exibirDetalhes() {
        std::cout << "Nome: " << nome << std::endl;
        std::cout << "Preco: " << std::fixed << std::setprecision(2) << preco << std::endl;
    }
};

int main() {
    std::string nome;
    double preco;
    std::string subtitulo;

    // Entrada de dados
    std::getline(std::cin, nome);
    std::cin >> preco;
    std::cin.ignore(); // Limpar o buffer do cin
    std::getline(std::cin, subtitulo);

    // Criação do objeto Produto
    Produto produto(nome, preco);

    // Exibir detalhes iniciais
    std::cout << "Detalhes iniciais do produto:" << std::endl;
    produto.exibirDetalhes();

    // Modificações
    produto.setNome(produto.getNome() + " " + subtitulo);
    produto.setPreco(produto.getPreco() + 1.05);

    // Exibir detalhes modificados
    std::cout << "Detalhes modificados do produto:" << std::endl;
    produto.exibirDetalhes();

    return 0;
}