#include "Shop.h"



Sklep::Sklep()
{
}

void Sklep::dodaj_do_magazynu(Produkt*tmp) {
	produkty.push_back(tmp);
}

void Sklep::sprzedaj(string m_name) {
	int i = 0;
	while (produkty[i]->get_nazwa() != m_name) {
		i++;
	}
	produkty.erase(produkty.begin()+i);
}

bool Sklep::jest_dostepny(string m_name) {
	bool avaible = false;
	int i = 0;
	while (i != produkty.size()) {
		if (produkty[i]->get_nazwa() == m_name) {
			avaible = true;
			break;
		}
		i++;
	}
	return avaible;
}

bool Sklep::jest_dostepny(Produkt*tmp) {
	bool avaible = false;
	int i = 0;
	while (i != produkty.size()) {
		if (produkty[i]->get_nazwa() == tmp->get_nazwa()) {
			avaible = true;
			break;
		}
		i++;
	}
	return avaible;
}

void Sklep::wyswietl_produkty() {
	for (int i = 0; i < produkty.size(); i++) {
		cout << produkty[i]->get_nazwa() << endl;
	}
	system("pause");
	cout << endl;
}

Sklep::~Sklep()
{
}
