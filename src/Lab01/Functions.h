#pragma once
#include <stdio.h>
#include <stdlib.h>

struct TProduct
{
	char  name[10];
	int   count;
	int buyPrice;
	int sellPrice;
};

bool readFile(char* filename, struct TProduct* prod, int size);
bool saveToFile(char* filename, struct TProduct* prod, int size);
void sortElements(struct TProduct* prod, int size);
float zadanie(TProduct* prod, int size);
void printInfo(TProduct* prod, int size);
void menuSort(TProduct* prod, int size);
void sortElements4(TProduct* prod, int size);
void sortElements2(TProduct* prod, int size);
void sortElements3(TProduct* prod, int size);