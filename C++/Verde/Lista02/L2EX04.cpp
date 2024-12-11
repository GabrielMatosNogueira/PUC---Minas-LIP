#include <iostream>
#include <iomanip>
#include <string>

class Produto {
public:
    std::string nome;
    double preco;
    static int contador;

    // Construtor que inicializa os atributos com valores lidos
    Produto() {
        std::getline(std::cin, nome);
        std::cin >> preco;
        std::cin.ignore(); // Limpar o buffer de entrada
        contador++;
        std::cout << "Produto criado: " << nome << std::endl;
    }

    // Construtor que aceita parametros para iniciar os atributos
    Produto(std::string n, double p) : nome(n), preco(p) {
        contador++;
        std::cout << "Produto criado: " << nome << std::endl;
    }

    // Destrutor
    ~Produto() {
        std::cout << "Produto destruido: " << nome << std::endl;
        contador--;
        std::cout << "Total de produtos: " << contador << std::endl;
    }
};

int Produto::contador = 0;

int main() {
    {
        Produto p1;
        std::cout << std::fixed << std::setprecision(2);
        std::cout << "Preco: " << p1.preco << std::endl;
        std::cout << "Total de produtos: " << Produto::contador << std::endl;

        Produto p2("Teclado com fio", 30.50);
        std::cout << "Preco: " << p2.preco << std::endl;
        std::cout << "Total de produtos: " << Produto::contador << std::endl;
    } // p1 e p2 são destruídos aqui

    return 0;
}