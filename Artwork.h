/* 
* Proyecto ClicArt clase Artwork
* Andrea Fátima Figueroa López
* A01706844
* 03/06/2024
* La clase Artwork es la clase padre de las próximas 
* clases heredadas (Surrealism, Dadaism, Cubism).
* Contiene los atributos generales, constructores, 
* getter y setter. 
* Se define el método virtual string infoArt() = 0; 
* por lo que es una clase abstracta.
*/

#ifndef ARTWORK_H
#define ARTWORK_H

#include <iostream>
#include <sstream>
#include <string>

#include "Gallery.h" //Incluye a la clase Gallery, debido a que se usa composición

using namespace std;

class Artwork{ //Definición de la clase Artwork
    protected: //Atributos tipo protected debido a la herencia
        string tittle;
        string artist;
        int year;
        string technic;
        string arType;

    public:
        //Constructores con sobrecarga
        Artwork():tittle(""),artist(""),year(0),technic(""),arType(""){};
        Artwork(string arTittle, string arTist, int artYear,string type){
            tittle = arTittle;
            artist = arTist;
            year = artYear;
            arType = type;
        }
        Artwork(string arTittle, string arTist, int artYear, string arTechnic,string type){
            tittle = arTittle;
            artist = arTist;
            year = artYear;
            technic = arTechnic;
            arType = type;
        }

        //Definición de getters y setters
        void setTittle(string tittle);
        string getTittle(){return tittle;}
        
        void setArtist(string artist);
        string getArtist(){return artist;}
        
        void setYear(int year);
        int getYear(){return year;}

        void setTechnic(string technic);
        string getTechnic(){return technic;}

        virtual string infoArt() = 0;
        string getArtype(){return arType;}      
};

//Setters
void Artwork::setTittle(string arTittle){
    tittle = arTittle;
}
void Artwork::setArtist(string arTist){
    artist = arTist;
}
void Artwork::setYear(int artYear){
    year = artYear;
}
void Artwork::setTechnic(string arTechnic){
    technic = arTechnic;
}

#endif