/*
 * tab_dynamiczne.cpp
 * 
 * 
 * 
 */


#include <iostream>

using namespace std;

void wprowadzDane(int *t, int ile) {
    for(int i=0; i < ile; i++) {
        cout << "Podaj liczbe:";
        //cin >> tab[i];
        cout << "Adres komorki" << (t + i) << endl;
        cin >> *(t + i);
    }
}



int tab1W(){
    int ile =0;
    //tworzenie 1 wymiarowej tablicy dynamicznej
    cout << "Ile liczb podasz?" << endl;
    cin >> ile;
    
    try{
        int *tab;
        tab = new int [ile];
        wprowadzDane(tab,ile);
    
    } catch(bad_alloc){
        cout << "Za malo pamieci!";
    return 1;
    }
    return 0;
}

int main(int argc, char **argv)
{
	
    tab1W();
    
    
	return 0;
}

