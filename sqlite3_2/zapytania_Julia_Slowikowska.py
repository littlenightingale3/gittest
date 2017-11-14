# -*- coding: utf-8 -*-


from peewee import *


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
    Dataad = DateField(null=False)
    Uczen_id = IntegerField(null=False)
    Przedmiot_id = IntegerField(null=False)
    Ocena = DecimalField(nu)
    Uczen_id = ForeignKeyField(Uczniowie, related_name='szkola')
    Przedmiot_id = ForeignKeyField(Przedmioty, related_name='szkola')


class Uczen(BazaModel):
    Imie = CharField(null=False)
    Nazwisko = CharField(null=False)
    Plec = IntegerField(null=False)
    Klasa_id = IntegerField(null=False)
    EgzHum = IntegerField(null=False)
    EgzMat = IntegerField(null=False)
    EgzJez = IntegerField(null=False)
    Klasa_id = ForeignKeyField(Klasa, related_name='pracownicy')


baza.connect()
