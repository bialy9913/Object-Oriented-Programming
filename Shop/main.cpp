#include<iostream>
#include"Dostawca.h"
#include"Produkt.h"
#include"Produkt_przemys�owy.h"
#include"Produkt_spo�ywczy.h"
#include"Sklep.h"
using namespace std;

int main() {
	bool avaible;
	Produkt_spo�ywczy * chleb = new Produkt_spo�ywczy("chleb");
	Produkt_spo�ywczy * woda_mineralna = new Produkt_spo�ywczy("woda mineralna");
	Produkt_przemys�owy*notes = new Produkt_przemys�owy("notes");
	Produkt_przemys�owy*dlugopis = new Produkt_przemys�owy("dlugopis");
	Sklep * sklep = new Sklep();
	Dostawca*dostawca = new Dostawca(sklep);
	dostawca->dostarcz_do_sklepu(notes);
	dostawca->dostarcz_do_sklepu(dlugopis);
	dostawca->dostarcz_do_sklepu(chleb);
	dostawca->dostarcz_do_sklepu(woda_mineralna);
	sklep->wyswietl_produkty();
	if (sklep->jest_dostepny("chleb")) sklep->sprzedaj("chleb");
	if (sklep->jest_dostepny(notes)) sklep->sprzedaj(notes->get_nazwa());
	sklep->wyswietl_produkty();
	return 0;
}