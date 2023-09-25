#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "dataType.h"
#include "functions.h"

int izbornik(const char* const automobili) {
	printf("====================");
	printf("Odaberite jednu od ponudenih opcija:");
	printf("====================\n");
	printf("\t\t\tOpcija 1: dodavanje vrste automobila!\n");
	printf("\t\t\tOpcija 2: popis automobila!\n");
	printf("\t\t\tOpcija 3: ispisivanje podataka o automobilima!\n");
	printf("\t\t\tOpcija 4: pretrazivanje automobila!\n");
	printf("\t\t\tOpcija 5: izlaz iz programa\n");
	printf("================================================================\n");

	int uvijet = 0;
	static AUTOMOBIL* poljeAutomobila = NULL;
	static AUTOMOBIL* pronadeniAutomobil = NULL;
	scanf("%d", &uvijet);

	switch (uvijet) {
	case 1:
		dodajAutomobil(automobili);
		break;
	case 2:
		if (poljeAutomobila != NULL) {
			free(poljeAutomobila);
			poljeAutomobila = NULL;
		}
		poljeAutomobila = (AUTOMOBIL*)ucitavanjeAutomobila(automobili);
		if (poljeAutomobila == NULL) {
			exit(EXIT_FAILURE);
		}
		break;

	case 3:
		ispisivanjeAutomobila(poljeAutomobila);
		break;
	case 4:
		pronadeniAutomobil = (AUTOMOBIL*)pretrazivanjeAutomobila(poljeAutomobila);
		break;
	case 5:
		uvijet = izlazIzPrograma(poljeAutomobila);
		break;

	default:
		uvijet = 0;
	}
	return uvijet;
}
