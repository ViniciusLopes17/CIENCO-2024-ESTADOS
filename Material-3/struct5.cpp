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
    cout << "Digite a marca do veículo: ";
    getline(cin, veiculo.marca);
    cout << "Digite o Modelo do Veículo: ";
    getline(cin, veiculo.modelo);
    cout << "Digite o Ano do Veículo: ";
    cin >> veiculo.ano;

    cout << "O Veículo é a Gasolina (G), Diesel (D) ou Elétrico (E)";
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
        veiculo.tipoCombustivel = "Elétrico";
        break;
    default:
        veiculo.tipoCombustivel = "Indefinido";
    }

    cout << "Veiculo: " << veiculo.marca << " " << veiculo.modelo
    << "\nAno: " << veiculo.ano;
    cout << "\nTipo de Combustível: " << veiculo.tipoCombustivel << endl;
    return 0;
}
