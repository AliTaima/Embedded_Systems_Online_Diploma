/*
 * main.c
 *
 *  Created on: Jul 15, 2022
 *      Author: Ali Mohamed Taima
 */
#include "stdio.h"

int main()
{
	float num;
	printf("Enter a number: ");
	fflush(stdin);fflush(stdout);
	scanf("%f", &num);
	if(num > 0)
		printf("%.2f is positive", num);
	else if(num < 0)
		printf("%.2f is negative", num);
	else
		printf("You entered zero");

	return 0;

}

