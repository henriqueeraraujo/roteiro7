#include <iostream>
#include "teste.h"

using namespace std;

int main()
{
    int op;
    teste teste1 = teste() ;
    cout << "Ola, seja bem vindo!\n" << endl;

    while(1){

        teste1.menu();
        cin>>op;

        if(op==0){
            break;
        }

        switch(op){
            case 1:
                teste1.cadastrarTrabalhadorAssalariado();
                break;
            case 2:
                teste1.cadastrarTrabalhadorPorHora();
                break;
            case 3:
                teste1.CalcularPagamentoTrabalhadorAssalariado();
                break;
            case 4:
                teste1.CalcularPagamentoTrabalhadorPorHora();
                break;
            default:
                cout<<"opcao invalida... tente novamente\n";
        }

    }

    cout<<"Ate a proxima...\n";

    return 0;
}
