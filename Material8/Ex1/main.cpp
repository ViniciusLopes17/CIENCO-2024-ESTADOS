#include <iostream>
#include <list>
#include <iterator>
#include <locale>

using namespace std;

void imprimirLista(const list<int>& lista);

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    list<int> lista;
    int num1, num2, num3, num4, num5;

    cout << "Entre com 5 valores inteiros:\n\n";
    cout << "Elemento 1: ";
    cin >> num1;
    lista.push_back(num1);
    cout << "Elemento 2: ";
    cin >> num2;
    lista.push_back(num2);
    cout << "Elemento 3: ";
    cin >> num3;
    lista.push_back(num3);
    cout << "Elemento 4: ";
    cin >> num4;
    lista.push_back(num4);
    cout << "Elemento 5: ";
    cin >> num5;
    lista.push_back(num5);
    cout << endl;

    imprimirLista(lista);
    lista.reverse();
    imprimirLista(lista);
}

void imprimirLista(const list<int>& lista)
{
    list<int>::const_iterator elemento;
    if (lista.empty())
    {
        cout << "Lista vazia\n";
    }
    else
    {
        elemento = lista.begin();
        do {
            cout << *elemento << " ";
            elemento++;
        } while (elemento != lista.end());
        cout << endl;
    }
}
