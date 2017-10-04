#include "Cirurgiao.h"

Cirurgiao::Cirurgiao() : Medico()
{
    especialidade = "Cirurgiao";
}
void Cirurgiao::fazerCirurgia(){
    cout<<"Fazendo cirurgia...\n";
}

Cirurgiao::~Cirurgiao()
{
    //dtor
}
