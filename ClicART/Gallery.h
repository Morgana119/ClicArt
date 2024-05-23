#ifndef GALLERY_H
#define GALLERY_H

#include <iostream>
#include <sstream>
#include <string>

#include "Artwork.h"
#include "Surrealism.h"
#include "Dadaism.h"
#include "Cubism.h"

int i = 0;
int k = 0;

class Gallery{
    private:
        string name;
        string location;
        Artwork* pieces[30];
        int pcs;

    public:
        Gallery(){pcs=0;}
        Gallery(string galName, string gaLocation){
            name = galName;
            location = gaLocation;
            pcs = 0;
        }
        ~Gallery() {
        for (int i = 0; i < pcs; i++) {
            delete pieces[i];
        }    
    }                      
        void setName(string name);
        string getName(){return name;}    

        void setLocation(string location);
        string getLocation(){return location;} 

        void createArtwork();
        void consultArt(); 
        void consultArt(string arType);

        void consultArtName(int artKey);

        void addArtworkSurrealism(string arTittle, string arTist, int artYear, string symbol,int artKey);
        void addArtworkSurrealism(string arTittle, string arTist, int artYear, string arTechnic, string symbol,int artKey);
        void addArtworkDadaism(string arTittle, string arTist, int artYear, string artProcess,int artKey);
        void addArtworkDadaism(string arTittle, string arTist, int artYear, string arTechnic, string artProcess,int artKey);
        void addArtworkCubism(string arTittle, string arTist, int artYear, string abstract,int artKey);
        void addArtworkCubism(string arTittle, string arTist, int artYear, string arTechnic, string abstract,int artKey);
};

void Gallery::setName(string galName){
    name = galName;
}
void Gallery::setLocation(string gaLocation){
    location = gaLocation;
}
void Gallery::createArtwork(){
    pieces[pcs] = new Surrealism("La persistencia de la memoria", "Salvador Dalí", 1931, "Óleo sobre lienzo","Al fondo, vemos un paisaje que nos recuerda el trazo leonardesco. La luz es un elemento característico de Dalí. En el primer plano, los relojes blandos anuncian la relatividad del tiempo. El espacio también se relativiza por medio de luces contrarias. Una figura informe yace en la superficie del universo pictórico.\n",k++);
    pcs++;
    pieces[pcs] = new Surrealism("Hijo de hombre","René Magritte",1964,"Imagen y palabra son solo representaciones que sustituyen la verdadera realidad. Da un golpe teórico al concepto del arte occidental, basado en la imitación de la naturaleza y se pone a las puertas del arte conceptual.\n",k++);
    pcs++;
    pieces[pcs] = new Surrealism("Ecuación shakespeariana, La duodécima noche","Man Ray",1948,"Óleo sobre lienzo","inspirado en la comedia de Shakespeare La duodécima noche (Twelfth Night), obra conocida también como Noche de reyes. Asocia objetos sin relación aparente entre sí, y crea hilos complejos, tal como las relaciones de los personajes shakespearianos.\n",k++);
    pcs++;
    pieces[pcs] = new Dadaism("Fountain","Marcel Duchamp",1917,"Una crítica a la sociedad y al mercado del arte. Es un ejemplo de la forma en que el dadaísmo cuestiona las nociones establecidas de lo que se estima que es arte y desafía las expectativas del espectador.\n",k++);
    pcs++;
    pieces[pcs] = new Dadaism("L.H.O.O.Q.", "Marcel Duchamp",1919,"Óleo sobre lienzo","una réplica de una Mona Lisa con un bigote y una barba dibujados. En concreto, es una parodia de la famosa pintura de Leonardo da Vinci y también es conocida como Mona Lisa con bigote. Su objetivo no era otro que hacer una crítica a la tradición académica y una exploración de los límites del arte.\n",k++);
    pcs++;
    pieces[pcs] = new Dadaism("Corte con cuchillo de cocina a través de la barriga cervecera de la República de Weimar", "Hanna Höch",1919,"Collage, Fotomontaje","Este fotomontaje refleja la inestable situación política en Alemania durante ese periodo a través de la combinación de numerosos fragmentos de fotos con imágenes de todo tipo que la artista recortaba de periódicos, revistas y catálogos de moda: máquinas, animales, personajes anónimos pero también conocidos, como algunos políticos y militares de la nueva y vieja guardia, junto a miembros del grupo dada de Berlín, y recortes de palabras, entre las que destacan anti y dada.\n",k++);
    pcs++;
    pieces[pcs] = new Cubism("Les Demoiselles d’Avignon", "Pablo Picasso", 1907, "óleo sobre lienzo,","presenta cinco figuras desnudas, supuestamente trabajadoras de un burdel, con cuerpos angulosos y miembros casi desarticulados en un plano pictórico bidimensional. Inspirado en las máscaras africanas y en la escultura ibérica, Picasso adapta el estilo primitivista para apartarse de la pintura tradicional europea.\n",k++);
    pcs++;
    pieces[pcs] = new Cubism("Guernica", "Pablo Picasso", 1937,"Picasso pintó Guernica en respuesta al bombardeo de Guernica, una ciudad del norte de España, por parte de las fuerzas nazis y fascistas el 26 de abril de 1937. El cuadro transmite el sufrimiento de la ciudad por la violencia y el caos de la Guerra Civil española.\n",k++);
    pcs++;
    pieces[pcs] = new Cubism("Autorretrato cubista", "Salvador Dalí", 1923,"óleo y collage sobre cartón pegado a madera","es una mezcla de técnicas cubistas y puristas. El purismo se impuso como un movimiento que pretendía perfeccionar las técnicas del cubismo, además de alinearse más intencionadamente con la abstracción. Aunque Dalí es conocido normalmente como artista surrealista, al principio de su carrera realizó obras cubistas durante unos cinco años.\n",k++);
    pcs++;
}
void Gallery::consultArt(){
    for (int i = 0; i < pcs; i++)
        cout << pieces[i] -> infoArt();

}
void Gallery::consultArt(string arType){
    for (int i = 0; i < pcs; i++) {
    if (pieces[i] -> getArtype() == arType)
        cout << pieces[i] -> infoArt();
    }
}

