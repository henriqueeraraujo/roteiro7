#ifndef TRABALHADORPORHORA_H
#define TRABALHADORPORHORA_H
#include <iostream>
#include "Trabalhador.h"

using namespace std;

class TrabalhadorPorHora : public Trabalhador
{
    public:
        TrabalhadorPorHora();
        TrabalhadorPorHora(string nome, float salario);
        void calcularPagamento(float horas);
        virtual ~TrabalhadorPorHora();

};

#endif // TRABALHADORPORHORA_H
