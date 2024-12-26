#pragma once
#include "Obaveza.h"
#include <string>

using namespace std;


class KreatorObaveza
{
public: 
	Obaveza* kreirajObavezu();

	static  time_t izracunajDatumDeadlinea(int daniDoDeadlinea);
};

