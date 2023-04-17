#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints dog
 * @d: dog struct
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("(nil)");
	}
	else
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)");
			printf("Age: %f\n", d->age);
			printf("Owner: %s\n", d->owner);
		}
		else
		{
			printf("Name: %s\n", d->name);
			printf("Age: %f\n", d->age);
			printf("Owner: %s\n", d->owner);
		}
	}
}
