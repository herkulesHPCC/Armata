// Armata.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

class Armata {
protected:
	float kat = 0;
	float Vp = 0;
	float m = 0;
	float g;
public:
	void licz_zasieg();
	void licz_wysokosc();
	void czas_lotu();
	Armata();
	void wstaw_dane(float kat, float Vp, float m, float g);
	float zasieg();


};


int main()
{
    return 0;
}

