#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Produto {
private:
    string nome;
    float preco;

public:
    // Construtor padrão
    Produto() {
        getline(cin, nome);
        cin >> preco;
        cin.ignore(); // Limpar o buffer do cin
        cout << "Produto criado: " << nome << endl;
        cout << "Preco: " << fixed << setprecision(2) << preco << endl;
    }

    // Construtor usando lista de inicializadores
    Produto(string n, float p) : nome(n), preco(p) {
        cout << "Produto criado: " << nome << endl;
        cout << "Preco: " << fixed << setprecision(2) << preco << endl;
    }

    // Destrutor
    ~Produto() {
        cout << "Produto destruido: " << nome << endl;
    }
};

int main() {
    // Criando objeto utilizando o construtor que lê os valores
    Produto produto1;

    // Criando objeto utilizando o construtor com parâmetros
    Produto produto2("Kit Teclado e Mouse", 299.90);

    return 0;
}
