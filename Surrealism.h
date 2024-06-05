/* 
* Proyecto ClicArt clase Surrealism
* Andrea Fátima Figueroa López
* A01706844
* 03/06/2024
* La clase Surrealism tiene una relación de tipo herencia 
* con la clase Artwork.
* Se crean los objetos tipo Surrealism y se establece el 
* método infoArt() 
*/

#ifndef SURREALISM_H
#define SURREALISM_H

#include "Artwork.h"

class Surrealism : public Artwork{ //Definición de la clase Surrealism que hereda de Artwork
    private:
        string symbology;

    public:
        //Constructores con sobrecarga
        Surrealism():Artwork("","",0,"","Surrealism"){};
        Surrealism(string arTittle, string arTist, int artYear, string symbol):Artwork(arTittle,arTist,artYear,"Surrealism"){
            symbology = symbol;
        }
        Surrealism(string arTittle, string arTist, int artYear, string arTechnic, string symbol):Artwork(arTittle,arTist,artYear,arTechnic,"Surrealism"){
            symbology = symbol;
        }

        //Definición de getters y setters
        void setSymbolism(string symbol);
        string getSymbolism(){return symbology;}
        
        //Método al que se le aplica polimorfismo
        string infoArt();
};

void Surrealism::setSymbolism(string symbol){
    symbology = symbol;
}

/*
* infoArt() Convierte los atributos a un string.
*
* concatena todos los valores de los atributos en un string 
* para ser impreso.
* Se usa un condicional para el caso en que el atributo técnica 
* esté vacío; de ser así, no se toma en cuenta ese atributo y 
* no se incluye dentro del string. 
*
* @param
* @return string con los valores y texto concatenado.
*/
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