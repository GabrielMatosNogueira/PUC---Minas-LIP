#include <iostream>


using namespace std;


class Circulo {
private:
    double raio;


public:
    void lerRaio() {
        cout << "Digite o raio do circulo: ";
        cin >> raio;
    }


    double perimetroCirculo(double pi) const {
        return 2 * pi * raio;
    }


    void mostrarInfodoCirculo() const {
        cout << "Raio do circulo: " << raio << endl;
        cout << "Perimetro do circulo: " << perimetroCirculo(3.141519) << endl;
    }
};


int main() {
    Circulo circulo;


    circulo.lerRaio();
    circulo.mostrarInfodoCirculo();


    return 0;
}