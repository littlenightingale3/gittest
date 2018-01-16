/*
 * tab_dynamiczne.cpp
 * 
 * 
 * 
 */


#include <iostream>
#include <iomanip>
#include <cstdlib>

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

void wypelnij2W(int **tab, int w, int k) {
    srand(time(NULL));
    for(int i =0; i < w; i++){
        for(int j =0; j < k; j++){
            //cout << i << j << endl;
            tab[i][j] = rand() % 11;// dzielenie modulo(reszta z dzielenia, otrzymamy cyfre 100)
            cout << setw(4) << tab[i][j];
            
        }
        cout << endl;
    }
    
}


int tab2W(){
    int w, k, i;
    cout << "Ile wierszy i kolumn?";
    cin >> w >> k;
    int **tab;// deklaracja wskaznika
    
    
    try{
    tab = new int *[w]; // zarezerwuj miesjce dla wskaznikow ktore sa wskaznikami do liczb calkowitych
    } catch(bad_alloc){
        cout << "Za malo pamieci!";
    return 1;
    }
    
    
    for(i=0; i < w;i++){
        try{
        tab[i] = new int[k];  // utworzenie tablicy liczb calkowityvh
        } catch(bad_alloc){
            cout << "Za malo pamieci!";
        return 1;
            }
        }

    wypelnij2W(tab, w, k);
    return 0;
        
    }

int main(int argc, char **argv)
{
	
    tab2W();
    //tab1W();
    
	return 0;
}

