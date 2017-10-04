#include <iostream>
#include "Hospital.h"

using namespace std;

int main()
{
    int op;
    float altura, peso;
    string nome;
    Hospital hospital= Hospital();

    while(1){

        hospital .menu();
        cin>>op;

        if(op == 0){
            break;
        }

        switch(op){

            case 1:
                hospital.cirurgiao.fazerCirurgia();
                break;
            case 2:
                hospital.oftalmologista.consultaOftalmologista();
                break;
            case 3:
                hospital.otorrino.consultaOtorrino();
                break;
            case 4:
                hospital.ginecologista.consultaGinecologista();
                break;
            case 5:
                cout<<"Digite o nome do Cirurgiao: ";
                cin>>nome;
                hospital.cirurgiao.setNome(nome);
                cout<<"Digite a sua altura: ";
                cin>>altura;
                hospital.cirurgiao.setAltura(altura);
                cout<<"Digite o seu peso: ";
                cin>>peso;
                hospital.cirurgiao.setPeso(peso);
                break;

            case 6:
                cout<<"Digite o nome do Oftalmologista: ";
                cin>>nome;
                hospital.oftalmologista.setNome(nome);
                cout<<"Digite a sua altura: ";
                cin>>altura;
                hospital.oftalmologista.setAltura(altura);
                cout<<"Digite o seu peso: ";
                cin>>peso;
                hospital.oftalmologista.setPeso(peso);
                break;

            case 7:
                cout<<"Digite o nome do Otorrino: ";
                cin>>nome;
                hospital.otorrino.setNome(nome);
                cout<<"Digite a sua altura: ";
                cin>>altura;
                hospital.otorrino.setAltura(altura);
                cout<<"Digite o seu peso: ";
                cin>>peso;
                hospital.otorrino.setPeso(peso);
                break;

            case 8:
                cout<<"Digite o nome do Cirurgiao: ";
                cin>>nome;
                hospital.cirurgiao.setNome(nome);
                cout<<"Digite a sua altura: ";
                cin>>altura;
                hospital.cirurgiao.setAltura(altura);
                cout<<"Digite o seu peso: ";
                cin>>peso;
                hospital.cirurgiao.setPeso(peso);
                break;

            default:
                cout<<"Entrada invalida. tente novamente..."<<endl;
        }
    }
    cout << "fim..." << endl;
    return 0;
}
