#include <iostream>
#include <string>

using namespace std;

class Livro {
private:
    string titulo;
    string autor;

public:
    Livro(const string& t, const string& a) : titulo(t), autor(a) {}

    void exibirInformacoes() const {
        cout << "\nInformacoes do Livro:\n";
        cout << "-----------------------------------\n";
        cout << "Titulo: " << titulo << endl;
        cout << "Autor: " << autor << endl;
        cout << "-----------------------------------\n";
    }
};

int main() {
    string titulo, autor;

    cout << "Ola! Cadastre o livro preenchendo as seguintes informacoes:\n";
    cout << "Digite o titulo do livro: ";
    getline(cin, titulo);
    cout << "Digite o autor(a) do livro: ";
    getline(cin, autor);

    Livro livro(titulo, autor);
    livro.exibirInformacoes();

    return 0;
}