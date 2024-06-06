/* 
* Proyecto ClicArt clase Dadaism
* Andrea Fátima Figueroa López
* A01706844
* 03/06/2024
* La clase Surrealism tiene una relación de tipo herencia 
* con la clase Artwork.
* Se crean los objetos tipo Dadaism y se establece el 
* método infoArt() 
*/

#ifndef DADAISM_H
#define DADAISM_H

#include "Artwork.h"

class Dadaism : public Artwork{ //Definición de la clase Dadaism que hereda de Artwork
    private:
        string process;

    public:
        //Constructores con sobrecarga
        Dadaism():Artwork("","",0,"","Dadaism"){}
        Dadaism(string arTittle, string arTist, int artYear, string artProcess):Artwork(arTittle,arTist,artYear,"Dadaism"){
            process = artProcess;
        }
        Dadaism(string arTittle, string arTist, int artYear, string arTechnic, string artProcess):Artwork(arTittle,arTist,artYear,arTechnic,"Dadaism"){
            process = artProcess;
        }

        //Definición de getters y setters
        void setProcess(string artProcess);
        string getProcess(){return process;}
        
        //Método al que se le aplica polimorfismo
        string infoArt();
};

void Dadaism::setProcess(string artProcess){
    process = artProcess;
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
string Dadaism::infoArt(){
    stringstream aux;
    if (technic == ""){
    aux << endl << "Titulo: "<< tittle << endl << "Artista: "<< artist << endl << "Ano: "<< year << endl;
    aux << "Proceso: " << process << endl;
        return aux.str();
    }
    else{
    aux << endl << "Titulo: "<< tittle << endl << "Artista: "<< artist << endl << "Ano: "<< year << endl;
    aux << "Tecnica: " << technic << endl << "Proceso: " << process << endl;
        return aux.str();
    }
}

#endif