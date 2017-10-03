#include "Quadrado.h"

Quadrado::Quadrado() : FiguraGeometrica("QUADRADO")
{
    l1=0;
    l2=0;
}
void Quadrado::setQuadrado(float l1, float l2)
{
    this->l1=l1;
    this->l2=l2;
}
float Quadrado::CalcularArea(){
    float area;

    area = l1*l2;

    return area;

}
Quadrado::~Quadrado()
{
    //dtor
}
