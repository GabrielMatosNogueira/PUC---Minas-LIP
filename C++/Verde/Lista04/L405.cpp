#include <iostream>
#include <string>

class Animal {
protected:
    std::string nome;

public:
    Animal() : nome("") {}
    Animal(std::string nome) : nome(nome) {}

    std::string getNome() const {
        return nome;
    }

    void setNome(const std::string& nome) {
        this->nome = nome;
    }

    virtual void imprime() const {
        std::cout << "Nome: " << nome << std::endl;
    }
};

class Cachorro : public Animal {
private:
    std::string raca;

public:
    Cachorro() : Animal("Duque"), raca("Indefinido") {}
    Cachorro(std::string nome, std::string raca) : Animal(nome), raca(raca) {}

    std::string getRaca() const {
        return raca;
    }

    void setRaca(const std::string& raca) {
        this->raca = raca;
    }

    void imprime() const override {
        Animal::imprime();
        std::cout << "Raca: " << raca << std::endl;
    }
};

int main() {
    Animal animal;
    Cachorro cachorro;

    std::string nomeAnimal, nomeCachorro, racaCachorro;

    std::getline(std::cin, nomeAnimal);
    animal.setNome(nomeAnimal);

    std::getline(std::cin, nomeCachorro);
    cachorro.setNome(nomeCachorro);

    std::cout << "Dados do Animal:" << std::endl;
    animal.imprime();

    std::cout << "Dados do Animal:" << std::endl;
    cachorro.imprime();

    std::getline(std::cin, racaCachorro);
    cachorro.setRaca(racaCachorro);

    std::cout << "Dados do Animal:" << std::endl;
    cachorro.imprime();

    return 0;
}