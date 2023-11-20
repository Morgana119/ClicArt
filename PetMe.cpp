#include<iostream>
#include "Animal.h"
#include "Perro.h"
#include "Gato.h"
#include "Conejo.h"

using namespace std;

int main(){
    int seleccionMascota,respuestaCuidados,respuestaComida,respuestaCantComida,respuestaCantAgua,respuestaCarino;
    string nombre;
    cout << "\nBienvenid@! \n";

    Animal animal1;
    Perro perro1;
    Gato gato1;
    Conejo conejo1;

    do{
        cout<<"\n 1. Perro \n 2. Gato \n 3. Conejo \n\n¿Qué mascota te gustaría tener? (Selecciona una opción del 1 - 3): ";
        cin>>seleccionMascota;
        switch(seleccionMascota){
            case 1:{
                cout << "Nombre: "; cin >> nombre;
                perro1.setNombre(nombre);
                cout << "El nombre de tu perro es: " << perro1.getNombre() << endl;
                break;
            }
            case 2:{
                cout << "Nombre: "; cin >> nombre;
                gato1.setNombre(nombre);
                cout << "El nombre de tu gato es: " << gato1.getNombre() << endl;
                break;
            }
            case 3:{
                cout << "Nombre: "; cin >> nombre;
                conejo1.setNombre(nombre);
                cout << "El nombre de tu conejo es: " << conejo1.getNombre() << endl;
                break;
            }
            default:
                cout << "\nOpción inválida. Por favor, elija entre 1 - 3." << endl;
        }
    } while (seleccionMascota < 1 || seleccionMascota > 3);
    
    do{
        cout << "-----------------------------------------------------------" << endl;
        cout << "\nPara cuidar a tu mascota escoge una opción (Selecciona una opción del 1 - 6). \n\n 1. Darle de comer \n 2. Darle agua \n 3. Darle cariño \n 4. Limpiarlo \n 5. Revisar puntaje \n 6. Salir \n\n¿Qué te gustaría hacer?: ";
        cin >> respuestaCuidados; 
        switch(respuestaCuidados){
            case 1:{//Darle de comer
                cout << "-----------------------------------------------------------" << endl;
                if (seleccionMascota == 1){//Si es perro
                    cout << "\nEstas son las opciones de comida para tu mascota. \n\n 1. Croquetas de res \n 2. Croquetas de pollo \n 3. Premio \n\n Selecciona una opción del 1 - 3: "; 
                    cin >> respuestaComida;
                }
                else if(seleccionMascota == 2){//Si es gato
                    cout << "\nEstas son las opciones de comida para tu mascota. \n\n 1. Croquetas de salmón \n 2. Croquetas de atún \n 3. Premio \n\n Selecciona una opción del 1 - 3: "; 
                    cin >> respuestaComida;
                }
                else{//Si es conejo
                    cout << "\nEstas son las opciones de comida para tu mascota. \n\n 1. Zanahoria \n 2. Lechuga  \n 3. Premio \n\n Selecciona una opción del 1 - 3: "; 
                    cin >> respuestaComida;
                }
                switch(respuestaComida){
                    case 1:{ //Croquetas de res/salmón/zanahoria
                        Comida comida1;
                        cout << "-----------------------------------------------------------" << endl;
                        cout << "\nEstas son las opciones de porciones (Selecciona una opción del 1 - 3). \n\n 1. Media porción \n 2. Una porción \n 3. Dos porciones \n\n ¿Qué porción le quieres dar?: ";
                        cin >> respuestaCantComida;
                        switch(respuestaCantComida){
                            case 1:{//Media porción
                                comida1.setTipoC(respuestaComida);
                                comida1.setCantidadC(respuestaCantComida);
                                animal1.calcularPuntaje(17);
                                if (seleccionMascota == 1){
                                    cout << "\nLe diste de comer media porción de croquetas de res a "<< nombre << endl;
                                }
                                else if (seleccionMascota == 2){
                                    cout << "\nLe diste de comer media porción de croquetas de salmón a "<< nombre << endl;
                                }
                                else{
                                    cout << "\nLe diste de comer media porción de zanahoria a "<< nombre << endl;
                                }
                                cout << comida1.getTipoC() << endl;
                                cout << comida1.getCantidadC() << endl;
                                break;
                            }
                            case 2:{//Una porción
                                comida1.setTipoC(respuestaComida);
                                comida1.setCantidadC(respuestaCantComida);
                                animal1.calcularPuntaje(22);
                                if (seleccionMascota == 1){
                                    cout << "\nLe diste de comer una porción de croquetas de res a "<< nombre << endl;
                                }
                                else if (seleccionMascota == 2){
                                    cout << "\nLe diste de comer una porción de croquetas de salmón a "<< nombre << endl;
                                }
                                else{
                                    cout << "\nLe diste de comer una porción de zanahoria a "<< nombre << endl;
                                }
                                cout << comida1.getTipoC() << endl;
                                cout << comida1.getCantidadC() << endl;
                                break;
                            }
                            case 3:{//Dos porciones
                                comida1.setTipoC(respuestaComida);
                                comida1.setCantidadC(respuestaCantComida);
                                animal1.calcularPuntaje(27);
                                if (seleccionMascota == 1){
                                    cout << "\nLe diste de comer dos porciones de croquetas de res a "<< nombre << endl;
                                }
                                else if (seleccionMascota == 2){
                                    cout << "\nLe diste de comer dos porciones de croquetas de salmón a "<< nombre << endl;
                                }
                                else{
                                    cout << "\nLe diste de comer dos porciones de zanahoria a "<< nombre << endl;
                                }
                                cout << comida1.getTipoC() << endl;
                                cout << comida1.getCantidadC() << endl;
                                break;
                            }
                            default:
                                cout << "-----------------------------------------------------------" << endl;
                                cout << "\nOpción inválida. Por favor, elija entre 1 - 3." << endl;
                        }
                        break;
                    }
                    case 2:{//Croquetas de pollo/atún/lechuga
                        Comida comida1;
                        cout << "-----------------------------------------------------------" << endl;
                        cout << "\nEstas son las opciones de porciones (Selecciona una opción del 1 - 3). \n\n 1. Media porción \n 2. Una porción \n 3. Dos porciones \n\n ¿Qué porción le quieres dar?: ";
                        cin >> respuestaCantComida;
                        switch(respuestaCantComida){
                            case 1:{//Media porción
                                comida1.setTipoC(respuestaComida);
                                comida1.setCantidadC(respuestaCantComida);
                                animal1.calcularPuntaje(15);
                                if (seleccionMascota == 1){
                                    cout << "\nLe diste de comer media porción de croquetas de pollo a "<< nombre << endl;
                                }
                                else if (seleccionMascota == 2){
                                    cout << "\nLe diste de comer media porción de croquetas de atún a "<< nombre << endl;
                                }
                                else{
                                    cout << "\nLe diste de comer media porción de lechuga a "<< nombre << endl;
                                }
                                cout << comida1.getTipoC() << endl;
                                cout << comida1.getCantidadC() << endl;
                                break;
                            }
                            case 2:{//Una porción
                                comida1.setTipoC(respuestaComida);
                                comida1.setCantidadC(respuestaCantComida);
                                animal1.calcularPuntaje(20);
                                if (seleccionMascota == 1){
                                    cout << "\nLe diste de comer una porción de croquetas de pollo a "<< nombre << endl;
                                }
                                else if (seleccionMascota == 2){
                                    cout << "\nLe diste de comer una porción de croquetas de atún a "<< nombre << endl;
                                }
                                else{
                                    cout << "\nLe diste de comer una porción de lechuga a "<< nombre << endl;
                                }
                                cout << comida1.getTipoC() << endl;
                                cout << comida1.getCantidadC() << endl;
                                break;
                            }
                            case 3:{//Dos porciones
                                comida1.setTipoC(respuestaComida);
                                comida1.setCantidadC(respuestaCantComida);
                                animal1.calcularPuntaje(25);
                                if (seleccionMascota == 1){
                                    cout << "\nLe diste de comer dos porciones de croquetas de pollo a "<< nombre << endl;
                                }
                                else if (seleccionMascota == 2){
                                    cout << "\nLe diste de comer dos porciones de croquetas de atún a "<< nombre << endl;
                                }
                                else{
                                    cout << "\nLe diste de comer dos porciones de lechuga a "<< nombre << endl;
                                }
                                cout << comida1.getTipoC() << endl;
                                cout << comida1.getCantidadC() << endl;
                                break;
                            }
                            default:
                                cout << "-----------------------------------------------------------" << endl;
                                cout << "\nOpción inválida. Por favor, elija entre 1 - 3." << endl;
                            break;
                        }
                        break;
                    }
                    case 3:{ //Premio
                        Comida comida1;
                        comida1.setTipoC(respuestaComida);
                        animal1.calcularPuntaje(5);
                        cout << "\nLe diste de comer un premio a "<< nombre << endl;
                        cout << comida1.getTipoC() << endl;
                        break;
                    }
                    default:
                        cout << "-----------------------------------------------------------" << endl;
                        cout << "\nOpción inválida. Por favor, elija entre 1 - 3." << endl;
                    break;
                }    
                break;
            }    
            case 2:{//Darle agua
                Agua agua1;
                cout << "-----------------------------------------------------------" << endl;
                cout << "\nEstas son las opciones de porciones (Selecciona una opción del 1 - 3). \n\n 1. Media porción \n 2. Una porción \n 3. Dos porciones \n\n ¿Qué porción le quieres dar?: ";
                cin >> respuestaCantAgua;
                switch(respuestaCantAgua){
                    case 1:{//Media porción
                        agua1.setTipoA(1);
                        agua1.setCantidadA(respuestaCantAgua);
                        animal1.calcularPuntaje(15);
                        cout << "\nLe diste de tomar media porción de agua a "<< nombre << endl;
                        cout << agua1.getTipoA() << endl;
                        cout << agua1.getCantidadA() << endl;
                        break;
                    }
                    case 2:{//Una porción
                        agua1.setTipoA(1);
                        agua1.setCantidadA(respuestaCantAgua);
                        animal1.calcularPuntaje(20);
                        cout << "\nLe diste de tomar una porción de agua a "<< nombre << endl;
                        cout << agua1.getTipoA() << endl;
                        cout << agua1.getCantidadA() << endl;
                        break;
                    }
                    case 3:{//Dos porciones
                        agua1.setTipoA(1);
                        agua1.setCantidadA(respuestaCantAgua);
                        animal1.calcularPuntaje(25);
                        cout << "\nLe diste de tomar dos porciones de agua a "<< nombre << endl;
                        cout << agua1.getTipoA() << endl;
                        cout << agua1.getCantidadA() << endl;
                        break;
                        break;
                    }
                    default:
                        cout << "-----------------------------------------------------------" << endl;
                        cout << "\nOpción inválida. Por favor, elija entre 1 - 3." << endl;
                }
                break;
            }
            case 3:{//Darle cariño
                cout << "-----------------------------------------------------------" << endl;
                if (seleccionMascota == 1){//Si es perro
                    cout << "\nEstas son las opciones de cariño para tu mascota (Selecciona una opción del 1 - 2). \n\n 1. Pasear \n 2. Acariciar \n\n Selecciona una opción del 1 - 2: "; 
                    cin >> respuestaCarino;
                }
                else if(seleccionMascota == 2){//Si es gato
                    cout << "\nEstas son las opciones de cariño para tu mascota (Selecciona una opción del 1 - 2). \n\n 1. Consentir \n 2. Acariciar \n\n Selecciona una opción del 1 - 2: "; 
                    cin >> respuestaCarino;
                }
                else{//Si es conejo
                    cout << "\nEstas son las opciones de cariño para tu mascota (Selecciona una opción del 1 - 2). \n\n 1. Consentir \n 2. Acariciar \n\n Selecciona una opción del 1 - 2: "; 
                    cin >> respuestaCarino;
                }
                switch (respuestaCarino){
                    case 1:{//Pasear/consentir
                        if (seleccionMascota == 1){//Pasear solo para perro
                            perro1.setPasear(respuestaCarino);
                            cout << perro1.getPasear() << endl;
                            animal1.calcularPuntaje(25);
                        }
                        else{//Consentir
                            animal1.setCarino(respuestaCarino);
                            cout << animal1.getCarino() << endl;
                            animal1.calcularPuntaje(15);
                        }
                        break;
                    }
                    case 2:{//Acariciar
                        if (seleccionMascota == 2){
                            gato1.setAcariciar(respuestaCarino);
                            cout << gato1.getAcariciar() << endl;
                            animal1.calcularPuntaje(25);
                        }
                        else{
                            animal1.setCarino(respuestaCarino);
                            cout << animal1.getCarino() << endl;
                            animal1.calcularPuntaje(20);
                        }
                        break;
                    }
                }
                break;
            }
            case 4:{//Limpiarlo
                if (seleccionMascota == 3){
                    conejo1.setLimpieza(respuestaCuidados);
                    cout << conejo1.getLimpieza() << endl;
                    animal1.calcularPuntaje(20);
                }
                else{
                    animal1.setLimpieza(respuestaCuidados);
                    cout << animal1.getLimpieza() << endl;
                    animal1.calcularPuntaje(15);
                }
                break;
            }
            case 5:{//Revisar puntaje
                cout << "\nTienes " << animal1.infoPuntaje() << " puntos" << endl;
                break;
            }
            case 6:{//Salir
                cout << "\n Hasta luego!" << endl;
                break;
            }
            default:
                cout << "-----------------------------------------------------------" << endl;
                cout << "\nOpción inválida. Por favor, elija entre 1 - 6." << endl;
            }
        } while (respuestaCuidados != 6);
    return 0;
} 