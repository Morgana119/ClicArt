#ifndef COMIDA_H
#define COMIDA_H

#include<iostream>
using namespace std;

class Comida{
    private:
        int tipoComida;
        int cantidadComida;

    public:
        Comida(int,int);
        Comida(){}

        string getTipoC();
        void setTipoC(int);
        string getCantidadC();
        void setCantidadC(int);
};

//Comida::Comida(){} -> Por qué causa error?
Comida::Comida(int _tipoComida,int _cantidadComida){
    tipoComida = _tipoComida;
    cantidadComida = _cantidadComida;
}

string Comida::getTipoC(){
    string mensajeTipo;
    if (tipoComida == 1){
        mensajeTipo = "\n +12 puntos";
    }
    else if (tipoComida == 2){
        mensajeTipo = "\n +10 puntos";
    }
    else{
        mensajeTipo = "\n +5 puntos";
    }
    return mensajeTipo;
}

void Comida::setTipoC(int _tipoComida){
    tipoComida = _tipoComida;
}

string Comida::getCantidadC(){
    string mensajeCant;
    if (cantidadComida == 1){
        mensajeCant = " Media porción +5 puntos";
    }
    else if (cantidadComida == 2){
        mensajeCant = " Una porción +10 puntos";
    }
    else{
        mensajeCant = " Dos porciones +15 puntos";
    }
    return mensajeCant;
}

void Comida::setCantidadC(int _cantidadComida){
    cantidadComida = _cantidadComida;
}

#endif