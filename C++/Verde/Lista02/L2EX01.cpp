#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip> // Inclua esta biblioteca

class Produto {
private:
    std::string nome;
    double preco; // Changed from float to double

public:
    // Construtor
    Produto() {
        if (std::cin.peek() == '\n') std::cin.ignore();
        std::getline(std::cin, nome);

        // Remove caracteres que nao sao numeros e que nao sao letras do alfabeto
        nome.erase(std::remove_if(nome.begin(), nome.end(), [](char c) {
            return !std::isalnum(c) && !std::isspace(c);
        }), nome.end());

        std::cin >> preco;

        std::cout << std::fixed << std::setprecision(2); // Define a precisão para duas casas decimais
        std::cout << "Produto criado: " << nome << " - Preco: " << preco << std::endl;
    }

    // Destrutor
    ~Produto() {
        std::cout << "Produto destruido: " << nome << std::endl;
    }
};

int main() {
    Produto p;
    return 0;
}
