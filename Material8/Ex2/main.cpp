#include <iostream>
#include <locale>
#include <list>
#include <iterator>
#include <string>

using namespace std;

void imprimeLista(list<string> lista);

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n;
    string nome;
    list<string> lista;
    cout << "Quantos funcionários serão cadastrados?: ";
    cin >> n;
    cin.ignore();
    cout << endl;
    for(int i = 1; i <= n; i++)
    {
        cout << "Digite o nome do " << i << "º funcionário: ";
        getline(cin, nome);
        lista.push_back(nome);
    }

    cout << endl;
    imprimeLista(lista);
    cout << endl;
    list<string> aux = lista;
    aux.reverse();
    imprimeLista(aux);
    cout << endl;
    imprimeLista(lista);
    cout << endl;

    cout << "\nEstão cadastrados " << lista.size() << " funcionários.";
}

void imprimeLista(list<string> lista)
{
	list<string>::const_iterator valores;
	if (lista.empty())
	{
		cout << "Lista vazia.";
	}
	else {
		valores = lista.begin();
        do{
            cout << *valores << " ";
			valores++;
		}
		while (valores != lista.end());
	}
}
