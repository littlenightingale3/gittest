#ifndef LISTA_HPP
#define LISTA_HPP

struct ELEMENT{
  int wartosc;
  ELEMENT *nast; //wskaznik do nastepnego elementu listy
};


class Lista {
    private: //zeby z zewnatrz nie tykac sie tych wartosci pisze sie private  (hermetyzacja danych)
        ELEMENT *head;
        ELEMENT *tail;
        
    public: //interfejs publiczny (API klasy)
        Lista(); //konstrkutor
        ~Lista(); //destruktor 
        //memory leaks - wycieki pamieci(programy nie informuja systemu ze pamiec ktora wykorzystywal nie jest im juz potrzebna
        void Dodaj(int);
        void Wyswietl();
        bool Usun();
        void Wstaw(int, int);
    
};

#endif
