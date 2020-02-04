#include "Functions.h"

int main()
{
	setlocale(LC_ALL, "rus");
	test_zadanie();
	test_allBuyPrice();
	system("pause");
	return 0;
}

bool test_zadanie()
{
	printf("--------------------------------\n");
	printf("���� ������� zadanie()\n\n������������...\n");
	TProduct prod[2] = { {"ASUS", 5, 150, 300 },{"DELL", 10, 250, 500 } };
						 
	float expected = 2.f;
	float actual = zadanie(prod, 2);
	if (expected == actual) {
		printf("���� ������� �������!\n\n");
		return true;
	}
	printf("���� ��������!\n\n");
	return false;
}

bool test_allBuyPrice()
{
	printf("--------------------------------\n");
	printf("Tec� ������� allBuyPrice()\n\n������������...\n");
	TProduct prod[2] = { {"ASUS", 5, 2000, 300 },{"DELL", 10, 12000, 500 } };
						
	int expected = 10000;
	int actual = allBuyPrice(prod, 1);
	if (expected == actual)
	{
		printf("���� ������� �������!\n\n");
		return true;
	}
	printf("���� ��������!\n\n");
	return false;
}
