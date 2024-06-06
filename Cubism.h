/* 
* Proyecto ClicArt clase Cubism
* Andrea Fátima Figueroa López
* A01706844
* 03/06/2024
* La clase Surrealism tiene una relación de tipo herencia 
* con la clase Artwork.
* Se crean los objetos tipo Cubism y se establece el 
* método infoArt() 
*/

#ifndef CUBISM_H
#define CUBISM_H

#include "Artwork.h"

class Cubism : public Artwork{ //Definición de la clase Cubism que hereda de Artwork
    private:
        string abstraction;

    public:
        //Constructores con sobrecarga
        Cubism():Artwork("","",0,"","Cubism"){}
        Cubism(string arTittle, string arTist, int artYear, string abstract):Artwork(arTittle,arTist,artYear,"Cubism"){
            abstraction = abstract;
        }
        Cubism(string arTittle, string arTist, int artYear, string arTechnic, string abstract):Artwork(arTittle,arTist,artYear,arTechnic,"Cubism"){
            abstraction = abstract;
        }

        //Definición de getters y setters
        void setAbstraction(string abstract);
        string getAbstraction(){return abstraction;}
        
        //Método al que se le aplica polimorfismo
        string infoArt();
};

void Cubism::setAbstraction(string abstract){
    abstraction = abstract;
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
string Cubism::infoArt(){
    stringstream aux;
    if (technic == ""){
    aux << endl << "Titulo: "<< tittle << endl << "Artista: "<< artist << endl << "Ano: "<< year << endl;
    aux << "Abstraccion: " << abstraction << endl;
        return aux.str();
    }
    else{
    aux << endl << "Titulo: "<< tittle << endl << "Artista: "<< artist << endl << "Ano: "<< year << endl;
    aux << "Tecnica: " << technic << endl << "Abstraccion: " << abstraction << endl;
        return aux.str();
    }
}

#endif