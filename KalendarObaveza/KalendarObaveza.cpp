#include "KreatorObaveza.h"

int main() {
    //Napravi objekat koji cita fajs sa inputa (CitacFajla, FajsProcesor,....)
    //Taj objekat treba da ima metod koji cita fajl iz nekog foldera, prebaci sadrzaj fajla (ovo moze da bude FajlParser) u vektor<Obaveza> i vrati vektor obaveza

    // Mi onda taj vektor ispisemo
    KreatorObaveza kreator;
    Obaveza* novaObaveza = kreator.kreirajObavezu();
    novaObaveza->ispisiObavezu();
    delete novaObaveza;

    return 0;
}
