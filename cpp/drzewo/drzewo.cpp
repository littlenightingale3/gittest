/*
 * drzewo_bin.cpp
 * 
 * Copyright 2018  <>
 * 
 */

#include <iostream>
#include "drzewo.hpp"

using namespace std;

struct Wezel {
    int wartosc;
    Wezel *lewy;
    Wezel *prawy;
} *korzen = NULL; // definicja struktury i utworzenie wskaźnika korzen

Wezel* stworzWezel(int wartosc) {
    Wezel *nowyWezel = new Wezel;
    nowyWezel->wartosc = wartosc;
    nowyWezel->lewy = NULL;
    nowyWezel->prawy = NULL;
    
    return nowyWezel;
}

void dodajWezel(Wezel *wezel, int wartosc) {
    if (korzen == NULL) { // drzewo jest puste!
        korzen = stworzWezel(wartosc); // utworzenie 1. elementu
    } else {
        if (wartosc < wezel->wartosc) { // wstawiamy wartość do lewego poddrzewa
            if(wezel->lewy != NULL) {
                dodajWezel(wezel->lewy, wartosc);  // rekurencyjne wywołanie dodawanie do lewego poddrzewa
            } else {  // lewy potomek nie istnieje
                wezel->lewy = stworzWezel(wartosc);  // tworzymy nowy wezel
            }
        } else { // wstawiamy wartość do prawego poddrzewa
            if(wezel->prawy != NULL) {
                dodajWezel(wezel->prawy, wartosc);  // rekurencyjne wywołanie dodawanie do lewego poddrzewa
            } else {  // prawy potomek nie istnieje
                wezel->prawy = stworzWezel(wartosc);  // tworzymy nowy wezel
            }
        }
    }
}

//funckja rekurencyjnie przegladajaca drzewo(funkcja wyswietl)
void wyswietlRosnaco(Wezel *wezel){
    if (wezel != NULL) { // jezeli wezel nie jest pusty
        //rekurencyjnie wyswietl lewe poddrzewo
        wyswietlRosnaco(wezel ->lewy);
        //wypisz wartosc aktualego wezla
        cout << wezel ->wartosc << " , ";
        //rekurencyjnie wyswietl prawe poddrzewo
        wyswietlRosnaco(wezel ->prawy);
        
    }
}


int main(int argc, char **argv)
{
    
    dodajWezel(korzen,10);
    dodajWezel(korzen,8);
    dodajWezel(korzen,15);
    dodajWezel(korzen,63);
    dodajWezel(korzen,8);
    dodajWezel(korzen,1);
    dodajWezel(korzen,100);
	
    cout << "posportowane drzewo(niemalejaco): ";
    wyswietlRosnaco(korzen);
    
    delete korzen;
    
	return 0;
}

