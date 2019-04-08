#pragma once
#include<string>
using namespace std;
class Produkt
{
protected:
	string nazwa;
public:
	Produkt();
	virtual string get_nazwa();
	~Produkt();
};

