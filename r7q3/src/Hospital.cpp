#include "Hospital.h"

Hospital::Hospital()
{
    cirurgiao = Cirurgiao();
    oftalmologista = Oftalmologista();
    otorrino = Otorrino();
    ginecologista = Ginecologista();

}
void Hospital::menu(){
    cout<<"\n**********\tMENU\t**********\n";
    cout<<"0 - Sair\n";
    cout<<"1 - Fazer cirurgia\n";
    cout<<"2 - consulta com o Oftalmologista\n";
    cout<<"3 - consulta com o Otorrino\n";
    cout<<"4 - consulta com o Ginecologista\n";
    cout<<"5 - Cadastrar Cirurgiao\n";
    cout<<"6 - Cadastrar Oftalmologista\n";
    cout<<"7 - Cadastrar Otorrino\n";
    cout<<"8 - Cadastrar Ginecologista\n";
    cout<<"--> ";
}

Hospital::~Hospital()
{
    //dtor
}
