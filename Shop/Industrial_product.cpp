#include "Industrial_product.h"



Produkt_przemys�owy::Produkt_przemys�owy(string m_nazwa)
{
	nazwa = m_nazwa;
}

string Produkt_przemys�owy::get_nazwa() {
	return nazwa;
}


Produkt_przemys�owy::~Produkt_przemys�owy()
{
}
