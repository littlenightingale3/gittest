#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#

from peewee import *
from dane import * #import funkcji z dane.py

baza_plik = 'pracownicy.sqlite3' #tworzenie bazy
baza = SqliteDatabase(baza_plik) #polczanienie z baza


class BazaModel(Model):
    class Meta: 
        database = baza
        

class Premia(BazaModel):
    id = CharField(primary_key = True)
    premia = DecimalField()
    

class Dzial(BazaModel):
    id = IntegerField(primary_key = True)
    nazwa = CharField()
    siedziba = CharField()
    
class Pracownik(BazaModel):
    id = CharField(primary_key = True)
    nazwisko = CharField()
    imie = CharField()
    stanowisko = ForeignKeyField(Premia, related_name='pracownicy')
    data_zatr = CharField()
    placa = DecimalField(decimal_places=2)
    id_dzial = ForeignKeyField(Dzial, related_name='pracownicy')
    premia = DecimalField(decimal_places=2, default = 0)

    

baza.connect()
baza.create_tables([Premia, Dzial, Pracownik], True)

pracownicy = dane_z_pliku('pracownicy.txt')
pracownicy = wyczysc_dane(pracownicy, 5)

premia = dane_z_pliku('premia.txt')
premia = wyczysc_dane(premia, 1)

dzial = dane_z_pliku('dział.txt')

pracownicy = wstaw_premie(pracownicy, dict(premia))

premia = [dict(zip(Premia._meta.sorted_field_names, row)) for row in premia]

dzial = [dict(zip(Dzial._meta.sorted_field_names, row)) for row in dzial]

pracownicy = [dict(zip(Pracownik._meta.sorted_field_names, row)) for row in pracownicy]

print(pracownicy)

with baza.atomic():
    Premia.insert_many(premia).execute()
    Dzial.insert_many(dzial).execute()
    Pracownik.insert_many(pracownicy).execute()
#tworzenie instancji klasy

#obiekt = Premia(id = "Sprzataczka", premia = 0.2 )
#print(obiekt.id, obiekt.premia)
#.save()

#obiekt = Premia(id = "Sekretarka", premia = 0.35 )
#print(obiekt.id, obiekt.premia)
#obiekt.save()

