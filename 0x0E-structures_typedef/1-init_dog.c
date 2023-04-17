#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initialize dog struct
 * @d: dog struct
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
