#ifndef CIRURGIAO_H
#define CIRURGIAO_H
#include "Medico.h"

class Cirurgiao : public Medico
{
    protected:
        string especialidade;

    public:
        Cirurgiao();
        void fazerCirurgia();
        virtual ~Cirurgiao();
};

#endif // CIRURGIAO_H
