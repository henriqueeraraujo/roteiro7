#include "Otorrino.h"

Otorrino::Otorrino(): Medico()
{
    especialidade="Otorrino";
}
void Otorrino::consultaOtorrino(){
    cout<<"Realizando consulta Otorrino\n";
}
Otorrino::~Otorrino()
{
    //dtor
}
