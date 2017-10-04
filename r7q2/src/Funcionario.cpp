#include "Funcionario.h"

Funcionario::Funcionario()
{
    nome= " ";
    matricula= " ";
    salario = 0;
}
void Funcionario::setNome(string nome){
    this->nome=nome;
}
void Funcionario::setMatricula(string matricula){
    this->matricula=matricula;
}
void Funcionario::setSalario(float salario){
    this->salario=salario;
}
string Funcionario::getNome(){
    return nome;
}
string Funcionario::getMatricula(){
    return matricula;
}
float Funcionario::getSalario(){
    return salario;
}
Funcionario::~Funcionario()
{
    //dtor
}
