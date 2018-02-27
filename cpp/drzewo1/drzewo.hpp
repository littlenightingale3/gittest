#ifndef DRZEWO_HPP
#define DRZEWO_HPP

struct Wezel {
    int wartosc;
    Wezel *lewy;
    Wezel *prawy;
};

class Drzewo {
    private: 
        Wezel *korzen;
        Wezel *stworzWezel(int wartosc); 
    public:
        Drzewo ();
        ~Drzewo ();
        void dodajWezel(Wezel *wezel, int wartosc);
        void wyswietlRosnaco(Wezel *wezel);
    
};

#endif
