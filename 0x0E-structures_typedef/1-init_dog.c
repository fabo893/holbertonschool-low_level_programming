#include "dog.h"

/**
 * init_dog - initialize a variable of type struct.
 * @d: pointer to a struct dog variable.
 * @name: pointer to the name given.
 * @age: variable to represent the age.
 * @owner: pointer to the name given.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
