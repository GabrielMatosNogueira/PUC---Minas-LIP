#include <iostream>
#include <iomanip>
#include <string>

class Produto {
private:
    std::string nome;
    double preco;
    static int contador;

public:
    // Construtor que inicializa com valores lidos
    Produto() {
        std::getline(std::cin, nome);
        std::cin >> preco;
        std::cin.ignore(); // Limpar o buffer do cin
        contador++;
        std::cout << "Produto criado: " << nome << std::endl;
        std::cout << "Preco: " << std::fixed << std::setprecision(2) << preco << std::endl;
        std::cout << "Total de produtos: " << contador << std::endl;
    }

    // Construtor que aceita parametros
    Produto(const std::string& nome, double preco) : nome(nome), preco(preco) {
        contador++;
        std::cout << "Produto criado: " << nome << std::endl;
        std::cout << "Preco: " << std::fixed << std::setprecision(2) << preco << std::endl;
        std::cout << "Total de produtos: " << contador << std::endl;
    }

    // Construtor de cópia
    Produto(const Produto& outro) : nome("(copia)" + outro.nome), preco(outro.preco) {
        contador++;
        std::cout << "Produto criado copia: " << nome << std::endl;
        std::cout << "Preco: " << std::fixed << std::setprecision(2) << preco << std::endl;
        std::cout << "Total de produtos: " << contador << std::endl;
    }

    // Destrutor
    ~Produto() {
        std::cout << "Produto destruido: " << nome << std::endl;
        contador--;
        std::cout << "Total de produtos: " << contador << std::endl;
    }

    // Método para obter o nome do produto
    std::string getNome() const {
        return nome;
    }

    // Método para obter o preço do produto
    double getPreco() const {
        return preco;
    }

    // Método estático para obter o contador de produtos
    static int getContador() {
        return contador;
    }
};

// Inicialização do contador estático
int Produto::contador = 0;

int main() {
    // Criação de objetos utilizando diferentes construtores
    Produto p1("Mouse gamer com fio", 29.80);

    Produto p2("Teclado com fio", 30.50);

    // Criação de objeto utilizando o construtor de cópia
    Produto p3 = p1;

    return 0;
}