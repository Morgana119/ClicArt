/* 
* Proyecto ClicArt clase Gallery
* Andrea Fátima Figueroa López
* A01706844
* 03/06/2024
* La clase Gallery tiene una relación de tipo composición 
* con la clase Artwork.
* Contiene el arreglo Artwork* pieces[30]; El cual es un 
* arreglo con apuntadores que guarda objetos tipo Artwork; 
* también contiene los métodos para crear ejemplos, recorrer 
* los arreglos, agregar objetos. 
*/

#ifndef GALLERY_H
#define GALLERY_H

//Se incluyen los archivos de las clases de los objetos que se usan
#include "Artwork.h"
#include "Surrealism.h"
#include "Dadaism.h"
#include "Cubism.h"

class Gallery{ //Definición de la clase Gallery
    private:
        string name;
        string location;
        Artwork* pieces[30]; //Arreglo con apuntadores
        int pcs;

    public:
        //Constructores con sobrecarga
        Gallery(){pcs=0;}
        Gallery(string galName, string gaLocation){
            name = galName;
            location = gaLocation;
            pcs = 0;
        }
        //Destructor debido a que los apuntadores están en el heap
        ~Gallery() {
        for (int i = 0; i < pcs; i++) {
            delete pieces[i];
        }    
    }                
        //Definición de getters y setters
        void setName(string name);
        string getName(){return name;}    

        void setLocation(string location);
        string getLocation(){return location;} 

        //Métodos para rear ejemplos, recorrer los arreglos
        void createArtwork();
        void consultArt(); 
        void consultArt(string arType);
        void consultArtArtist(string arTist);

        //Agregar objetos
        void addArtworkSurrealism(string arTittle, string arTist, int artYear, string arTechnic, string symbol);
        void addArtworkDadaism(string arTittle, string arTist, int artYear, string arTechnic, string artProcess);
        void addArtworkCubism(string arTittle, string arTist, int artYear, string arTechnic, string abstract);
};

//Setters
void Gallery::setName(string galName){
    name = galName;
}
void Gallery::setLocation(string gaLocation){
    location = gaLocation;
}

/*
* createArtwork() genera objetos y los guarda en el arreglo pieces[pcs]
*
* Genera ejemplos de los objetos del tipo de las clases de herencia 
* (Surrealism, Dadaism, Cubism) y los guarda en el arreglo pieces[pcs] 
* (arreglo de obras).
* Cada objeto contiene sus propios atributos.
*
* @param N/A
* @return N/A
*/
void Gallery::createArtwork(){
    pieces[pcs] = new Surrealism("La persistencia de la memoria", "Salvador Dali", 1931, "Oleo sobre lienzo","Al fondo, vemos un paisaje que nos recuerda el trazo leonardesco. La luz es un elemento caracteristico de Dali. En el primer plano, los relojes blandos anuncian la relatividad del tiempo. El espacio tambien se relativiza por medio de luces contrarias. Una figura informe yace en la superficie del universo pictorico.\n");
    pcs++;
    pieces[pcs] = new Surrealism("Hijo de hombre","Rene Magritte",1964,"Imagen y palabra son solo representaciones que sustituyen la verdadera realidad. Da un golpe teorico al concepto del arte occidental, basado en la imitacion de la naturaleza y se pone a las puertas del arte conceptual.\n");
    pcs++;
    pieces[pcs] = new Surrealism("Ecuacion shakespeariana, La duodecima noche","Man Ray",1948,"Oleo sobre lienzo","inspirado en la comedia de Shakespeare La duodecima noche (Twelfth Night), obra conocida tambien como Noche de reyes. Asocia objetos sin relacion aparente entre si, y crea hilos complejos, tal como las relaciones de los personajes shakespearianos.\n");
    pcs++;
    pieces[pcs] = new Dadaism("Fountain","Marcel Duchamp",1917,"Una critica a la sociedad y al mercado del arte. Es un ejemplo de la forma en que el dadaismo cuestiona las nociones establecidas de lo que se estima que es arte y desafia las expectativas del espectador.\n");
    pcs++;
    pieces[pcs] = new Dadaism("L.H.O.O.Q.", "Marcel Duchamp",1919,"Oleo sobre lienzo","una replica de una Mona Lisa con un bigote y una barba dibujados. En concreto, es una parodia de la famosa pintura de Leonardo da Vinci y tambien es conocida como Mona Lisa con bigote. Su objetivo no era otro que hacer una critica a la tradicion academica y una exploracion de los limites del arte.\n");
    pcs++;
    pieces[pcs] = new Dadaism("Corte con cuchillo de cocina a traves de la barriga cervecera de la Republica de Weimar", "Hanna Hoch",1919,"Collage, Fotomontaje","Este fotomontaje refleja la inestable situacion politica en Alemania durante ese periodo a traves de la combinacion de numerosos fragmentos de fotos con imagenes de todo tipo que la artista recortaba de periodicos, revistas y catalogos de moda: maquinas, animales, personajes anonimos pero tambien conocidos, como algunos politicos y militares de la nueva y vieja guardia, junto a miembros del grupo Dada de Berlin, y recortes de palabras, entre las que destacan anti y dada.\n");
    pcs++;
    pieces[pcs] = new Cubism("Les Demoiselles dAvignon", "Pablo Picasso", 1907, "oleo sobre lienzo,","presenta cinco figuras desnudas, supuestamente trabajadoras de un burdel, con cuerpos angulosos y miembros casi desarticulados en un plano pictorico bidimensional. Inspirado en las mascaras africanas y en la escultura iberica, Picasso adapta el estilo primitivista para apartarse de la pintura tradicional europea.\n");
    pcs++;
    pieces[pcs] = new Cubism("Guernica", "Pablo Picasso", 1937,"Picasso pinto Guernica en respuesta al bombardeo de Guernica, una ciudad del norte de Espana, por parte de las fuerzas nazis y fascistas el 26 de abril de 1937. El cuadro transmite el sufrimiento de la ciudad por la violencia y el caos de la Guerra Civil espanola.\n");
    pcs++;
    pieces[pcs] = new Cubism("Autorretrato cubista", "Salvador Dali", 1923,"oleo y collage sobre carton pegado a madera","es una mezcla de tecnicas cubistas y puristas. El purismo se impuso como un movimiento que pretendia perfeccionar las tecnicas del cubismo, ademas de alinearse mas intencionadamente con la abstraccion. Aunque Dali es conocido normalmente como artista surrealista, al principio de su carrera realizo obras cubistas durante unos cinco anos.\n");
    pcs++;
}

