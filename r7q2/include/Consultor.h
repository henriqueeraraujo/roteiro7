#ifndef CONSULTOR_H
#define CONSULTOR_H
#include "Funcionario.h"


class Consultor : public Funcionario
{
    static float percentual;

    public:
        Consultor();
        float getSalario();
        float getSalario(float percentual);
        virtual ~Consultor();
};

#endif // CONSULTOR_H
