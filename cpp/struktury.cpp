/*
 * struktury.cpp
 * 
 * Copyright 2018
 */


#include <iostream>
#include <iomanip>
#icnlude

using namespace std;

struct samochod {
    char nazwa[20];
    int rok_produkcji;
    int przebieg;
    
};

void wyswietlDane(samochod o) {
    cout << setw(20) << left << "Nazwa:" << setw(20) << setfill('_') << right << o.nazwa << endl;
    cout << setw(20) << left << "rok produkcji:" << setw(20) << right << o.rok_produkcji << endl;
    cout << setw(20) << left << "przebieg:" << setw(20) << right << o.przebieg << endl;
}

void getAuto(auto t[], int ile) {
    for (int i = 0; i<ile; i++) {
    cout << "podaj nazwe:" ;
    cin >> t[i].nazwa;
    cout << "podaj rok produkcji:" ;
    cin >> t[i].rok_produkcji;
    cout << "podaj przebieg:" ;
    cin >> t[i].przebieg;
     
    }
}


void drukujAuto(auto t[], int ile) {
    for (int i=0; i< ile; i++) {
    //cout << "podaj nazwe:" ;
    cout >> t[i].nazwa;
    //cout << "podaj rok produkcji:" ;
    cout >> t[i].rok_produkcji;
    //cout << "podaj przebieg:" ;
    cout >> t[i].przebieg;
    }
}


int main(int argc, char **argv)
{
	//~samochod auto1;
    //~cout << "podaj nazwe:" ;
    //~cin >> auto1.nazwa;
    //~cout << "podaj rok produkcji:" ;
    //~cin >> auto1.rok_produkcji;
    //~cout << "podaj przebieg:" ;
    //~cin >> auto1.przebieg;
    //~wyswietlDane(auto1);
    
    int ile;
    cout << "Ile aut?";
    cin >> ile;
    auto tb[ile];
    getAuto(tb,ile);
    
	return 0;
}

