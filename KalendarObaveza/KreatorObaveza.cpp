#include <iostream>
#include "KreatorObaveza.h"

Obaveza* KreatorObaveza::kreirajObavezu()
{
    string ime, opis;
    int tip, status;


    cout << "Ovo je kreator vasih obaveza. Kako biste zapoceli kreiranje, unesite ime vase obaveze: ";
    getline(cin, ime);

    cout << "Unesite opis vaze obaveze (mozete ostaviti prazno): ";
    getline(cin, opis);

    int daniDoDeadlinea;
    cout << "Unesite za koliko dana je krajnji rok za vasu obavezu: ";
    cin >> daniDoDeadlinea;
    time_t deadline = KreatorObaveza::izracunajDatumDeadlinea(daniDoDeadlinea);

    cout << "Odaberite tip obaveze: " << Obaveza::ispisiTipoveObaveza() << endl;
    cin >> tip;

    cout << "Odaberite status obaveze: " << Obaveza::ispisiStatuseObaveze() << endl;
    cin >> status;


    return new Obaveza(ime, opis, deadline,tip, status);
}

time_t KreatorObaveza::izracunajDatumDeadlinea(int daniDoDeadlinea) {
    time_t now = time(0);
    return now + (daniDoDeadlinea * 24 * 60 * 60);
}

