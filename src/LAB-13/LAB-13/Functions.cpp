#include "Functions.h"

bool readFile(char* filename, TProduct* prod, int size)
{
	FILE* file = fopen(filename, "r");
	if (file == NULL) {
		printf("ERROR");
		return false;
	}
	for (int i = 0; i < size; i++)
	{
		fscanf(file, "%s" "%d" "%d" "%d", &prod[i].name, &prod[i].count, &prod[i].buyPrice, &prod[i].sellPrice);
	}
	fclose(file);
	return true;
}

bool saveToFile(char* filename, TProduct* prod, int size)
{
	FILE* file = fopen(filename, "w");
	if (file == NULL) {
		printf("ERROR");
		return false;
	}
	for (int i = 0; i < size; i++)
	{
		fprintf(file, "Name: %s " "Count of product: %d " " $BUY: %d " "$SELL:%d\n", prod[i].name, prod[i].count, prod[i].buyPrice, prod[i].sellPrice);
	}
	fclose(file);
	return true;
}

//Сортировки по возрастанию

void sortElements(TProduct* prod, int size)
{
	TProduct temp;
	int pr;
	do {
		pr = 0;
		for (int i = 0; i < size; i++)
		{
			if (prod[i].count > prod[i + 1].count)
			{
				temp = prod[i];
				prod[i] = prod[i + 1];
				prod[i + 1] = temp;
				pr = 1;
			}
		}
	} while (pr == 1);
}

void sortElements2(TProduct* prod, int size)
{
	TProduct temp;
	int pr;
	do {
		pr = 0;
		for (int i = 0; i < size; i++)
		{
			if (prod[i].buyPrice > prod[i + 1].buyPrice)
			{
				temp = prod[i];
				prod[i] = prod[i + 1];
				prod[i + 1] = temp;
				pr = 1;
			}
		}
	} while (pr == 1);
}

void sortElements3(TProduct* prod, int size)
{

	TProduct temp;
	int pr;
	do {
		pr = 0;
		for (int i = 0; i < size; i++)
		{
			if (prod[i].sellPrice > prod[i + 1].sellPrice)
			{
				temp = prod[i];
				prod[i] = prod[i + 1];
				prod[i + 1] = temp;
				pr = 1;
			}
		}
	} while (pr == 1);
}

void sortElements4(TProduct* prod, int size)
{
	TProduct temp;
	int pr;
	do {
		pr = 0;
		for (int i = 0; i < size; i++)
		{
			if (strcmp(prod[i].name, prod[i + 1].name) > 0)
			{
				temp = prod[i];
				prod[i] = prod[i + 1];
				prod[i + 1] = temp;
				pr = 1;
			}
		}
	} while (pr == 1);
}

// Вывод структур на экран 

void printInfo(TProduct* prod, int size)
{

	printf("\n\tName\tCount\tBuyPrice\tSellPrice\n");
	for (int i = 0; i < size; i++)
	{
		int a = i + 1;
		printf("%d)\t%s\t%d\t%d$\t\t%d$\n", a, prod[i].name, prod[i].count, prod[i].buyPrice, prod[i].sellPrice);

	}

}

/*(для теста) Функция, которая считает сколько всего нужно отдать 
за закупку определенного количества товара*/

int allBuyPrice(TProduct* prod, int elemNumber)
{

	int res = 0;
	for  (int i = 0;  i < prod[elemNumber-1].count ;  i++)
	{
		res += prod[elemNumber-1].buyPrice;
	}
	return res;
}

float zadanie(TProduct* prod, int size)
{

	float sumBuy = 0, sumSell = 0;
	for (int i = 0; i < size; i++)
	{
		sumBuy += prod[i].buyPrice;
		sumSell += prod[i].sellPrice;
	}
	return (sumSell / size) /( sumBuy / size);
}

//Меню выбора сортировок

void menuSort(TProduct* prod, int size)
{


	printf("\nChoose your type of sorting:\n1 - sort of count\n");
	printf("2 - sort of buy Price\n3 - sort of sellPrice\n4 - sort of chars\n ");

	int a = 0;
	scanf("%i", &a);
	if (a == 1)
	{
		sortElements(prod, size);
	}
	else if (a == 2)
	{
		sortElements2(prod, size);
	}
	else if (a == 3)
	{
		sortElements3(prod, size);
	}
	else if (a == 4) {
		sortElements4(prod, size);
	}
	else
	{
		printf("ERROR! Wrong number!");
		exit(1);
	}
}
