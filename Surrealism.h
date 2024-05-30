#ifndef SURREALISM_H
#define SURREALISM_H

#include "Artwork.h"

class Surrealism : public Artwork{
    private:
        string symbology;

    public:
        Surrealism():Artwork("","",0,"","Surrealism",0){};
        Surrealism(string arTittle, string arTist, int artYear, string symbol,int artKey):Artwork(arTittle,arTist,artYear,"Surrealism",artKey){
            symbology = symbol;
        }
        Surrealism(string arTittle, string arTist, int artYear, string arTechnic, string symbol,int artKey):Artwork(arTittle,arTist,artYear,arTechnic,"Surrealism",artKey){
            symbology = symbol;
        }
        void setSymbolism(string symbol);
        string getSymbolism(){return symbology;}
        string infoArt();
};

void Surrealism::setSymbolism(string symbol){
    symbology = symbol;
}
string Surrealism::infoArt(){
    stringstream aux;
    if (technic == ""){
        aux << endl << "Titulo: "<< tittle << endl << "Artista: "<< artist << endl << "Ano: "<< year << endl << "Symbologia: " << symbology << endl;
        return aux.str();
    }
    else{
        aux << endl << "Titulo: "<< tittle << endl << "Artista: "<< artist << endl << "Ano: "<< year << endl << "Tecnica: " << technic << endl << "Symbologia: " << symbology << endl;
        return aux.str();
    }
}



#endif