#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - a function that creates a variable of type dog
 * struct dog - a structure that has 3 elements
 * @d: a pointer to the structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the dog's owner
 * Description: a struct that has 3 elements ==
 * ==> a dog's name, a dog's age, and the name of the dog owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
