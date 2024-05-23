#ifndef ARTWORK_H
#define ARTWORK_H

#include <iostream>
#include <sstream>
#include <string>

#include "Gallery.h"

using namespace std;

class Artwork{
    protected:
        string tittle;
        string artist;
        int year;
        string technic;
        string arType;
        int artKey=0;

    public:
        //CONSTRUCTOR VACIO??
        Artwork():tittle(""),artist(""),year(0),technic(""),arType(""),artKey(0){};
        Artwork(string arTittle, string arTist, int artYear,string type,int key){
            tittle = arTittle;
            artist = arTist;
            year = artYear;
            arType = type;
            artKey = key;
        }
        Artwork(string arTittle, string arTist, int artYear, string arTechnic,string type,int key){
            tittle = arTittle;
            artist = arTist;
            year = artYear;
            technic = arTechnic;
            arType = type;
            artKey = key;
        }
        void setTittle(string tittle);
        string getTittle(){return tittle;}
        
        void setArtist(string artist);
        string getArtist(){return artist;}
        
        void setYear(int year);
        int getYear(){return year;}

        void setTechnic(string technic);
        string getTechnic(){return technic;}

        virtual string infoArt()=0; //Sobreescritura
        string getArtype(){return arType;}      
        int getArtKey(){return artKey;}      

};

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