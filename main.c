#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "functions.h"
#include "dataType.h"

int main(void) {
	int uvijet = 1;
	char automobili = '\0';
	FILE* fp = NULL;
	fp = fopen("automobili.txt", "w");
	if (fp == NULL) {
		perror("Otvaranje");
		exit(EXIT_FAILURE);
	}
	while (uvijet) {
		uvijet = izbornik(automobili);
	}

	printf("Zavrsetak programa!\n");

	return 0;
}
