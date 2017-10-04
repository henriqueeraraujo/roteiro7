#ifndef MINHAEMPRESA_H
#define MINHAEMPRESA_H
#include "Consultor.h"

class MinhaEmpresa
{
    public:
        Funcionario f1;
        Consultor c1;

        MinhaEmpresa();
        void menu();
        virtual ~MinhaEmpresa();

};

#endif // MINHAEMPRESA_H
