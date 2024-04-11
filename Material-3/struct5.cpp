#include <iostream>

using namespace std;

struct Veiculo{
    string marca;
    string modelo;
    int ano;
    string tipoCombustivel;
};

int main()
{
    setlocale(LC_ALL, "Portuguese");
    Veiculo veiculo;
    cout << "Digite a marca do ve�culo: ";
    getline(cin, veiculo.marca);
    cout << "Digite o Modelo do Ve�culo: ";
    getline(cin, veiculo.modelo);
    cout << "Digite o Ano do Ve�culo: ";
    cin >> veiculo.ano;

    cout << "O Ve�culo � a Gasolina (G), Diesel (D) ou El�trico (E)";
    char tipo;
    cin >> tipo;

    switch(tipo){
    case 'G':
    case 'g':
        veiculo.tipoCombustivel = "Gasolina";
        break;
    case 'D':
    case 'd':
        veiculo.tipoCombustivel = "Diesel";
        break;
    case 'E':
    case 'e':
        veiculo.tipoCombustivel = "El�trico";
        break;
    default:
        veiculo.tipoCombustivel = "Indefinido";
    }

    cout << "Veiculo: " << veiculo.marca << " " << veiculo.modelo
    << "\nAno: " << veiculo.ano;
    cout << "\nTipo de Combust�vel: " << veiculo.tipoCombustivel << endl;
    return 0;
}
