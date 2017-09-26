#ifndef TRIANGULO_H
#define TRIANGULO_H
#include "FiguraGeometrica.h"

class Triangulo : public FiguraGeometrica
{

   protected:

        float base, altura;


    public:
        Triangulo();
        Triangulo(std::string nome, float base, float altura);
        virtual ~Triangulo();
        void calcularArea();

    protected:

    private:
};

#endif // TRIANGULO_H
