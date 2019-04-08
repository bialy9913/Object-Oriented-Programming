#pragma once
#include<string>
#include"Product.h"
using namespace std;

class Produkt_spo¿ywczy:public Produkt
{
public:
	Produkt_spo¿ywczy(string m_nazwa="Jab³ko");
	string get_nazwa();
	~Produkt_spo¿ywczy();
};

