#include <iostream>
#include <string>
using namespace std;

class Retangulo {
private:
    double largura;
    double comprimento;

public:
    Retangulo(double l, double c) : largura(l), comprimento(c) {}

    double calcularArea() const {
        return largura * comprimento;
    }

    double calcularPerimetro() const {
        return 2 * (largura + comprimento);
    }

    void informacoesRetangulo() const {
        cout << "Largura: " << largura << endl;
        cout << "Comprimento: " << comprimento << endl;
        cout << "Area: " << calcularArea() << endl;
        cout << "Perimetro: " << calcularPerimetro() << endl;
    }
};

int main() {
    double largura, comprimento;
    
    cout << "Digite a largura do retangulo: ";
    cin >> largura;
    
    cout << "Digite o comprimento do retangulo: ";
    cin >> comprimento;

    Retangulo retangulo(largura, comprimento);
    retangulo.informacoesRetangulo();

    return 0;
}