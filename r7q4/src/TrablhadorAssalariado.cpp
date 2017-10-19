#include "TrablhadorAssalariado.h"

TrablhadorAssalariado::TrablhadorAssalariado():Trabalhador()
{
    //ctor
}
TrablhadorAssalariado::TrablhadorAssalariado(string nome, float salario):Trabalhador(nome,salario)
{



}
void TrablhadorAssalariado::calcularPagamento(float horas){

    salario = 40 * 16.1;

    cout<<"Salario: R$ "<<salario<<endl;

}

TrablhadorAssalariado::~TrablhadorAssalariado()
{
    //dtor
}
