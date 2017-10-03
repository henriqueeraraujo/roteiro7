#ifndef CIRCULO_H
#define CIRCULO_H
#include "FiguraGeometrica.h"

class Circulo : public FiguraGeometrica
{
    protected:
        static float pi;
        float raio;


    public:
        Circulo();
        void setCirculo(float raio);
        virtual ~Circulo();
        float CalcularArea();

};

#endif // CIRCULO_H
