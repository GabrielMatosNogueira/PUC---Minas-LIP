#include <iostream>
#include <string>

class Veiculo
{
public:
    std::string marca;
    int anoFabricacao;

    void lerDados()
    {
        std::cin >> marca;
        std::cin >> anoFabricacao;
    }

    void imprimirDados()
    {
        std::cout << "Marca: " << marca << std::endl;
        std::cout << "Ano de Fabricacao: " << anoFabricacao << std::endl;
    }
};

class Carro : public Veiculo
{
public:
    int numeroPortas;

    void lerDados()
    {
        Veiculo::lerDados();
        std::cin >> numeroPortas;
    }

    void imprimirDados()
    {
        Veiculo::imprimirDados();
        std::cout << "Numero de Portas: " << numeroPortas << std::endl;
    }
};

int main()
{
    Veiculo veiculo;
    Carro carro;

    std::cout << "Dados do Veiculo:" << std::endl;
    veiculo.lerDados();
    veiculo.imprimirDados();

    std::cout << "Dados do Carro:" << std::endl;
    carro.lerDados();
    carro.imprimirDados();

    return 0;
}