#include <iostream>
#include <string>

class Carro
{
private:
    std::string marca;
    int ano;

public:
    Carro(std::string m, int a) : marca(m), ano(a) {}

    std::string getMarca()
    {
        return marca;
    }

    void setMarca(std::string m)
    {
        marca = m;
    }

    int getAno()
    {
        return ano;
    }

    void setAno(int a)
    {
        ano = a;
    }
};

int main()
{
    std::string marca;
    int ano;

    std::cin >> marca;
    std::cin >> ano;

    Carro carro(marca, ano);

    std::cout << "Detalhes iniciais do carro:" << std::endl;
    std::cout << "Marca: " << carro.getMarca() << std::endl;
    std::cout << "Ano: " << carro.getAno() << std::endl;

    std::cin >> marca;
    carro.setMarca(marca);

    carro.setAno(carro.getAno() + 1);

    std::cout << "Detalhes modificados do carro:" << std::endl;
    std::cout << "Marca: " << carro.getMarca() << std::endl;
    std::cout << "Ano: " << carro.getAno() << std::endl;

    return 0;
}