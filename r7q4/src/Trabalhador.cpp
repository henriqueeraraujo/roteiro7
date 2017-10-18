#include "Trabalhador.h"

Trabalhador::Trabalhador()
{
    nome=" ";
    salario=0;
}
Trabalhador::Trabalhador(string nome, float salario){
    this->nome=nome;
    this->salario=salario;

}
Trabalhador::~Trabalhador()
{
    //dtor
}
