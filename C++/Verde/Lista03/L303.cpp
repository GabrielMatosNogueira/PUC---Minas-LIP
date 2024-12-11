#include <iostream>
#include <string>
using namespace std;

class Funcionario
{
private:
    string nome;
    float salario;

public:
    Funcionario(string n = "", float s = 0.0f) : nome(n), salario(s) {}

    string getNome()
    {
        return nome;
    }

    void setNome(string n)
    {
        nome = n;
    }

    float getSalario()
    {
        return salario;
    }

    void setSalario(float s)
    {
        salario = s;
    }

    virtual void imprime()
    {
        cout << "Dados do Funcionario:" << endl;
        cout << "Nome: " << nome << endl;
        printf("Salario: %.2f\n", salario);
    }
};

class Gerente : public Funcionario
{
private:
    float bonus;

public:
    Gerente(string n = "", float s = 0.0f, float b = 0.0f) : Funcionario(n, s), bonus(b) {}

    float getBonus()
    {
        return bonus;
    }

    void setBonus(float b)
    {
        bonus = b;
    }

    void imprime() override
    {
        Funcionario::imprime();
        printf("Bonus Gerente: %.2f", bonus);
    }
};

int main()
{
    string nome;
    float salario, bonus;

    getline(cin, nome);

    cin >> salario;

    Funcionario funcionario(nome, salario);

    cin.ignore();
    getline(cin, nome);

    cin >> salario;
    ;
    cin >> bonus;

    Gerente gerente(nome, salario, bonus);

    funcionario.imprime();

    gerente.imprime();

    return 0;
}