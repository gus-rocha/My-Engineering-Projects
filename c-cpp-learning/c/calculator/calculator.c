// calculator.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int only_one_operation(char* equation)
{
	int result = 0;
	char test[256];

	// 1. Identify the operator
	sscanf(equation, "%lf %c %lf", &test);
	// printf(test);

	// 2. Identify the values before and after the operator

	// 3. Do the math

	

	return 0;
}

int main()
{
	char temp[256]; // temporary buffer

	printf("Calculator Program:\nPlease, your temp:\n> ");
	
	fgets(temp, sizeof(temp), stdin);
	temp[strcspn(temp, "\n")] = '\0'; // removes new line

	char *equation = malloc(strlen(temp) + 1); // exact size + 1 for '\0'

	if (equation == NULL) return 1;
	strcpy(equation, temp);

	only_one_operation(equation);

	// printf("Equation: %s\n", equation);

	free(equation);

	return 0;
}