#include <iostream>
#include <vector>
#include <memory>

class Animal {
public:
    virtual ~Animal() = default;
    virtual void fazerSom() const = 0;
    void imprimirSom() const {
        fazerSom();
    }
};

class Cachorro : public Animal {
public:
    void fazerSom() const override {
        std::cout << "O cachorro faz: Au Au!" << std::endl;
    }
};

class Gato : public Animal {
public:
    void fazerSom() const override {
        std::cout << "O gato faz: Miau!" << std::endl;
    }
};

void emitirSons(const std::vector<std::unique_ptr<Animal>>& animais) {
    std::cout << "Emitindo sons dos animais:" << std::endl;
    for (const auto& animal : animais) {
        animal->imprimirSom();
    }
}

int main() {
    std::vector<std::unique_ptr<Animal>> animais;
    int opcao;

    while (true) {
        std::cin >> opcao;

        if (opcao == 1) {
            animais.push_back(std::make_unique<Cachorro>());
        } else if (opcao == 2) {
            animais.push_back(std::make_unique<Gato>());
        } else if (opcao == 3) {
            break;
        } else {
            std::cout << "Opção invalida. Tente novamente." << std::endl;
        }
    }

    emitirSons(animais);

    return 0;
}