#ifndef GINECOLOGISTA_H
#define GINECOLOGISTA_H
#include "Medico.h"

class Ginecologista : public Medico
{
    protected:
        string especialidade;

    public:
        Ginecologista();
        void consultaGinecologista();
        virtual ~Ginecologista();

};

#endif // GINECOLOGISTA_H
