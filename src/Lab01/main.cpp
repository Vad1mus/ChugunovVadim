

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


