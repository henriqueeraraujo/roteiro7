#ifndef QUADRADO_H
#define QUADRADO_H
#include "FiguraGeometrica.h"


class Quadrado : public FiguraGeometrica
{
    protected:
        float l1, l2;

    public:
        Quadrado();
        void setQuadrado(float l1, float l2);
        virtual ~Quadrado();
        float CalcularArea();


};

#endif // QUADRADO_H
