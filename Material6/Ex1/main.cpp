#include <iostream>
#include <stack>
#include <locale>
#include <windows.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    stack <int> pilha;
    int opcao, elemento;

    do{
        cout << "\t\tEscolha uma op��o\n" << endl;
        cout << " -----------------------------------------------" << endl;
        cout << "|\t1. Inserir elemento\t\t\t|" << endl;
        cout << "|\t2. Remover elemento\t\t\t|" << endl;
        cout << "|\t3. Verificar elemento do topo\t\t|" << endl;
        cout << "|\t4. Verificar se a pilha est� vazia\t|" << endl;
        cout << "|\t5. Exibir tamanho da pilha\t\t|" << endl;
        cout << "|\t0. Sair\t\t\t\t\t|" << endl;
        cout << " -----------------------------------------------" << endl;
        cout << "Op��o: ";
        cin >> opcao;
        cout << endl;

        switch (opcao)
        {
        case 1:
            cout << "Digite qual elemento deseja inserir: ";
            cin >> elemento;
            pilha.push(elemento);

            cout << "Elemento " << elemento << " inserido" << endl;
            Sleep(800);
            system("cls");
            break;

        case 2:
            cout << "Elemento " << pilha.top() << " removido!" << endl;
            pilha.pop();
            Sleep(800);
            system("cls");
            break;

        case 3:
            cout << "O elemento do topo �: " << pilha.top() << endl;
            Sleep(1200);
            system("cls");
            break;

        case 4:
            cout << "A pilha est� vazia?" << (pilha.empty()? "Sim" : "N�o") << endl;
            Sleep(1200);
            system("cls");
            break;

        case 5:
            cout << "O tamanho da pilha �: " << pilha.size() << endl;
            Sleep(1200);
            system("cls");
            break;
        }
    }while (opcao != 0);
}
