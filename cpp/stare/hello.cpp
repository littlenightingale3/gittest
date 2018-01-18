/*
 * hello.cpp
 * 
 */


#include <iostream>



using namespace std;

#define ROK_TERAZ 2017
#define ROK_CPP 1983

int main(int argc, char **argv)
{
   
    string tekst;
    cout << "Podaj swoje imie. " << endl;
    cin >> tekst;
    cout << "Hello " << tekst << endl;
    int a;
    cout << "Ile masz lat " << endl;
    cin >> a;
    cout << "Urodziles sie w tym roku " << ROK_TERAZ - a << endl;
    
    if ( ROK_TERAZ-ROK_CPP < a){
        cout << "Jestes starszy niz C++" << endl;
    }
    
    if ( ROK_TERAZ-ROK_CPP > a){
        cout << "C++ jest starszy" << endl;
    }
    if ( ROK_TERAZ-ROK_CPP == a){
        cout << "Masz tyle samo lat co c++" << endl;
    }
        
    int[tablica]




	return 0;
}

