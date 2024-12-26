#include "Obaveza.h"


Obaveza::Obaveza(const string& ime1, const string& opis1, time_t deadline1, int tip1, int status1)
    : ime(ime1), opis(opis1), deadline(deadline1), tip(intUTipObaveze(tip1)), status(intUStatusObaveze(status1)) {}


void Obaveza::ispisiObavezu() {
	cout << "Ime: " << ime << "\n";
	cout << "Opis: " << opis << "\n";
	char buffer[26]; // Enough space for ctime_s
	ctime_s(buffer, sizeof(buffer), &deadline); // Use ctime_s instead of ctime
	cout << "Deadline: " << buffer;
	cout << "Tip: " << ispisiTip(tip) << "\n";
	cout << "Status: " << ispisiStatus(status) << "\n";
}


string Obaveza::ispisiTipoveObaveza() {
	string rezultat;
	rezultat += "Fakultet (" + std::to_string(FAKULTET) + "), ";
	rezultat += "Hobi (" + std::to_string(HOBI) + "), ";
	rezultat += "Kucni poslovi (" + std::to_string(KUCNI_POSLOVI) + "), ";
	rezultat += "Porodica (" + std::to_string(PORODICA) + "), ";
	rezultat += "Druzenje (" + std::to_string(DRUZENJE) + "), ";
	rezultat += "Posao (" + std::to_string(POSAO) + ")";
	return rezultat;
}

string Obaveza::ispisiStatuseObaveze() {
	string rezultat;
	rezultat += "U planu (" + std::to_string(U_PLANU) + "), ";
	rezultat += "U toku (" + std::to_string(U_TOKU) + "), ";
	rezultat += "Odlozeno (" + std::to_string(ODLOZENO) + "), ";
	rezultat += "Otkazano (" + std::to_string(OTKAZANO) + "), ";
	rezultat += "Zavrseno (" + std::to_string(ZAVRSENO) + "), ";
	rezultat += "Isteklo (" + std::to_string(ISTEKLO) + ")";
	return rezultat;
}

string Obaveza::ispisiTip(TipObaveze tip) {
	switch (tip) {
	case FAKULTET: return "Fakultet";
	case HOBI: return "Hobi";
	case KUCNI_POSLOVI: return "Kucni poslovi";
	case PORODICA: return "Porodica";
	case DRUZENJE: return "Druzenje";
	case POSAO: return "Posao";
	default: return "Nepoznato";
	}
}

string Obaveza::ispisiStatus(StatusObaveze status) {
	switch (status) {
	case U_PLANU: return "U planu";
	case U_TOKU: return "U toku";
	case ODLOZENO: return "Odlozeno";
	case OTKAZANO: return "Otkazano";
	case ZAVRSENO: return "Zavrseno";
	case ISTEKLO: return "Isteklo";
	default: return "Nepoznato";
	}
}

TipObaveze Obaveza::intUTipObaveze(int value) {
	switch (value) {
	case FAKULTET: return FAKULTET;
	case HOBI: return HOBI;
	case KUCNI_POSLOVI: return KUCNI_POSLOVI;
	case PORODICA: return PORODICA;
	case DRUZENJE: return DRUZENJE;
	case POSAO: return POSAO;
	default: throw std::invalid_argument("Invalid integer value for TipObaveze");
	}
}

StatusObaveze Obaveza::intUStatusObaveze(int value) {
	switch (value) {
	case U_PLANU: return U_PLANU;
	case U_TOKU: return U_TOKU;
	case ODLOZENO: return ODLOZENO;
	case OTKAZANO: return OTKAZANO;
	case ZAVRSENO: return ZAVRSENO;
	case ISTEKLO: return ISTEKLO;
	default: throw std::invalid_argument("Invalid integer value for StatusObaveze");
	}
}
