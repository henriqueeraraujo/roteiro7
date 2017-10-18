#ifndef TRABALHADOR_H
#define TRABALHADOR_H
#include <string>

using namespace std;

class Trabalhador
{
    protected:
        string nome;
        float salario;

    public:
        Trabalhador();
        Trabalhador(string nome, float salario);
        virtual void calcularPagamento(float horas) = 0;
        virtual ~Trabalhador();

};

#endif // TRABALHADOR_H
