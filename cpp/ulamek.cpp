/*
 * ulamek.cpp
 * 
 * 
 * 
 */
//w domu sprobuwac napisac metode klasy ulamek, operacja skracania w klasie w metodach publicznych 


//niczego nasza metoda ma nie zwracac,

#include <iostream>

using namespace std;


class Ulamek{
private:
    int licznik;
    int mianownik;
public:
    Ulamek(int, int); //deklaracja konstruktora, metoda specjalna
    void zapisz(int, int); //deklaracja metody
    void wypisz(){
        cout << licznik << "/" << mianownik;
    }
    
    int get_l() {
        return licznik;
    }
    
    int get_m() {
        return mianownik;
    }
    
    void skracaj(){ //metoda drukuje skrocona postac ulamka, maja byc couty, znalezc najwieszky wspolny dzinnik licznika i mianownika (NWD), algorytm Euklides
 //wersja klasyczna, odejmujemy,, przypominamy sobie w wersji ktora byla       
        ;
    }
    
};

void Ulamek::skracaj() {
    //kod wykorzystujacy alghorytm euklidesa optymlany, jesli sie nie da skrocic to wyswietlamy normalny ulamek;
    
}



void Ulamek::zapisz(int l, int m){ //wskazuje faunkcje zapisz w clasie ulamka
    licznik = l;
    if (m != 0) mianownik = m;
    else{
        cout << "Mianownik nie moze byc zerem";
        exit(1);
        
    }

};


Ulamek::Ulamek(int l, int m){ //wskazuje faunkcje zapisz w clasie ulamka
    licznik = l;
    if (m != 0) mianownik = m;
    else{
        cout << "Mianownik nie moze byc zerem";
        exit(1);
        
    }

}



int main(int argc, char **argv)
{
// int a;   deklaracja
//int= 6    inicjacja
    //Ulamek u1, u2; //wymyslamy nazwe zmiennych, tworzymy 2 zmiennne, (deklaracja obiektu)
    Ulamek u1(3, 7); // definicja obiektu 
    Ulamek u2(5, 3); // definicja obiektu 
    //u1.zapisz(3,7);
    //u2.zapisz(5,9);
    cout << "Ulamek 1: ";
    u1.wypisz();
    cout << endl << "Ulamek 2: ";
    u2.wypisz();
    
    u1.zapisz(7,9);
    cout << "Licznik" << u1.get_l() << endl;
    cout << "Mianownik" << u1.get_m() << endl;
    
    Ulamek u3(u1.get_l(), u1.get_m());
    u3.wypisz();
    
    
	return 0;
}

