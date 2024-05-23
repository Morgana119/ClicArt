#ifndef DADAISM_H
#define DADAISM_H

#include <iostream>
#include <sstream>
#include <string>

#include "Artwork.h"

class Dadaism : public Artwork{
    private:
        string process;

    public:
        Dadaism():Artwork("","",0,"","Dadaism",0){}
        Dadaism(string arTittle, string arTist, int artYear, string artProcess,int artKey):Artwork(arTittle,arTist,artYear,"Dadaism",artKey){
            process = artProcess;
        }
        Dadaism(string arTittle, string arTist, int artYear, string arTechnic, string artProcess,int artKey):Artwork(arTittle,arTist,artYear,arTechnic,"Dadaism",artKey){
            process = artProcess;
        }
        void setProcess(string artProcess);
        string getProcess(){return process;}
        string infoArt();
};

void Dadaism::setProcess(string artProcess){
    process = artProcess;
}
string Dadaism::infoArt(){
    stringstream aux;
    if (technic == ""){
    aux << endl << "Título: "<< tittle << endl << "Artista: "<< artist << endl << "Año: "<< year << endl << "Proceso: " << process << endl;
        return aux.str();
    }
    else{
    aux << endl << "Título: "<< tittle << endl << "Artista: "<< artist << endl << "Año: "<< year << endl << "Técnica: " << technic << endl << "Proceso: " << process << endl;
        return aux.str();
    }
}

#endif