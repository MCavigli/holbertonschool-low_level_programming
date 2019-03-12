#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - prints a struct dog
 * @d: the structure
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		printf("Age: %.6f\n", d->age);
		if (d->owner)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");

	}
	else
		return;
}
