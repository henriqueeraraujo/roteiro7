#include "Medico.h"

Medico::Medico()
{
    nome = " ";
    altura=0;
    peso=0;
}
void Medico::setNome(string nome){
    this->nome=nome;
}
void Medico::setPeso(float altura){
    this->altura=altura;
}
void Medico::setAltura(float peso){
    this->peso=peso;
}
string Medico::getNome(){
    return nome;
}
float Medico::getAltura(){
    return altura;
}
float Medico::getPeso(){
    return peso;
}
Medico::~Medico()
{
    //dtor
}
