/*
 * wskazniki.cpp
 * 
 * Copyright 2018  <>
 * 
 * 
 * 
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    
    int x = 11;
    cout << x << endl; //wartosc zmiennej
    cout << &x << endl; //adres zmiennej w pamieci(0x to wartosc 16-nastkowa)
    cout << * &x << endl; // *odcztuje wartosc zmiennej pod adresem komorki
	
    
    int *px; //definicja wskaznika do typu calkowitego
    px = &x; //inicjajcja wskaznika
    //wskaznik zawsze zaiwera adres pamieci
    
    cout << px << endl; //wyswietla adres x
    cout << *px << endl;

    int y = 100;
    px = &y;
    cout << px << endl; //wyswietla adres x
    cout << *px << endl;
    
	return 0;
}

