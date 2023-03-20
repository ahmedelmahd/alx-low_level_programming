#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a structure that has 3 elements
 * @name: name of dog
 * @age: age of dog
 * @owner: name of the owner of the dog
 * Description: a structure that has 3 elements:
 * name of the dog, age of the dog, and the name of the dog owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
