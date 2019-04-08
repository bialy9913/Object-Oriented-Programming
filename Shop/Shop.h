#pragma once
#include<iostream>
#include<string>
#include<vector>
#include"Product.h"

using namespace std;

class Sklep{
	vector <Produkt*> produkty;
	int liczba_produktow;
public:
	Sklep();
	void dodaj_do_magazynu(Produkt*tmp);
	void sprzedaj(string m_name);
	bool jest_dostepny(string m_name);
	bool jest_dostepny(Produkt*wsk);
	void wyswietl_produkty();
	~Sklep();
};

