#ifndef QUADRADO_H
#define QUADRADO_H
#include "FiguraGeometrica.h"

class Quadrado : public FiguraGeometrica
{
    protected:

    float l1, l2;



    public:
        Quadrado();
        Quadrado(std::string nome , float l1, float l2);
        virtual ~Quadrado();
        void calcularArea();

    protected:
};

#endif // QUADRADO_H
