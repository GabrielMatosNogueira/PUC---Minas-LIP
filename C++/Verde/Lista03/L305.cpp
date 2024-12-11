#include <iostream>
#include <string>

class Livro {
private:
    std::string titulo;
    int numeroPaginas;

public:
    // Construtor
    Livro(std::string t, int n) : titulo(t), numeroPaginas(n) {}

    // Métodos get e set para titulo
    std::string getTitulo() {
        return titulo;
    }

    void setTitulo(std::string t) {
        titulo = t;
    }

    // Métodos get e set para numeroPaginas
    int getNumeroPaginas() {
        return numeroPaginas;
    }

    void setNumeroPaginas(int n) {
        numeroPaginas = n;
    }

    // Método para exibir detalhes do livro
    void exibirDetalhes() {
        std::cout << "Titulo: " << titulo << std::endl;
        std::cout << "Numero de Paginas: " << numeroPaginas << std::endl;
    }
};

int main() {
    std::string titulo;
    int numeroPaginas;

    // Solicita ao usuário os dados do livro
    std::getline(std::cin, titulo);
    std::cin >> numeroPaginas;
    std::cin.ignore(); // Limpa o buffer do cin

    // Cria um objeto Livro
    Livro livro(titulo, numeroPaginas);

    // Exibe os detalhes iniciais do livro
    std::cout << "Detalhes iniciais do livro:" << std::endl;
    livro.exibirDetalhes();

    // Define o subtítulo fixo
    std::string subtitulo = "romance realista publicado em 1899";
    livro.setTitulo(livro.getTitulo() + ": " + subtitulo);

    // Adiciona 50 páginas ao número de páginas
    livro.setNumeroPaginas(livro.getNumeroPaginas() + 50);

    // Exibe os detalhes modificados do livro
    std::cout << "Detalhes modificados do livro:" << std::endl;
    livro.exibirDetalhes();

    return 0;
}
