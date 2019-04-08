#pragma once
#include"Product.h"
#include"Shop.h"
class Dostawca
{
	Sklep*tmp;
public:
	Dostawca(Sklep*tmp);
	void dostarcz_do_sklepu(Produkt *wsk);
	~Dostawca();
};

