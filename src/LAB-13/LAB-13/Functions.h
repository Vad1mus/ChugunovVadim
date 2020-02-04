#pragma once
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctime>
#include "Test.h"

struct TProduct
{
	char  name[10];
	int   count;
	int buyPrice;
	int sellPrice;
};

bool  readFile      (char* filename, TProduct* prod, int size);
bool  saveToFile    (char* filename, TProduct* prod, int size);
void  sortElements  (TProduct* prod, int size);
void  sortElements4 (TProduct* prod, int size);
void  sortElements2 (TProduct* prod, int size);
void  sortElements3 (TProduct* prod, int size);
float zadanie       (TProduct* prod, int size);
void  printInfo     (TProduct* prod, int size);
void  menuSort      (TProduct* prod, int size);
int allBuyPrice(TProduct* prod, int elemNumber);
