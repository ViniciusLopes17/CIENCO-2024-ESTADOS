#include <iostream>

using namespace std;

struct Data{
    int dia;
    int mes;
    int ano;
};

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    Data hoje;

    cout << "Que dia � hoje? ";
    cin >> hoje.dia;
    cout << "Qual m�s? ";
    cin >> hoje.mes;
    cout << "Qual ano? ";
    cin >> hoje.ano;

    cout << "Hoje � " << hoje.dia << "/" << hoje.mes << "/"
    << hoje.ano << endl;
    system("pause");
    return 0;
}

