/*
 * kod_cezara.cxx
 *
 */


#include <iostream>

using namespace std;

void szyfruj(char tekst[], int klucz){
    klucz = klucz % 26;
    int i = 0; // indeks
    while (tekst[i] != '\0'){
        if (int)tekst[i] + klucz > 122) //nazwa tablicy indeks, odczytauje kolejny znak (int da am kod ascii)
            tekst[i] = (char)((int)tekst[i] + klucz - 26)
        else
            ;
        i ++;


    }



}


int main(int argc, char **argv)
{
    char tekst[100];
    int kluzc+ 3;
    cout << "Poaj tekst: " << endl;
    cin >> tekst;
    cout << "Podaj klucz";
    cin >> klucz;
    szyfruj(teskt, klucz);
    cout << tekst;



	return 0;
}

