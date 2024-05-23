#ifndef CUBISM_H
#define CUBISM_H

#include <iostream>
#include <sstream>
#include <string>

#include "Artwork.h"

class Cubism : public Artwork{
    private:
        string abstraction;

    public:
        Cubism():Artwork("","",0,"","Cubism",0){}
        Cubism(string arTittle, string arTist, int artYear, string abstract,int artKey):Artwork(arTittle,arTist,artYear,"Cubism",artKey){
            abstraction = abstract;
        }
        Cubism(string arTittle, string arTist, int artYear, string arTechnic, string abstract,int artKey):Artwork(arTittle,arTist,artYear,arTechnic,"Cubism",artKey){
            abstraction = abstract;
        }
        void setAbstraction(string abstract);
        string getAbstraction(){return abstraction;}
        string infoArt();
};

void Cubism::setAbstraction(string abstract){
    abstraction = abstract;
}
string Cubism::infoArt(){
    stringstream aux;
    if (technic == ""){
    aux << endl << "Título: "<< tittle << endl << "Artista: "<< artist << endl << "Año: "<< year << endl << "Abstracción: " << abstraction << endl;
        return aux.str();
    }
    else{
    aux << endl << "Título: "<< tittle << endl << "Artista: "<< artist << endl << "Año: "<< year << endl << "Técnica: " << technic << endl << "Abstracción: " << abstraction << endl;
        return aux.str();
    }
}


#endif