/*
* consultArt() es un método que contienen un ciclo for que recorre 
* el arreglo pieces[] y llama al método infoArt() para cada uno de 
* los objetos que están dentro del arreglo.
*
* @param N/A
* @return N/A
*/
void Gallery::consultArt(){
    for (int i = 0; i < pcs; i++)
        cout << pieces[i] -> infoArt();
}

/*
* consultArt() es un método con apuntadores y sobrecarga que 
* contiene un ciclo for que recorre el arreglo pieces[] y 
* con un condicional verifica que si el tipo del objeto (arType)
* que se obtiene con getArtype() es igual al que el usuario 
* selecciona, se llama al método infoArt() con la información 
* de aquellos objetos que entren dentro del condicional.
*
* @param string arType, debe ser tipo "Surrealism", "Dadaism" o "Cubism".
* @return N/A
*/
void Gallery::consultArt(string arType){
    for (int i = 0; i < pcs; i++) {
    if (pieces[i] -> getArtype() == arType)
        cout << pieces[i] -> infoArt();
    }
}

/*
* consultArtArtist() es un método con apuntadores que contiene 
* un ciclo for que recorre el arreglo pieces[] y con un condicional 
* verifica que si el autor del objeto (arTist) que se obtiene con
* getArtist() es igual al que el usuario escribe, se llama al 
* método infoArt() con la información de aquellos objetos que 
* entren dentro del condicional.
* 
* @param string arTist, debe ser escrito acorde a las mayúsculas y espacios
* @return N/A
*/
void Gallery::consultArtArtist(string arTist){
    for (int i = 0; i < pcs; i++) {
        if (pieces[i] -> getArtist() == arTist)
            cout << pieces[i] -> infoArt();
        }
}

/*
* addArtworkSurrealism() es un método que recibe los parámetros para crear
* un objeto tipo Surrealism, los cuales son: el título, artista, año, técnica 
* y símbolo. Se crea el objeto con apuntadores y se guarda en el arreglo pieces[]
*
* @param string arTittle, string arTist, int artYear, string arTechnic, string symbol. 
* Son los parámetros del objeto que se va a añadir, en este caso es un objeto Surrealism.
* @return N/A
*/
void Gallery::addArtworkSurrealism(string arTittle, string arTist, int artYear, string arTechnic, string symbol){
    pieces[pcs] = new Surrealism(arTittle,arTist,artYear,arTechnic,symbol);
    pcs++;
}

/*
* addArtworkDadaism() es un método que recibe los parámetros para crear
* un objeto tipo Dadaism, los cuales son: el título, artista, año, técnica 
* y proceso. Se crea el objeto con apuntadores y se guarda en el arreglo pieces[]
*
* @param string arTittle, string arTist, int artYear, string arTechnic, string artProcess. 
* Son los parámetros del objeto que se va a añadir, en este caso es un objeto Dadaism.
* @return N/A
*/
void Gallery::addArtworkDadaism(string arTittle, string arTist, int artYear, string arTechnic, string artProcess){
    pieces[pcs] = new Dadaism(arTittle,arTist,artYear,arTechnic,artProcess);
    pcs++;
}

/*
* addArtworkCubism() es un método que recibe los parámetros para crear
* un objeto tipo Cubism, los cuales son: el título, artista, año, técnica 
* y abstracción. Se crea el objeto con apuntadores y se guarda en el arreglo pieces[]
*
* @param string arTittle, string arTist, int artYear, string arTechnic, string abstract. 
* Son los parámetros del objeto que se va a añadir, en este caso es un objeto Cubism.
* @return N/A
*/
void Gallery::addArtworkCubism(string arTittle, string arTist, int artYear, string arTechnic, string abstract){
    pieces[pcs] = new Cubism(arTittle,arTist,artYear,arTechnic,abstract);
    pcs++;
}

#endif