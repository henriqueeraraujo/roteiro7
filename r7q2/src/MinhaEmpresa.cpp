#include "MinhaEmpresa.h"

MinhaEmpresa::MinhaEmpresa(){
    f1=Funcionario();
    c1=Consultor();
}
void MinhaEmpresa::menu(){
    cout<<"\n**********\tMENU\t**********\n";
    cout<<"0 - Sair\n";
    cout<<"1 - Mostrar dados do Funcionario\n";
    cout<<"2 - Alterar nome do Funcionario\n";
    cout<<"3 - Alterar matricula do funcionario\n";
    cout<<"4 - alterar salario do funcionario\n";
    cout<<"5 - Mostrar dados do Consultor\n";
    cout<<"6 - Alterar nome do Consultor\n";
    cout<<"7 - Alterar matricula do Consultor\n";
    cout<<"8 - alterar salario do Consultor\n";
    cout<<"9 - alterar percentual de aumento de salario do consultor\n";
    cout<<"--> ";
}

MinhaEmpresa::~MinhaEmpresa()
{
    //dtor
}
