# -*- coding: utf-8 -*-


from peewee import *


baza_plik = "szkola.db"
baza = SqliteDatabase(baza_plik)  # ':memory:'

class BazaModel(Model):  # klasa bazowa
    class Meta:
        database = baza


class Klasa(BazaModel):
    id = IntegerField(primary_key=True)
    klasa = CharField(null=False)
    rok_naboru = IntegerField(null=False)
    rok_matury = IntegerField(null=False)

class Oceny(BazaModel):
    id = CharField(primary_key=True)
    Dataad = DateField(null=False)
    Uczen = IntegerField(null=True)
    Przedmiot = IntegerField(null=True)
    Ocena = DecimalField()
    id_Uczen = ForeignKeyField(Uczniowie, related_name='pracownicy')


class Przedmioty(BazaModel):
    id = CharField(primary_key=True)
    Przedmiot = IntegerField(null=False)
    NazwiskoNaucz = IntegerField(null=False)
    ImieNaucz = IntegerField(null=False)
    PlecNaucz = IntegerField(null=False)

class Uczniowie(BazaModel):
    id = CharField(primary_key=True)
    Imie = IntegerField(null=False)
    Nazwisko = IntegerField(null=False)
    Plec = IntegerField(null=False)
    Klasa = IntegerField(null=True)
    EgzHum
    EgzMat
    EgzJez
    id_Klasy = ForeignKeyField(Klasy, related_name='pracownicy')


baza.connect()

def kw_c():
    query = (Dzial
            .select(Dzial.siedziba, fn.Sum(Pracownik.placa). alias('place'))
            .join(Pracownik)
            .group_by(Dzial.siedziba)
            .order_by('place').asc()
            )

    for obj in query:
        print(obj.siedziba,obj.place)

kw_c()



def kw_d():
    query = (Pracownik
            .select(Dzial.id, Dzial.nazwa, Pracownik.imie,Pracownik.nazwisko)
            .join(Dzial)
            .order_by('Dzial.nazwa').asc()
            )

    for obj in query:
        print(obj.id_dzial.id, obj.id_dzial.nazwa, obj.imie, obj.nazwisko)
kw_d()



def kw_e():
    query = (Pracownik
            .select()
            .join(Premia)
            )
    for obj in query:
        print(obj.imie, obj.nazwisko, obj.stanowisko.id, obj.placa * obj.stanowisko.premia)
kw_e()


def kw_f():
    query = (Pracownik
            .select(fn.Avg(Pracownik.placa).alias('srednia'))
            .group_by(Pracownik.imie.endswith('a'))
            )
    for obj in query:
        print(obj.srednia)
kw_f()



def kw_h():
    query = (Pracownik
            .select(Pracownik.imie, Pracownik.nazwisko, Pracownik.stanowisko, Dzial.siedziba)
            .join(Dzial)
            )
    for obj in query:
        print(obj.imie,obj.nazwisko,obj.stanowisko.id,obj.id_dzial.siedziba)
kw_h()


def kw_i():
    query = (Pracownik
            .select(fn.count(Pracownik.id).alias('liczba'))
            .join(Dzial)
            .group_by(Dzial.siedziba)
            )
    for obj in query:
        print(obj.id_dzial.siedziba, liczba)
kw_i()
