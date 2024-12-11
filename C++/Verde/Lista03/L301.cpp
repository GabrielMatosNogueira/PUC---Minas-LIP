#include <iostream>
#include <string>

using namespace std;

class Pessoa {
private:
    string nome;
    int idade;

public:
    // Construtor
    Pessoa(string n, int i) : nome(n), idade(i) {}

    // Métodos get e set para nome
    string getNome() {
        return nome;
    }

    void setNome(string n) {
        nome = n;
    }

    // Métodos get e set para idade
    int getIdade() {
        return idade;
    }

    void setIdade(int i) {
        idade = i;
    }
};

int main() {
    string nome;
    int idade;

    // Solicita os dados iniciais ao usuário
    cin >> nome;
    cin >> idade;

    // Cria um objeto Pessoa com os dados fornecidos
    Pessoa pessoa(nome, idade);

    // Imprime os valores iniciais
    cout << "Dados iniciais da pessoa:" << endl;
    cout << "Nome: " << pessoa.getNome() << endl;
    cout << "Idade: " << pessoa.getIdade() << endl;

    // Solicita um sobrenome ao usuário
    string sobrenome;
    cin >> sobrenome;

    // Modifica os dados da pessoa
    pessoa.setNome(pessoa.getNome() + " " + sobrenome);
    pessoa.setIdade(pessoa.getIdade() + 1);

    // Imprime os valores modificados
    cout << "Dados modificados da pessoa:" << endl;
    cout << "Nome: " << pessoa.getNome() << endl;
    cout << "Idade: " << pessoa.getIdade() << endl;

    return 0;
}