#pragma once
#include<string>
#include"Product.h"

using namespace std;

class Produkt_przemys�owy:public Produkt
{
public:
	Produkt_przemys�owy(string m_nazwa="Wata szklana");
	string get_nazwa();
	~Produkt_przemys�owy();
};

