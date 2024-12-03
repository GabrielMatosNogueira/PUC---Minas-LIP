#include <iostream>
#include <string>


using namespace std;


class Livro {
private:
    string titulo;
    string autor;


public:
    Livro(const string& t, const string& a) : titulo(t), autor(a) {}


    void exibirLivro() const {
        cout << "Titulo: " << titulo << endl;
        cout << "Autor: " << autor << endl;
    }
};


int main() {
    string titulo, autor;


    cout << "Digite o titulo do livro: ";
    getline(cin, titulo);
    cout << "Digite o autor do livro: ";
    getline(cin, autor);


    Livro livro(titulo, autor);


    livro.exibirLivro();
    return 0;
}