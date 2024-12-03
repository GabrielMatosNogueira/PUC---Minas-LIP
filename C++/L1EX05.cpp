#include <iostream>


using namespace std;


class Retangulo {
private:
    double largura;
    double altura;


public:
    void scanVariaveis() {
        cout << "Digite a largura: ";
        cin >> largura;
        cout << "Digite a altura: ";
        cin >> altura;
    }


    double cArea() const {
        return largura * altura;
    }


    void Info() const {
        cout << "Largura: " << largura << endl;
        cout << "Altura: " << altura << endl;
        cout << "Area: " << cArea() << endl;
    }
};


int main() {
    Retangulo retangulo;


    retangulo.scanVariaveis();
    retangulo.Info();


     return 0;
}