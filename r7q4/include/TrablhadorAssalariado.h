#ifndef TRABLHADORASSALARIADO_H
#define TRABALHADORPORHORA_H
#include <iostream>
#include "Trabalhador.h"

using namespace std;


class TrablhadorAssalariado : public Trabalhador
{
    public:
        TrablhadorAssalariado();
        TrablhadorAssalariado(string nome, float salario);
        void calcularPagamento(float horas);
        virtual ~TrablhadorAssalariado();

    protected:

    private:
};

#endif // TRABLHADORASSALARIADO_H
