#include "teste.h"


teste::teste()
{
    t1 = TrabalhadorPorHora();
    t2 = TrablhadorAssalariado();
}
void teste::menu(){

    cout<<"\n************************ MENU ************************\n\n";
    cout<<"#0 - Sair\n";
    cout<<"#1 - Cadastrar trabalhador assalariado\n";
    cout<<"#2 - Cadastrar trabalhador por hora\n";
    cout<<"#3 - Calcular pagamento do trabalhador assalariado\n";
    cout<<"#4 - Calcular pagamento do trabalhador por hora\n\n";
    cout<<"******************************************************\n\n";


}
void teste::cadastrarTrabalhadorAssalariado(){
    string nome;
    float salario;

    cout<<"Digite o nome do funcinario: ";
    cin>>nome;

    cout<<"Digite o salario do funcionario: ";
    cin>>salario;

    t2=TrablhadorAssalariado(nome, salario);
}
void teste::cadastrarTrabalhadorPorHora(){
    string nome;
    float salario;

    cout<<"Digite o nome do funcinario: ";
    cin>>nome;

    cout<<"Digite o salario do funcionario: ";
    cin>>salario;

    t1=TrabalhadorPorHora(nome, salario);

}
void teste::CalcularPagamentoTrabalhadorAssalariado(){
    float horas;

    cout<<"Digite o numerode horas trabalhadas: ";
    cin>>horas;
    t2.calcularPagamento(horas);

}
void teste::CalcularPagamentoTrabalhadorPorHora(){
    float horas;

    cout<<"Digite o numerode horas trabalhadas: ";
    cin>>horas;
    t1.calcularPagamento(horas);
}
teste::~teste()
{
    //dtor
}
