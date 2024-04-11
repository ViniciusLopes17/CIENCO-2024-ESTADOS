#include <iostream>

using namespace std;

struct Pessoa{
    string nome;
    int idade;
};

int main()
{
    setlocale(LC_ALL, "Portuguese");
    Pessoa p;

    cout << "Qual o seu Nome? ";
    getline(cin, p.nome);
    cout << "Quantos anos você tem? ";
    cin >> p.idade;

    cout << "Nome: " << p.nome << endl;
    cout << "Idade: " << p.idade << endl;
    return 0;
}
