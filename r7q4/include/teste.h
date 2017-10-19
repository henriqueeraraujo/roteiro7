#ifndef TESTE_H
#define TESTE_H
#include "TrabalhadorPorHora.h"
#include "TrablhadorAssalariado.h"

class teste
{
    public:
        teste();
        void cadastrarTrabalhadorAssalariado();
        void cadastrarTrabalhadorPorHora();
        void CalcularPagamentoTrabalhadorAssalariado();
        void CalcularPagamentoTrabalhadorPorHora();
        void menu();
        virtual ~teste();
        TrabalhadorPorHora t1;
        TrablhadorAssalariado t2;



};

#endif // TESTE_H
