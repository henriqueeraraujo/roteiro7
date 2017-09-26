#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include <string>
#include <iostream>



class FiguraGeometrica
{
    protected:

    std::string nome;


    public:
        FiguraGeometrica();
        FiguraGeometrica(std::string nome);
        virtual ~FiguraGeometrica();
        virtual void calcularArea()=0;
};

#endif // FIGURAGEOMETRICA_H
