#ifndef OFTALMOLOGISTA_H
#define OFTALMOLOGISTA_H
#include "Medico.h"

class Oftalmologista : public Medico
{
    protected:
        string especialidade;

    public:
        Oftalmologista();
        void consultaOftalmologista();
        virtual ~Oftalmologista();

};

#endif // OFTALMOLOGISTA_H
