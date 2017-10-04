#include "Consultor.h"

Consultor::Consultor():Funcionario()
{

}
float Consultor::percentual = 0.1;
float Consultor::getSalario(){
    return salario * 1.1;
}
float Consultor::getSalario(float percentual){
    return salario * (1 + percentual);
}
Consultor::~Consultor()
{
    //dtor
}
