#pragma once
#include <string>
#include <iostream>
#include <ctime>

using namespace std;

enum TipObaveze {
	FAKULTET = 1,
	HOBI = 2,
	KUCNI_POSLOVI = 3,
	PORODICA = 4,
	DRUZENJE = 5, 
	POSAO = 6
};

enum StatusObaveze {
	U_PLANU = 1,
	U_TOKU = 2,
	ODLOZENO = 3, 
	OTKAZANO = 4, //videcemo da li je potrebna! 
	ZAVRSENO = 5,
	ISTEKLO = 6, //ovo znaci da je nesto probilo deadline
};

class Obaveza
{
	private:
		string ime;
		string opis;
		time_t deadline;
		TipObaveze tip;
		StatusObaveze status;

	public:
		Obaveza(const string& ime1,const string& opis1, time_t deadline1, int tip1, int status1);
		
		void ispisiObavezu();

		static string ispisiTipoveObaveza();

		static string ispisiStatuseObaveze();

		string ispisiTip(TipObaveze tip);

		string ispisiStatus(StatusObaveze status);


		static  TipObaveze intUTipObaveze(int value);

		static StatusObaveze intUStatusObaveze(int value);
};

