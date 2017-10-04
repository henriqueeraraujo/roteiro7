#include <iostream>
#include "MinhaEmpresa.h"

using namespace std;

int main()
{
    int op;
    float salario;
    string nome, matricula;
    MinhaEmpresa empresa = MinhaEmpresa();

    while(1){

        empresa .menu();
        cin>>op;

        if(op == 0){
            break;
        }

        switch(op){

            case 1:
                cout<<">>>>>Funcionario<<<<<\n";
                cout<<"Nome: "<<empresa.f1.getNome()<<endl;
                cout<<"Matricula: "<<empresa.f1.getMatricula()<<endl;
                cout<<"Salario: "<<empresa.f1.getSalario()<<endl;
                break;
            case 2:
                cout<<"Digite o novo nome do funcionario: ";
                cin>>nome;
                empresa.f1.setNome(nome);
                break;
            case 3:
                cout<<"Digite a nova matricula do funcionario: ";
                cin>>matricula;
                empresa.f1.setMatricula(matricula);
                break;
            case 4:
                cout<<"Digite o novo salario do funcionario: ";
                cin>>salario;
                empresa.f1.setSalario(salario);
                break;
            case 5:
                cout<<">>>>>Consultor<<<<<\n";
                cout<<"Nome: "<<empresa.c1.getNome()<<endl;
                cout<<"Matricula: "<<empresa.c1.getMatricula()<<endl;
                cout<<"Salario: "<<empresa.c1.getSalario()<<endl;
                break;
            case 6:
                cout<<"Digite o novo nome do consultor: ";
                cin>>nome;
                empresa.c1.setNome(nome);
                break;
            case 7:
                cout<<"Digite a nova matricula do Consultor: ";
                cin>>matricula;
                empresa.c1.setMatricula(matricula);
                break;
            case 8:
                cout<<"Digite o novo salario do consultor: ";
                cin>>salario;
                empresa.c1.setSalario(salario);
                break;
            case 9:
                cout<<"Digite o novo percentual de aumento de salario do consultor: ";
                cin>>salario;
                empresa.c1.getSalario(salario);
                break;
            default:
                cout<<"Entrada invalida. tente novamente..."<<endl;
        }
    }

    cout<<"Fim...\n";

    return 0;
}
