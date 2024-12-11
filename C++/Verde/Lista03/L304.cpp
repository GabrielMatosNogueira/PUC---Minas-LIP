#include <iostream>
#include <string>

class Carro {
private:
    std::string marca;
    int ano;

public:
    // Construtor
    Carro(std::string m, int a) : marca(m), ano(a) {}

    // Métodos get e set para marca
    std::string getMarca() {
        return marca;
    }

    void setMarca(std::string m) {
        marca = m;
    }

    // Métodos get e set para ano
    int getAno() {
        return ano;
    }

    void setAno(int a) {
        ano = a;
    }
};

int main() {
    std::string marca;
    int ano;

    // Solicita ao usuário os valores iniciais
    std::cin >> marca;
    std::cin >> ano;

    // Cria o objeto Carro
    Carro carro(marca, ano);

    // Mostra os detalhes iniciais do carro
    std::cout << "Detalhes iniciais do carro:" << std::endl;
    std::cout << "Marca: " << carro.getMarca() << std::endl;
    std::cout << "Ano: " << carro.getAno() << std::endl;

    // Modifica a marca do carro
    std::cin >> marca;
    carro.setMarca(marca);

    // Atualiza o ano para o próximo ano
    carro.setAno(carro.getAno() + 1);

    // Mostra os detalhes do carro após a modificação
    std::cout << "Detalhes modificados do carro:" << std::endl;
    std::cout << "Marca: " << carro.getMarca() << std::endl;
    std::cout << "Ano: " << carro.getAno() << std::endl;

    return 0;
}