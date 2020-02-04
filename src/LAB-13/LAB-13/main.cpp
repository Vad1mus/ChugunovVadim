/**
 * @mainpage
 * <b> Лабораторна робота No 13. <br/> Модульне тестування. </b>
 * <br/> <b> Мета роботи: </b> придбати практичні навички з розробки модульних тестів. <br/>
 * <b> 1 Завдання до роботи <br/> Основне завдання <br/> </b>
 * Для попередньо розробленого функціоналу по роботі з прикладною областю, додати методи – модульні тести,
 * що демонструють коректність роботи розробленого функціоналу.
 *
 * @author Chugunov V.
 * @date 20-dec-2019
 * @version 1.0
 */

#include "Functions.h"

int main()
{
	int size = 5;
	struct TProduct* comp = (struct TProduct*)malloc(size * sizeof(struct TProduct));;
	char input[] = "Product.txt";
	char output[] = "Result.txt";
	if (!readFile(input, comp, size)) {
		exit(1);
	}
	printInfo(comp, size);

	//Функция для теста
	printf("\n\nAll buy price %i$\n\n", allBuyPrice(comp, 1));

	saveToFile(output, comp, size);
	menuSort(comp, size);
	printf("\n\\\\\\\\\\\\\\\\\\\\\\\\\\SORTING\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n\n");
	printInfo(comp, size);
	printf("\n\\\\\\\\\\\\\\\\\\\\\\\\\\SORTING DONE\\\\\\\\\\\\\\\\\\\\\\\\\\\n\n");

	float result = zadanie(comp, size);
	printf("||Zakupka men'she prodaji v = %f||\n\nThanks for using a Program!!!\n\n", result);

	free(comp);
	return 0;
}