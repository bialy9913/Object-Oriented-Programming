#pragma once
#include<string>
#include"Product.h"

using namespace std;

class Produkt_przemysłowy:public Produkt
{
public:
	Produkt_przemysłowy(string m_nazwa="Wata szklana");
	string get_nazwa();
	~Produkt_przemysłowy();
};

