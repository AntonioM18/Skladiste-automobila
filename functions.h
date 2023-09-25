#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include "dataType.h"

int izbornik(const char* const);
void kreiranjeDatoteke(const char* const);
void dodajAutomobil(const char* const);
void* ucitavanjeAutomobila(const char* const);
void ispisivanjeAutomobila(const AUTOMOBIL* const);
void* pretrazivanjeAutomobila(AUTOMOBIL* const);
int izlazIzPrograma(AUTOMOBIL*);
#endif //FUNCTIONS_H
