#include<iostream>
#include"Dostawca.h"
#include"Produkt.h"
#include"Produkt_przemys這wy.h"
#include"Produkt_spo篡wczy.h"
#include"Sklep.h"
using namespace std;

int main() {
	bool avaible;
	Produkt_spo篡wczy * chleb = new Produkt_spo篡wczy("chleb");
	Produkt_spo篡wczy * woda_mineralna = new Produkt_spo篡wczy("woda mineralna");
	Produkt_przemys這wy*notes = new Produkt_przemys這wy("notes");
	Produkt_przemys這wy*dlugopis = new Produkt_przemys這wy("dlugopis");
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