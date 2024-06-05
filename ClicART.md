# ClicART 🎨

ClicArt tiene el objetivo de ser una galería virtual en la que podrás encontrar obras artísticas de diversos artistas de 3 vanguardias: Surrealismo, Dadaísmo y Cubismo. Busca dar a conocer algunas de las obras más importantes de estas 3 vanguardias, compartiendo información básica acerca de ellas.

La Galería consta de un nombre, ubicación y obras artísticas; dentro de la galería se puede añadir y remover alguna obra. Como usuario te registras con tu nombre y podrás buscar obras tanto con el nombre del artista como por el nombre de la obra.

Cada obra contiene datos como: título, artista, año, técnica e interpretación. De igual forma, cada vanguardia además de tener los datos principales, tiene aspectos que la diferencian de las otras vanguardias. En cuanto al surrealismo, es su simbología, el dadaísmo su proceso y el cubismo su abstracción. 

## Limitaciones 🧩
- Este proyecto no tiene incluido la iinterfaz visual de las obras.
- Si se selecciona una opción que no está contemplada dentro de los submenus, se regersará al menú principal.
- Si en el menú principal, se escribe en consola un valor tipo string, el ciclo del menú principal seguirá de manera indefinida.
- No se pueden agregar nuevas obras sin la parte de técnica.

## Instalación ⚙️
Pasos a seguir para utilizar el programa:

1. Descarga los archivos (ClicArt.cpp, Artwork.h, Gallery.h, Surrealism.h, Dadaism.h, Cubism.h).
2. Guardarlos en un folder.
3. Abre tu terminal dentro de ese folder.
4. En tu terminal escribe: g++ ClicART.cpp -o main.exe
5. En tu terminal escribe: dir (para sistema operativo Windows) ls (para sistema operativo Linux/Mac OS)
6. En tu terminal escribe: ./main.exe
7. ¡Diviértete y explora el bello mundo del arte!

## Diagrama UML ✏️
![Art Gallery_UML-Page-1 drawio (1)](https://github.com/Morgana119/Proyectos/assets/145613786/52b11448-87e8-4d39-8883-1b0da442adc4)

# Correcciones 

## Avance 1

Comentario: Identificación correcta de clases para solucionar el problema, el diagrama UML es correcto, falta escribir los casos que harían que el proyecto deje de funcionar.

Corrección (en el README): 

Limitaciones 🧩
- Este proyecto no tiene incluido la iinterfaz visual de las obras.
- Al usar la opción de añadir obras, no es posible buscar esas recien agregadas por medio del buscador por artista.
- Si se selecciona una opción que no está contemplada dentro de los submenus, se regersará al menú principal.
- Si en el menú principal, se escribe en consola un valor tipo string, el ciclo
- No se pueden agregar nuevas obras sin la parte de técnica.

### Se actualizó el UML de acuerdo a lo implementado en el código que se entregó en el avance 2

## Avance 2

Comentario: Correcta implemetnacion, de herencia modificadores de acceso sobrecarga y sobreescritura. Te recomiendo subir el proyecto a un respositorio unico para el proyecto pues al final de la materia se califica corriendo lo que se descarga del .zip del repositorio, tambien te recomiendo no utilizar caracteres especiales en el output pues en la terminal hace que los menajes del codigo sean muy confusos.

Correcciones: 
- Se dejo el repositorio sólo con los archivos del proyecto.
- Se quitaron los carácteres especiales.

## Avance 3 

Comentario: Bien Implementado el polimorfismo.

Cambios extra:
- Se agregaron métodos.
- Se documentó el código.
- Se eliminó todo lo relacionado con ArtKey.
- Actualización del diagrama UML.


