#ifndef TESTAFIGURASGEOMETRICAS_H
#define TESTAFIGURASGEOMETRICAS_H
#include "Triangulo.h"
#include "Circulo.h"
#include "Quadrado.h"

class TestaFigurasGeometricas
{
    protected:

        Triangulo t1;
        Circulo c1;
        Quadrado q1;


    public:

        TestaFigurasGeometricas();
        void Menu();
        void setTriangulo();
        void setCirculo();
        void setQuadrado();
        float CalculaArea();
        virtual ~TestaFigurasGeometricas();

};

#endif // TESTAFIGURASGEOMETRICAS_H
