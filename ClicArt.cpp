/* 
* Proyecto ClicArt ClicArt.cpp (main)
* Andrea Fátima Figueroa López
* A01706844
* 03/06/2024
* 
* ClicArt es tiene el objetivo de ser una galería virtual 
* en la que podrás encontrar obras artísticas de diversos 
* artistas de 3 vanguardias: Surrealismo, Dadaísmo y Cubismo. 
* Busca dar a conocer algunas de las obras más importantes de 
* estas 3 vanguardias, compartiendo información básica acerca 
* de ellas.
* 
*/

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

#include "Gallery.h" //Archivos con las clases de los objetos

//Menu secundario para selección de vanguardias
int menuVanguardia() {
    cout << endl;
    cout << "1. Surrealismo" << endl;
    cout << "2. Dadaismo" << endl;
    cout << "3. Cubismo" << endl;
    cout << endl;
    return 0;
}

//Menu secundario para selección de artistas
int menuArtista() {
    cout << endl;
    cout << "1. Salvador Dali" << endl;
    cout << "2. Rene Magritte" << endl;
    cout << "3. Man Ray" << endl;
    cout << "4. Marchel Duchamp" << endl;
    cout << "5. Hanna Hoch" << endl;
    cout << "6. Pablo Picasso" << endl;
    cout << endl;
    return 0; 
}

//Menu principal, opciones que el usuario puede hacer
int options() {
    cout << endl;
    cout << "1. Mostrar todas las obras" << endl;
    cout << "2. Buscar obras por artista" << endl;
    cout << "3. Buscar obras por vanguardia" << endl;
    cout << "4. Agregar obra" << endl;
    cout << "5. Salir" << endl;
    cout << endl;
    return 0; 
}

int main() {
    Gallery galeria;
    galeria.createArtwork();

    int option;
    int optionArtist;
    int optionVanguardia;

    //Ciclo while para que se continue con el menu principal, siempre y cuando el usuario no seleccione la opción de salir (5)
    while (option != 5) {
        options();
        cout << "Selecciona una opcion: ";
        cin >> option;
        cin.ignore(); // Ignorar el salto de línea residual

        switch (option) {
            case 1: { //Mostrar todas las obras
                galeria.consultArt();
                break;
            }
            case 2: { //Buscar obras por artista
                menuArtista();
                string author;
                cout << "Autor (Escribe el nombre tal cual, con mayusculas y espacios): ";
                getline(cin, author); 
                galeria.consultArtArtist(author);
                break;
            }
            case 3: { //Buscar obras por vanguardia
                menuVanguardia();
                cout << "Selecciona una opcion: ";
                cin >> optionVanguardia;
                cin.ignore();
                switch (optionVanguardia) {
                    case 1: {
                        galeria.consultArt("Surrealism");
                        break;
                    }
                    case 2: {
                        galeria.consultArt("Dadaism");
                        break;
                    }
                    case 3: {
                        galeria.consultArt("Cubism");
                        break;
                    }
                }
                break;
            }
            case 4: { //Agregar obras
                string tittle;
                string artist;
                int year;
                string technic;
                string symbology;
                string process;
                string abstraction;

                int optionAgregar;

                menuVanguardia();
                cout << "Que tipo de vanguardia es la obra que quieres agregar? ";
                cin >> optionAgregar;
                cin.ignore(); 

                switch (optionAgregar) { //Agregar obra tipo Surrealism
                    case 1: {
                        Surrealism obraS;
                        cout << "Titulo: ";
                        getline(cin, tittle);
                        obraS.setTittle(tittle);

                        cout << "Artista: ";
                        getline(cin, artist);
                        obraS.setArtist(artist);

                        cout << "Ano: ";
                        cin >> year;
                        obraS.setYear(year);
                        cin.ignore(); 

                        cout << "Tecnica: ";
                        getline(cin, technic);
                        obraS.setTechnic(technic);

                        cout << "Simbologia: ";
                        getline(cin, symbology);
                        obraS.setSymbolism(symbology);

                        galeria.addArtworkSurrealism(tittle, artist, year, technic, symbology);
                        break;
                    }
                    case 2: { //Agregar obra tipo Dadaism
                        Dadaism obraD;
                        cout << "Titulo: ";
                        getline(cin, tittle);
                        obraD.setTittle(tittle);

                        cout << "Artista: ";
                        getline(cin, artist);
                        obraD.setArtist(artist);

                        cout << "Ano: ";
                        cin >> year;
                        obraD.setYear(year);
                        cin.ignore(); 

                        cout << "Tecnica: ";
                        getline(cin, technic);
                        obraD.setTechnic(technic);

                        cout << "Proceso: ";
                        getline(cin, process);
                        obraD.setProcess(process);

                        galeria.addArtworkDadaism(tittle, artist, year, technic, process);
                        break;
                    }
                    case 3: { //Agregar obra tipo Cubism
                        Cubism obraC;
                        cout << "Titulo: ";
                        getline(cin, tittle);
                        obraC.setTittle(tittle);

                        cout << "Artista: ";
                        getline(cin, artist);
                        obraC.setArtist(artist);

                        cout << "Ano: ";
                        cin >> year;
                        obraC.setYear(year);
                        cin.ignore(); 

                        cout << "Tecnica: ";
                        getline(cin, technic);
                        obraC.setTechnic(technic);

                        cout << "Abstraccion: ";
                        getline(cin, abstraction);
                        obraC.setAbstraction(abstraction);

                        galeria.addArtworkCubism(tittle, artist, year, technic, abstraction);
                        break;
                    }
                }
                break;
            }
            case 5: {
                cout << "Hasta luego!";
                break;
            }
            default:
                cout << "-----------------------------------------------------------" << endl;
                cout << "\nOpcion invalida. Por favor, elija entre 1 - 5." << endl;
        }
    }
    return 0;
}