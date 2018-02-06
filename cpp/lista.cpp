/*
 * lista.cpp
 */


#include <iostream>
#include "lista.hpp"

Lista::Lista(){
    head = NULL;
    tail = NULL;
    
}


Lista::~Lista(){
    while(Usun()){;};
}


void Lista::Dodaj(int wartosc){
        ELEMENT *el = new ELEMENT;//wskaznik do elementu
        el->wartosc = wartosc;
        el->nast = NULL;
        if (head == NULL) {
            head = el;
            tail = el;
        } else {
            tail -> nast = el;//ustawienie wskaznika nast dotychasowego
//ostattniego elementu na adres nowego ostatniego elementu 
            tail = el; //aktualizujemy wskaznik ogon, aby wksazywal na nowy dodany element
        
        }
    
}

void Lista::Wyswietl() {
    ELEMENT *el = head;
    while (el != NULL){
        std::cout << el -> wartosc << "" ;//using namespace std;
        el = el -> nast;
    }
    std::cout << std::endl;
    
}


bool Lista::Usun(){
    if (head != NULL) {
        if(head == tail){
            delete head; //usuwamy element nie head ani nie tail
            head = NULL;
            tail = NULL;
        }else{
                ELEMENT *el = head;
                while(el->nast != tail){
                    el = el-> nast; //zapisa adresu przedostatniego elemetnu
                }
                delete el->nast;
                el->nast = NULL;
                tail = el;
            }
            return true;
        }
    return false;
}


void Lista::Wstaw(int pozycja, int wartosc){
 ; //
    
}

















