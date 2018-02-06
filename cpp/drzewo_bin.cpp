/*
 * drzewo_bin.cpp
 */


#include <iostream>

using namespace std;

struct Wezel{
    int wartosc;
    Wezel *lewy;
    Wezel *prawy;
}*korzen = NULL; //definicja struktury i utworzenie nowego wskaznika-korzen stanie sie prywatny


Wezel* stworzWezel(int wartosc){
    Wezel *nowyWezel = new Wezel;
    nowyWezel -> wartosc = wartosc;
    nowyWezel -> lewy = NULL;
    nowyWezel -> prawy = NULL;
    return nowyWezel; //wskaznik do adresu utworzonego wezla
};



void dodajWezel(Wezel *wezel, int wartosc){
    if (korzen = NULL){ //drzewo jest puste!
        korzen = stworzWezel(wartosc); //utworzenie 1 elementu drzewa
    }else{
        if (wartosc < wezel->wartosc){// wstawiamy wartosc mniejsza
            if(wezel->lewy !=NULL){
                dodajWezel(wezel->lewy, wartosc); //dodajemy rekurencyjnie,zmieniamy paramter
        } else { //lewy potomek nie istniejje
            wezel ->lewy=stworzWezel(wartosc);//tworzyumy nowy wezel
            
            }
        } else{//wstawiamy wartosc wieksza
             if(wezel->prawy !=NULL){
                dodajWezel(wezel->prawy, wartosc); //dodajemy rekurencyjnie,zmieniamy paramter
        } else { //prawwy potomek nie istniejje
            wezel ->prawy=stworzWezel(wartosc);//tworzyumy nowy wezel
            
            }
        }
    }
    
}

int main(int argc, char **argv)
{
    
    
	
	return 0;
}

