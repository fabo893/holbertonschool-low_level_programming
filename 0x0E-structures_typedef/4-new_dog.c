#include "dog.h"

/**
 * *new_dog - pointer to a dog_t to create a new dog
 * @name: pointer to a char to give a name
 * @age: float variable
 * @owner: pointer to a char to give an owner
 * Return: On fails, NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *newdog;

	newdog = malloc(sizeof(struct dog));
	if (newdog == NULL)
		return (NULL);

	newdog->name = name;
	newdog->age = age;
	newdog->owner = owner;

	return (newdog);
}
