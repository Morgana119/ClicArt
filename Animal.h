#ifndef ALIMENTO_H
#define ALIMENTO_H

#include "Comida.h"
#include "Agua.h"

class Animal{
    protected:
        string nombre;
        Comida alimento;
        Agua hidratacion;
        int carino;
        int limpieza;
        int puntaje = 0;

    public: 
        Animal(string,Comida,Agua,int,bool);
        Animal(){}

        string getNombre();
        void setNombre(string); 

        Comida getAlimento();
        void setAlimento(Comida);

        Agua getHidratacion();
        void setHidratacion(Agua);

        string getCarino();
        void setCarino(int);

        string getLimpieza();
        void setLimpieza(int);

        void calcularPuntaje(int);
        int infoPuntaje();
};

//Animal::Animal(){} -> Por qué causa error?
Animal::Animal(string _nombre,Comida _alimento,Agua _hidratacion,int _carino,bool _limpieza){
    nombre = _nombre;
    alimento = _alimento;
    hidratacion = _hidratacion;
    carino = _carino;
    limpieza = _limpieza;
}

string Animal::getNombre(){
    return nombre;
}

void Animal::setNombre(string _nombre){
    nombre = _nombre;
}

Comida Animal::getAlimento(){
    return alimento;
}

void Animal::setAlimento(Comida _comida){
    alimento = _comida;
}

Agua Animal::getHidratacion(){
    return hidratacion;
}

void Animal::setHidratacion(Agua _hidratacion){
    hidratacion = _hidratacion;
}

string Animal::getCarino(){
    string mensajeCarino;
    if (carino == 1){
        mensajeCarino = "\n Consentiste a tu mascota \n +15 puntos";
    }
    else{
        mensajeCarino = "\n Acariciaste a tu mascota \n +20 puntos";
    }
    return mensajeCarino;
}

void Animal::setCarino(int _carino){
    carino = _carino;
}

string Animal::getLimpieza(){
    string mensajeLimpieza;
    if (limpieza == 4){
        mensajeLimpieza = "\n Limpiaste a tu mascota \n +15 puntos";
    }
    return mensajeLimpieza;
}

void Animal::setLimpieza(int _limpieza){
    limpieza = _limpieza;
}

void Animal::calcularPuntaje(int _puntaje){
    puntaje += _puntaje;
}

int Animal::infoPuntaje(){
    return puntaje;
}

#endif