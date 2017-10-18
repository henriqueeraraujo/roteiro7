#include "TrabalhadorPorHora.h"

TrabalhadorPorHora::TrabalhadorPorHora() : Trabalhador()
{

}
TrabalhadorPorHora::TrabalhadorPorHora(string nome, float salario) : Trabalhador(nome, salario)
{

}
void TrabalhadorPorHora::calcularPagamento(float horas){

    float horasExtras;

    if(horas>40){
        horasExtras= horas - 40;
        horasExtras*=1.5;
        salario = (40 + horasExtras)*16.1;
    }else{
        salario= horas*16.1;
    }

    cout<<"Salario: R$ "<<salario<<endl;

}
TrabalhadorPorHora::~TrabalhadorPorHora()
{
    //dtor
}
