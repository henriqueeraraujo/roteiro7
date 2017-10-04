#include "Ginecologista.h"

Ginecologista::Ginecologista() : Medico()
{
    especialidade="Oftalmologista";
}
void Ginecologista::consultaGinecologista(){
    cout<<"Consulta com o Ginecologista\n";
}
Ginecologista::~Ginecologista()
{
    //dtor
}
