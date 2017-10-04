#include "Oftalmologista.h"

Oftalmologista::Oftalmologista() : Medico()
{
    especialidade="Oftalmologista";
}
void Oftalmologista::consultaOftalmologista(){
    cout<<"Realizando consulta Oftalmologista\n";
}
Oftalmologista::~Oftalmologista()
{
    //dtor
}
