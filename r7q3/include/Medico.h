#ifndef MEDICO_H
#define MEDICO_H
#include <iostream>
#include <stdio.h>

using namespace std;


class Medico
{
    protected:
        string nome;
        float altura, peso;

    public:
        Medico();
        void setNome(string nome);
        void setPeso(float altura);
        void setAltura(float peso);
        string getNome();
        float getPeso();
        float getAltura();
        virtual ~Medico();
};

#endif // MEDICO_H
