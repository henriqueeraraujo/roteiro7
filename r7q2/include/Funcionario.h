#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>
#include <iostream>
using namespace std;

class Funcionario
{
    protected:
        string nome, matricula;
        float salario;


    public:
        Funcionario();
        void setNome(string nome);
        void setMatricula(string matricula);
        void setSalario(float salario);
        string getNome();
        string getMatricula();
        float getSalario();
        virtual ~Funcionario();


};

#endif // FUNCIONARIO_H
