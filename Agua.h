
#ifndef AGUA_H
#define AGUA_H

class Agua{
    private:
        int tipoAgua;
        int cantidadAgua;

    public:
        Agua(int,int);
        Agua(){}

        string getTipoA();
        void setTipoA(int);
        string getCantidadA();
        void setCantidadA(int);
};

//Agua::Agua(){} -> Por qué causa error?
Agua::Agua(int _tipoAgua,int _cantidadAgua){
    tipoAgua = _tipoAgua;
    cantidadAgua = _cantidadAgua;
}

string Agua::getTipoA(){
    string mensajeTipo;
    if (tipoAgua == 1){
        mensajeTipo = "\n Agua +10 puntos";
    }
    return mensajeTipo;
}

void Agua::setTipoA(int _tipoAgua){
    tipoAgua = _tipoAgua;
}

string Agua::getCantidadA(){
    string mensajeCant;
    if (cantidadAgua == 1){
        mensajeCant = " Media porción +5 puntos";
    }
    else if (cantidadAgua == 2){
        mensajeCant = " Una porción +10 puntos";
    }
    else{
        mensajeCant = " Dos porciones +15 puntos";
    }
    return mensajeCant;
}

void Agua::setCantidadA(int _cantidadAgua){
    cantidadAgua = _cantidadAgua;
}

#endif