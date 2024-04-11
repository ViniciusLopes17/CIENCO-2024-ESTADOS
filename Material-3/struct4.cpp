#include <iostream>

using namespace std;

struct Livro{
    string titulo;
    string autor;
    int anoPublicacao;
    string disponivel;
};

int main()
{
    setlocale(LC_ALL, "Portuguese");
    Livro livro;

    cout << "Digite o Título do livro: ";
    getline(cin, livro.titulo);
    cout << "Digite o Nome de Autor: ";
    getline(cin, livro.autor);
    cout << "Digite o Ano de Publicação: ";
    cin >> livro.anoPublicacao;
    char resposta;
    cout << "O livro está disponível? (s/n)";
    cin >> resposta;
    if (resposta == 's' || resposta == 'S'){
        livro.disponivel = "Sim";
    }else{
        livro.disponivel = "Nao";
    }

    cout << "Livro: " << livro.titulo << "\nAutor: " << livro.autor
    << "\nAno de Publicação: " << livro.anoPublicacao;
    cout << "\nDisponibilidade: " << livro.disponivel << endl;
    return 0;
}
