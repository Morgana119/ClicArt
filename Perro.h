#ifndef PERRO_H
#define PERRO_H

#include "Animal.h"

class Perro : public Animal{
    private:
        int pasear;
    public:
        Perro(){}
        string getPasear();
        void setPasear(int);
};

//Perro::Perro(){} -> Por qué causa error?
string Perro::getPasear(){
    string mensajePasear;
    if (pasear == 1){
        mensajePasear = "\n Sacaste a pasear a tu perro \n +25 puntos";
    }
    return mensajePasear;
}

void Perro::setPasear(int _pasear){
    pasear = _pasear;
}

#endif