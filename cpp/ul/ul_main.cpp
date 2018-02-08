/*
 * ulamek.cpp
 * 
 * 
 * 
 */


#include <iostream>
#include "ul_ulamek.h"

using namespace std;



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

