#include <iostream>
#include "Funciones.h"
using namespace std;

PlayList* seleccionar_lista(vector<PlayList*> Mislistas) {
    int opc;
    PlayList listaDefecto;
    cout << "Seleccione una lista " << endl;
    for (int i = 0; i < Mislistas.size(); i++) {
        cout << i + 1 << ".-   " << Mislistas[i]->getNombrelista() << endl;
    }
    cin >> opc;
    opc--;
    return Mislistas[opc];
}

void llenarRocola(vector<Cancion>* p) {
    p->push_back(Cancion("Cancion inicial", 3, 30, "", "", indefinido));
    p->push_back(Cancion("Lamento Boliviano",Tiempo(3,48),Artista("Enanitos Verdes","Argentina",Rock)));
    p->push_back(Cancion("Blod sweat and tears", Tiempo(3, 15), Artista("Boliviano", "Bolivia", Cumbia)));
    p->push_back(Cancion("I want to break free", Tiempo(3, 10), Artista("Queen", "EEUU", Rock)));
    p->push_back(Cancion("Another One Bites the Dust ", Tiempo(3, 43), Artista("Queen", "EEUU", Rock)));
    p->push_back(Cancion("We will Rock You ", Tiempo(2, 15), Artista("Queen", "EEUU", Rock)));
    p->push_back(Cancion("Under Pressure ", Tiempo(4, 14), Artista("Queen", "EEUU", Rock)));
    p->push_back(Cancion("Radio Ga Ga ", Tiempo(5, 54), Artista("Queen", "EEUU", Rock)));
    p->push_back(Cancion("We Are the Champions", Tiempo(3, 11), Artista("Queen", "EEUU", Rock)));
    p->push_back(Cancion("Bohemian Rhapsody ", Tiempo(6, 00), Artista("Queen", "EEUU", Rock)));
    p->push_back(Cancion("Killer Queen", Tiempo(3, 12), Artista("Queen", "EEUU", Rock)));
    p->push_back(Cancion("Don't Stop Me Now ", Tiempo(3, 33), Artista("Queen", "EEUU", Rock)));
    p->push_back(Cancion("Somebody to Love ", Tiempo(5, 10), Artista("Queen", "EEUU", Rock)));
    p->push_back(Cancion("Smells Like Teen Spirit ", Tiempo(4, 39), Artista("Nirvana", "EEUU", Rock)));
    p->push_back(Cancion("It's My Life ", Tiempo(4, 27), Artista("Bon Jovi", "EEUU", Rock)));
    p->push_back(Cancion("Talking to the Moon ", Tiempo(3, 47), Artista("Bruno Mars", "EEUU", Rock)));
    p->push_back(Cancion("Immortalized ", 4, 18, "Disturbed", "EEUU", Rock));
    p->push_back(Cancion("Down with the Sickness ", 3, 38, "Disturbed", "EEUU", Rock));
    p->push_back(Cancion("The Night ", 4, 46, "Disturbed", "EEUU", Rock));
    p->push_back(Cancion("No More ", 3, 53, "Disturbed", "EEUU", Rock));
    p->push_back(Cancion("Billie Jean ", 4, 56, "Michael Jackson", "EEUU", Pop));
    p->push_back(Cancion("Beat It", 4, 59, "Michael Jackson", "EEUU", Pop));
    p->push_back(Cancion("Smooth Criminal ", 9, 26, "Michael Jackson", "EEUU", Pop));
    p->push_back(Cancion("They Don't Care About Us ", 4, 42, "Michael Jackson", "EEUU", Pop));
    p->push_back(Cancion("Thriller ", 13, 42, "Michael Jackson", "EEUU", Pop));
    p->push_back(Cancion("Bad ", 4, 20, "Michael Jackson", "EEUU", Pop));
    p->push_back(Cancion("Locked Out of Heaven ", 3, 55, "Bruno Mars", "EEUU", Pop));
    p->push_back(Cancion("Just the Way You Are ", 3, 57, "Bruno Mars", "EEUU", Pop));
    p->push_back(Cancion("24K Magic", 3, 47, "Bruno Mars", "EEUU", Pop));
    p->push_back(Cancion("That's What I Like ", 3, 31, "Bruno Mars", "EEUU", Pop));
    p->push_back(Cancion("Uptown Funk ", 4, 31, "Mark Ronson", "EEUU", Pop));
    p->push_back(Cancion("I Was Made For Lovin'You ", 4, 32, "KISS", "EEUU", Rock));
    p->push_back(Cancion("Cancion final", 3, 30, "", "", indefinido));
}

void mostrarRocola(vector<Cancion>* p) {
    for (int i = 0; i < p->size(); i++) {
        cout << i + 1;
        p->begin()[i].verInfo();
    }
}