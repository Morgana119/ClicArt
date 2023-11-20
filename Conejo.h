#ifndef CONEJO_H
#define CONEJO_H

#include "Animal.h"

class Conejo : public Animal{
    public:
        Conejo(){}
        string getLimpieza();
        void setLimpieza(int);
};

//Conejo::Conejo(){} -> Por qué causa error?
string Conejo::getLimpieza(){
    string mensajeLimpieza;
    if (limpieza == 4){
        mensajeLimpieza = "\n Limpiaste a tu conejo \n +20 puntos";
    }
    return mensajeLimpieza;
}

void Conejo::setLimpieza(int _limpieza){
    limpieza = _limpieza;
}

#endif