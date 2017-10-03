#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include <string>


class FiguraGeometrica
{
    protected:
        std::string nome;

    public:
        FiguraGeometrica(std::string nome);
        virtual ~FiguraGeometrica();
        virtual float CalcularArea()=0;
};

#endif // FIGURAGEOMETRICA_H
