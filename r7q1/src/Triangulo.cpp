#include "Triangulo.h"
#include "FiguraGeometrica.h"

Triangulo::Triangulo() : FiguraGeometrica()
{

    base=0;
    altura=0;
}
Triangulo::Triangulo(std::string nome, float base, float altura3): FiguraGeometrica(nome="Triangulo"){
    this->base=base;
    this->altura=altura;

}
Triangulo::~Triangulo()
{
    //dtor
}
void Triangulo::calcularArea(){

    float area;

    area=(base*altura)/2;


    std::cout<<"A area do triangulo eh: "<<area<<std::endl;


}
