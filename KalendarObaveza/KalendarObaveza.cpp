#include "KreatorObaveza.h"

int main() {
    //Napravi objekat koji cita fajs sa inputa (CitacFajla, FajsProcesor,....)
    //Taj objekat treba da ima metod koji cita fajl iz nekog foldera, prebaci sadrzaj fajla (ovo moze da bude FajlParser) u vektor<Obaveza> i vrati vektor obaveza

    // Mi onda taj vektor ispisemo
    KreatorObaveza kreator;
    Obaveza* novaObaveza = kreator.kreirajObavezu();
    novaObaveza->ispisiObavezu();
    delete novaObaveza;
    // kreirati fajl koji ce sadrzati osnovne obaveze. Za svaku obavezu je potrebno imati sve argumente koje postoje u objektu obaveza.cpp (napraviti 10 obaveza)
    //napraviti novu klasu koja radi sa fajlovima FajlProcesor koja treba da ucita fajl i da ispise fajl
    return 0;
}