void Gallery::consultArtName(int artKey){
    for (int i = 0; i < pcs; i++) {
    if (pieces[i] -> getArtKey() == artKey)
        cout << pieces[i] -> infoArt();
    }
}

void Gallery::addArtworkSurrealism(string arTittle, string arTist, int artYear, string symbol,int key){
    pieces[pcs] = new Surrealism(arTittle,arTist,artYear,symbol,key);
    pcs++;
}
void Gallery::addArtworkSurrealism(string arTittle, string arTist, int artYear, string arTechnic, string symbol,int key){
    pieces[pcs] = new Surrealism(arTittle,arTist,artYear,arTechnic,symbol,key);
    pcs++;
}

void Gallery::addArtworkDadaism(string arTittle, string arTist, int artYear, string artProcess,int key){
    pieces[pcs] = new Dadaism(arTittle,arTist,artYear,artProcess,key);
    pcs++;
}
void Gallery::addArtworkDadaism(string arTittle, string arTist, int artYear, string arTechnic, string artProcess,int key){
    pieces[pcs] = new Dadaism(arTittle,arTist,artYear,arTechnic,artProcess,key);
    pcs++;
}

void Gallery::addArtworkCubism(string arTittle, string arTist, int artYear, string abstract,int key){
    pieces[pcs] = new Cubism(arTittle,arTist,artYear,abstract,key);
    pcs++;
}
void Gallery::addArtworkCubism(string arTittle, string arTist, int artYear, string arTechnic, string abstract,int key){
    pieces[pcs] = new Cubism(arTittle,arTist,artYear,arTechnic,abstract,key);
    pcs++;
}

#endif