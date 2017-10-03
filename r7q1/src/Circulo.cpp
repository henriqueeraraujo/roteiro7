#include "Circulo.h"

float Circulo::pi = 3.14159265359;

Circulo::Circulo() : FiguraGeometrica("CIRCULO")
{
    raio=0;

}
void Circulo::setCirculo(float raio)
{
    this->raio=raio;
}
float Circulo::CalcularArea(){
    float area;

    area = pi*(raio*raio);

    return area;

}
Circulo::~Circulo()
{
    //dtor
}
