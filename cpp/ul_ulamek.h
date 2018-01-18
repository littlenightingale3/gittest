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
    Ulamek(int, int); 
    void zapisz(int, int);
    void wypisz();
    int get_l();
    int get_m();
    void skracaj();

};
