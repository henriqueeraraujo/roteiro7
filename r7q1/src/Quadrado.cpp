#include "Quadrado.h"

Quadrado::Quadrado() : FiguraGeometrica()
{
    l1=0;
    l2=0;
}
Quadrado::Quadrado(std::string nome , float l1, float l2) : FiguraGeometrica(nome="Quadrado")
{
    this->l1=l1;
    this->l2=l2;
}
Quadrado::~Quadrado()
{
    //dtor
}
void Quadrado::calcularArea(){
}
