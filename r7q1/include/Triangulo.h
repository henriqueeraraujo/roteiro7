#ifndef TRIANGULO_H
#define TRIANGULO_H
#include "FiguraGeometrica.h"


class Triangulo : public FiguraGeometrica
{
    protected:
        float base, altura;

    public:
        Triangulo();
        void  setTriangulo(float base, float altura);
        virtual ~Triangulo();
        float CalcularArea();

};

#endif // TRIANGULO_H
