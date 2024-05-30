#ifndef GALLERY_H
#define GALLERY_H

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

        //void addArtworkSurrealism(string arTittle, string arTist, int artYear, string symbol,int artKey);
        void addArtworkSurrealism(string arTittle, string arTist, int artYear, string arTechnic, string symbol,int artKey);
        //void addArtworkDadaism(string arTittle, string arTist, int artYear, string artProcess,int artKey);
        void addArtworkDadaism(string arTittle, string arTist, int artYear, string arTechnic, string artProcess,int artKey);
        //void addArtworkCubism(string arTittle, string arTist, int artYear, string abstract,int artKey);
        void addArtworkCubism(string arTittle, string arTist, int artYear, string arTechnic, string abstract,int artKey);
};

void Gallery::setName(string galName){
    name = galName;
}
void Gallery::setLocation(string gaLocation){
    location = gaLocation;
}
void Gallery::createArtwork(){
    pieces[pcs] = new Surrealism("La persistencia de la memoria", "Salvador Dal1", 1931, "Oleo sobre lienzo","Al fondo, vemos un paisaje que nos recuerda el trazo leonardesco. La luz es un elemento caracteristico de Dali. En el primer plano, los relojes blandos anuncian la relatividad del tiempo. El espacio tambien se relativiza por medio de luces contrarias. Una figura informe yace en la superficie del universo pictorico.\n",k++);
    pcs++;
    pieces[pcs] = new Surrealism("Hijo de hombre","Rene Magritte",1964,"Imagen y palabra son solo representaciones que sustituyen la verdadera realidad. Da un golpe teorico al concepto del arte occidental, basado en la imitacion de la naturaleza y se pone a las puertas del arte conceptual.\n",k++);
    pcs++;
    pieces[pcs] = new Surrealism("Ecuacion shakespeariana, La duodecima noche","Man Ray",1948,"Oleo sobre lienzo","inspirado en la comedia de Shakespeare La duodecima noche (Twelfth Night), obra conocida tambien como Noche de reyes. Asocia objetos sin relacion aparente entre si, y crea hilos complejos, tal como las relaciones de los personajes shakespearianos.\n",k++);
    pcs++;
    pieces[pcs] = new Dadaism("Fountain","Marcel Duchamp",1917,"Una critica a la sociedad y al mercado del arte. Es un ejemplo de la forma en que el dadaismo cuestiona las nociones establecidas de lo que se estima que es arte y desafia las expectativas del espectador.\n",k++);
    pcs++;
    pieces[pcs] = new Dadaism("L.H.O.O.Q.", "Marcel Duchamp",1919,"Oleo sobre lienzo","una replica de una Mona Lisa con un bigote y una barba dibujados. En concreto, es una parodia de la famosa pintura de Leonardo da Vinci y tambien es conocida como Mona Lisa con bigote. Su objetivo no era otro que hacer una critica a la tradicion academica y una exploracion de los limites del arte.\n",k++);
    pcs++;
    pieces[pcs] = new Dadaism("Corte con cuchillo de cocina a traves de la barriga cervecera de la Republica de Weimar", "Hanna Hoch",1919,"Collage, Fotomontaje","Este fotomontaje refleja la inestable situacion politica en Alemania durante ese periodo a traves de la combinacion de numerosos fragmentos de fotos con imagenes de todo tipo que la artista recortaba de periodicos, revistas y catalogos de moda: maquinas, animales, personajes anonimos pero tambien conocidos, como algunos politicos y militares de la nueva y vieja guardia, junto a miembros del grupo Dada de Berlin, y recortes de palabras, entre las que destacan anti y dada.\n",k++);
    pcs++;
    pieces[pcs] = new Cubism("Les Demoiselles dAvignon", "Pablo Picasso", 1907, "oleo sobre lienzo,","presenta cinco figuras desnudas, supuestamente trabajadoras de un burdel, con cuerpos angulosos y miembros casi desarticulados en un plano pictorico bidimensional. Inspirado en las mascaras africanas y en la escultura iberica, Picasso adapta el estilo primitivista para apartarse de la pintura tradicional europea.\n",k++);
    pcs++;
    pieces[pcs] = new Cubism("Guernica", "Pablo Picasso", 1937,"Picasso pinto Guernica en respuesta al bombardeo de Guernica, una ciudad del norte de Espana, por parte de las fuerzas nazis y fascistas el 26 de abril de 1937. El cuadro transmite el sufrimiento de la ciudad por la violencia y el caos de la Guerra Civil espanola.\n",k++);
    pcs++;
    pieces[pcs] = new Cubism("Autorretrato cubista", "Salvador Dali", 1923,"oleo y collage sobre carton pegado a madera","es una mezcla de tecnicas cubistas y puristas. El purismo se impuso como un movimiento que pretendia perfeccionar las tecnicas del cubismo, ademas de alinearse mas intencionadamente con la abstraccion. Aunque Dali es conocido normalmente como artista surrealista, al principio de su carrera realizo obras cubistas durante unos cinco anos.\n",k++);
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

// void Gallery::addArtworkSurrealism(string arTittle, string arTist, int artYear, string symbol,int key){
//     pieces[pcs] = new Surrealism(arTittle,arTist,artYear,symbol,key);
//     pcs++;
// }
void Gallery::addArtworkSurrealism(string arTittle, string arTist, int artYear, string arTechnic, string symbol,int key){
    pieces[pcs] = new Surrealism(arTittle,arTist,artYear,arTechnic,symbol,key);
    pcs++;
}

// void Gallery::addArtworkDadaism(string arTittle, string arTist, int artYear, string artProcess,int key){
//     pieces[pcs] = new Dadaism(arTittle,arTist,artYear,artProcess,key);
//     pcs++;
// }
void Gallery::addArtworkDadaism(string arTittle, string arTist, int artYear, string arTechnic, string artProcess,int key){
    pieces[pcs] = new Dadaism(arTittle,arTist,artYear,arTechnic,artProcess,key);
    pcs++;
}

// void Gallery::addArtworkCubism(string arTittle, string arTist, int artYear, string abstract,int key){
//     pieces[pcs] = new Cubism(arTittle,arTist,artYear,abstract,key);
//     pcs++;
// }
void Gallery::addArtworkCubism(string arTittle, string arTist, int artYear, string arTechnic, string abstract,int key){
    pieces[pcs] = new Cubism(arTittle,arTist,artYear,arTechnic,abstract,key);
    pcs++;
}

#endif