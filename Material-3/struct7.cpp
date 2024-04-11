#include <iostream>

using namespace std;

struct Temperatura{
    int dia;
    float temperatura;
};

int main()
{
    setlocale(LC_ALL, "Portuguese");
    Temperatura tempDia;
    int contador = 0;

    cout << "Registro de Temperaturas Diárias. Digite -999 para encerrar." << endl;

    do{
        contador++;
        cout << "Dia " << contador << " - Digite a Temperatura: ";
        cin >> tempDia.temperatura;

        if(tempDia.temperatura != -999){
            tempDia.dia = contador;
            cout << "Dia: " << tempDia.dia << " - Temperatura: "
            << tempDia.temperatura << "ºC" << endl;
        }
    }while(tempDia.temperatura != -999);

    cout << "Registro de Temperaturas Encerrado." << endl;
    return 0;
}
