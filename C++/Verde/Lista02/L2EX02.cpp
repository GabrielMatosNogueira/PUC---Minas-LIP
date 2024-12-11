#include <iostream>
#include <string>
#include <iomanip> // Adicione esta linha

class Produto {
private:
    std::string nome;
    float preco;

public:
    // Construtor que inicializa os atributos com valores lidos
    Produto() {
        std::getline(std::cin, nome);
        std::cin >> preco;
        std::cin.ignore(); // Limpar o buffer do cin
        std::cout << "Produto criado: " << nome << std::endl;
    }

    // Construtor que aceita parametros para iniciar os atributos
    Produto(const std::string& nome, float preco) : nome(nome), preco(preco) {
        std::cout << "Produto criado: " << nome << std::endl;
    }

    // Destrutor que imprime uma mensagem quando um objeto é destruído
    ~Produto() {
        std::cout << "Produto destruido: " << nome << std::endl;
    }

    // Método para exibir os dados do produto
    void exibir() const {
        std::cout << "Preco: " << std::fixed << std::setprecision(2) << preco << std::endl; // Modifique esta linha
    }
};

int main() {
    // Criando objeto utilizando o construtor que lê os valores
    Produto produto1;
    produto1.exibir();

    // Criando objeto utilizando o construtor que aceita parâmetros
    Produto produto2("Kit Teclado e Mouse", 199.90);
    produto2.exibir();

    return 0;
}