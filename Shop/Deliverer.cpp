#include "Deliverer.h"



Dostawca::Dostawca(Sklep*tmp)
{
	this->tmp = tmp;
}

void Dostawca::dostarcz_do_sklepu(Produkt* wsk) {
	tmp->dodaj_do_magazynu(wsk);
}

Dostawca::~Dostawca()
{
}
