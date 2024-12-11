#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Produto {
protected:
    string nome;
    float preco;

public:
    Produto() : nome(""), preco(0.0) {}
    Produto(string n, float p) : nome(n), preco(p) {}

    string getNome() const { return nome; }
    void setNome(string n) { nome = n; }

    float getPreco() const { return preco; }
    void setPreco(float p) { preco = p; }

    virtual void imprime() const {
        cout << "Dados do Produto:" << endl;
        cout << "Nome: " << nome << endl;
        cout << "Preco: " << fixed << setprecision(2) << preco << endl;
    }
};

class ProdutoEletronico : public Produto {
private:
    int garantia;

public:
    ProdutoEletronico() : Produto(), garantia(0) {}
    ProdutoEletronico(string n, float p, int g) : Produto(n, p), garantia(g) {}

    int getGarantia() const { return garantia; }
    void setGarantia(int g) { garantia = g; }

    void estenderGarantia(int meses) { garantia += meses; }

    void imprime() const override {
        Produto::imprime();
        cout << "Garantia: " << garantia << " meses" << endl;
    }
};

int main() {
    string nome;
    float preco;
    int garantia, meses;

    // Produto
    getline(cin, nome);
    cin >> preco;
    Produto produto(nome, preco);

    // ProdutoEletronico
    cin.ignore();
    getline(cin, nome);
    cin >> preco;
    cin >> garantia;
    ProdutoEletronico produtoEletronico(nome, preco, garantia);

    // Imprime dados dos produtos
    produto.imprime();
    produtoEletronico.imprime();

    // Estender garantia
    cin >> meses;
    produtoEletronico.estenderGarantia(meses);

    // Imprime dados do produto eletronico atualizado
    produtoEletronico.imprime();

    return 0;
}