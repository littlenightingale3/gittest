# -*- coding: utf-8 -*-


from peewee import *
#from dane impott *

baza_plik = "szkola.db"
baza = SqliteDatabase(baza_plik)  # ':memory:'

class BazaModel(Model):  # klasa bazowa
    class Meta:
        database = baza


class Klasa(BazaModel):
    klasa = CharField(null=False)
    rok_naboru = IntegerField(null=False)
    rok_matury = IntegerField(null=False)


class uczen_klasa_id(BazaModel):
    nazwa = CharField(null=False)
    imien = CharField(null=False)
    nazwiskon = CharField(null=False)
    plecn = IntegerField(null=False)

class Ocena(BazaModel):
    dataad = DateField(null=False)
    uczen_id = IntegerField(null=False)
    przedmiot_id = IntegerField(null=False)
    ocena = DecimalField(decimal_places=10, default=2)
    uczen_id = ForeignKeyField(Uczen, related_name='szkola')
    przedmiot_id = ForeignKeyField(Przedmiot, related_name='szkola')


class Uczen(BazaModel):
    imie = CharField(null=False)
    nazwisko = CharField(null=False)
    plec = IntegerField(null=False)
    klasa_id = IntegerField(null=False)
    egzhum = IntegerField(null=False)
    egzmat = IntegerField(null=False)
    egzjez = IntegerField(null=False)
    klasa_id = ForeignKeyField(Klasa, related_name='pracownicy')


baza.connect()



def kw_a():
    query = (Uczen
            .select(Uczen.imie, Uczen.nazwisko,Uczen.klasa_id)
            .group_by(Uczen.klasa_id.startswith('a'))
            )
    for obj in query:
        print(obj.srednia)
kw_f()
