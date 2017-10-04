#ifndef HOSPITAL_H
#define HOSPITAL_H
#include "Cirurgiao.h"
#include "Oftalmologista.h"
#include "Otorrino.h"
#include "Ginecologista.h"

class Hospital
{
    public:
        Cirurgiao cirurgiao;
        Oftalmologista oftalmologista;
        Otorrino otorrino;
        Ginecologista ginecologista;

        Hospital();
        void menu();
        virtual ~Hospital();

};

#endif // HOSPITAL_H
