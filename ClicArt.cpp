#include<iostream>
using namespace std;

#include "Gallery.h"

int menuVanguardia(){
    cout << endl;
    cout << "1. Surrealismo" << endl;
    cout << "2. Dadaismo" << endl;
    cout << "3. Cubismo" << endl;
    cout << endl;
}
int menuArtista(){
    cout << endl;
    cout << "1. Salvador Dali" << endl;
    cout << "2. Rene Magritte" << endl;
    cout << "3. Man Ray" << endl;
    cout << "4. Marchel Duchamp" << endl;
    cout << "5. Hanna Hoch" << endl;
    cout << "6. Pablo Picasso" << endl;
    cout << endl;
}
int options(){
    cout << endl;
    cout << "1. Mostrar todas las obras" << endl;
    cout << "2. Buscar obras por artista" << endl;
    cout << "3. Buscar obras por vanguardia" << endl;
    cout << "4. Agregar obra" << endl;
    cout << "5. Salir" << endl;
    cout << endl;
}

int main(){
    Gallery galeria;
    galeria.createArtwork();

    int option;
    int optionArtist;
    int optionVanguardia;
    
    while (option != 5){
        options();
        cout << "Selecciona una opcion: ";
        cin >> option;

        switch(option){
            case 1:{
                galeria.consultArt();
                break;
            }
            case 2:{
                menuArtista();
                cout << "Selecciona una opcion: ";
                cin >> optionArtist;
                switch(optionArtist){
                    case 1:{
                        galeria.consultArtName(0);
                        galeria.consultArtName(8);
                        break;
                    }
                    case 2:{
                        galeria.consultArtName(1);
                        break;
                    }
                    case 3:{
                        galeria.consultArtName(2);
                        break;
                    }
                    case 4:{
                        galeria.consultArtName(3);
                        galeria.consultArtName(4);
                        break;
                    }
                    case 5:{
                        galeria.consultArtName(5);
                        break;
                    }
                    case 6:{
                        galeria.consultArtName(6);
                        galeria.consultArtName(7);
                        break;
                    }
                }
                break;
            }
            case 3:{
                menuVanguardia();
                cout << "Selecciona una opcion: ";
                cin >> optionVanguardia;
                switch(optionVanguardia){
                    case 1:{
                        galeria.consultArt("Surrealism");
                        break;
                    }
                    case 2:{
                        galeria.consultArt("Dadaism");
                        break;
                    }
                    case 3:{
                        galeria.consultArt("Cubism");
                        break;
                    }
                }
            break;
            }
            case 4:{
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
                switch(optionAgregar){
                    case 1:{
                        Surrealism obraS;
                        cout << "Titulo: ";
                        cin >> tittle;
                        obraS.setTittle(tittle);

                        cout << "Artista: ";
                        cin >> artist;
                        obraS.setArtist(artist);

                        cout << "Ano: ";
                        cin >> year;      
                        obraS.setYear(year);

                        cout << "Tecnica: ";
                        cin >> technic;  
                        obraS.setTechnic(technic);

                        cout << "Simbologia: ";
                        cin >> symbology;
                        obraS.setSymbolism(symbology);

                        galeria.addArtworkSurrealism(tittle,artist,year,technic,symbology,k++);
                        break;
                    }
                    case 2:{
                        Dadaism obraD;
                        cout << "Titulo: ";
                        cin >> tittle;
                        obraD.setTittle(tittle);

                        cout << "Artista: ";
                        cin >> artist;
                        obraD.setArtist(artist);

                        cout << "Ano: ";
                        cin >> year;      
                        obraD.setYear(year);

                        cout << "Tecnica: ";
                        cin >> technic;  
                        obraD.setTechnic(technic);

                        cout << "Proceso: ";
                        cin >> process;
                        obraD.setProcess(process);

                        galeria.addArtworkDadaism(tittle,artist,year,technic,process,k++);
                        break;
                    }
                    case 3:{
                        Cubism obraC;
                        cout << "Titulo: ";
                        cin >> tittle;
                        obraC.setTittle(tittle);

                        cout << "Artista: ";
                        cin >> artist;
                        obraC.setArtist(artist);

                        cout << "Ano: ";
                        cin >> year;      
                        obraC.setYear(year);

                        cout << "Tecnica: ";
                        cin >> technic;  
                        obraC.setTechnic(technic);

                        cout << "Abstraccion: ";
                        cin >> abstraction;
                        obraC.setAbstraction(abstraction);

                        galeria.addArtworkCubism(tittle,artist,year,technic,abstraction,k++);
                        break;
                    }
                }
            break;
            }
            case 5:{
                cout << "Hasta luego!";
                break;
            }
            default:
                cout << "-----------------------------------------------------------" << endl;
                cout << "\nOpcion invalida. Por favor, elija entre 1 - 5." << endl;
        }
    }
}

