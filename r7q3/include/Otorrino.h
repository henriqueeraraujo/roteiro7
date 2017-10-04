#ifndef OTORRINO_H
#define OTORRINO_H
#include "Medico.h"

class Otorrino : public Medico
{
    protected:
        string especialidade;

    public:
        Otorrino();
        void consultaOtorrino();
        virtual ~Otorrino();


};

#endif // OTORRINO_H
