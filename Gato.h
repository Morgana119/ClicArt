#ifndef GATO_H
#define GATO_H

#include "Animal.h"

class Gato : public Animal{
    private:
        int acariciar;

    public:
        Gato(){}
        string getAcariciar();
        void setAcariciar(int);
};

//Gato::Gato(){} -> Por qué causa error?
string Gato::getAcariciar(){
    string mensajeAcariciar;
    if (acariciar == 2){
        mensajeAcariciar = "\n Acariciaste a tu gato \n +25 puntos";
    }
    return mensajeAcariciar;
}

void Gato::setAcariciar(int _acariciar){
    acariciar = _acariciar;
}

#endif