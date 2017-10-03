#include "Triangulo.h"

Triangulo::Triangulo() : FiguraGeometrica("TRIANGULO")
{
    base=0;
    altura=0;
}
void Triangulo::setTriangulo(float base, float altura)
{
    this->base=base;
    this->altura=altura;
}
float Triangulo::CalcularArea(){
    float area;

    area = (base*altura)/2;

    return area;

}
Triangulo::~Triangulo()
{
    //dtor
}
